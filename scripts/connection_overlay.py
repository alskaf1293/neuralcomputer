import argparse
import re
import xml.etree.ElementTree as ET
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(
        description="Create a KLayout overlay for one neuron's connections."
    )
    parser.add_argument(
        "--layer",
        type=int,
        choices=range(3),
        default=1,
        help="Layer to inspect: 0, 1, or 2 (default: 1).",
    )
    parser.add_argument(
        "--neuron",
        type=int,
        choices=range(2),
        default=0,
        help="Neuron to inspect: 0 or 1 (default: 0).",
    )
    args = parser.parse_args()

    def_path = Path(
        "runs/network_serial/final/def/pc_network_222.def"
    )
    output_path = Path("/tmp/pc_network_connections.lyrdb")

    text = def_path.read_text()
    units = int(
        re.search(r"UNITS DISTANCE MICRONS\s+(\d+)", text).group(1)
    )
    nets = text.split("\nNETS ", 1)[1].split("\nEND NETS", 1)[0]

    selected_pin = re.compile(
        rf"G_LAYER\[{args.layer}\]\."
        rf"[^\s()]*G_NEURON\[{args.neuron}\]\.u_core\s+"
        r"(x_out|x_vec|back_vec|back_in)\["
    )

    report = ET.Element("report-database")
    ET.SubElement(report, "description").text = (
        f"Connections for layer {args.layer}, neuron {args.neuron}"
    )
    ET.SubElement(report, "top-cell").text = "pc_network_222"

    cells = ET.SubElement(report, "cells")
    cell = ET.SubElement(cells, "cell")
    ET.SubElement(cell, "name").text = "pc_network_222"

    directions = ("state_in", "state_out", "back_in", "back_out")

    categories = ET.SubElement(report, "categories")
    for name in directions:
        category = ET.SubElement(categories, "category")
        ET.SubElement(category, "name").text = name
        ET.SubElement(category, "description").text = (
            name + " connections for the selected neuron"
        )

    items = ET.SubElement(report, "items")
    counts = {name: 0 for name in directions}

    route_start = re.compile(
        r"\b(?:ROUTED|NEW)\s+(?:li1|met[1-5])\b"
    )
    point_pattern = re.compile(
        r"\(\s*(\*|-?\d+)\s+(\*|-?\d+)"
        r"(?:\s+[^)]*)?\s*\)"
    )

    for net in nets.split(";"):
        # DEF escapes brackets in hierarchical instance names.
        # Remove the escapes before matching the selected neuron.
        selected = selected_pin.search(net.replace("\\", ""))
        if not selected:
            continue

        pin = selected.group(1)

        if " x_out[" in net and " x_vec[" in net:
            direction = {
                "x_vec": "state_in",
                "x_out": "state_out",
            }.get(pin)

        elif " back_vec[" in net and " back_in[" in net:
            direction = {
                "back_in": "back_in",
                "back_vec": "back_out",
            }.get(pin)

        else:
            continue

        if direction is None:
            continue

        name_match = re.search(r"^\s*-\s+(\S+)", net)
        if not name_match:
            continue

        edges = []

        for route in route_start.split(net)[1:]:
            # RECT coordinates describe local patch geometry, not
            # another point on the route.
            route = re.split(r"\bRECT\b", route, maxsplit=1)[0]
            previous = None

            for x, y in point_pattern.findall(route):
                if x == "*" or y == "*":
                    if previous is None:
                        continue
                    x = previous[0] if x == "*" else int(x)
                    y = previous[1] if y == "*" else int(y)
                else:
                    x, y = int(x), int(y)

                point = (x, y)

                if previous is not None and point != previous:
                    edges.append((previous, point))

                previous = point

        if not edges:
            continue

        item = ET.SubElement(items, "item")
        ET.SubElement(item, "cell").text = "pc_network_222"
        ET.SubElement(item, "category").text = f"'{direction}'"

        values = ET.SubElement(item, "values")
        ET.SubElement(values, "value").text = (
            "text: '" + name_match.group(1) + "'"
        )

        for start, end in edges:
            ET.SubElement(values, "value").text = (
                f"edge: ({start[0] / units},{start[1] / units};"
                f"{end[0] / units},{end[1] / units})"
            )

        counts[direction] += 1

    ET.ElementTree(report).write(
        output_path,
        encoding="utf-8",
        xml_declaration=True,
    )

    print(f"Layer {args.layer}, neuron {args.neuron}")
    print("Created:", output_path)
    print("Nets:", counts)


if __name__ == "__main__":
    main()