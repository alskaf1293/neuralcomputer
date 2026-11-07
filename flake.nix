{
  description = "Inference engine development tools";

  inputs.nixpkgs.url =
    "github:NixOS/nixpkgs/b3aad468604d3e488d627c0b43984eb60e75e782";

  outputs = { nixpkgs, ... }:
    let
      systems = [ "x86_64-linux" "aarch64-linux" ];
      forAllSystems = f: nixpkgs.lib.genAttrs systems
        (system: f nixpkgs.legacyPackages.${system});
    in
    {
      devShells = forAllSystems (pkgs: {
        default = pkgs.mkShell {
          packages = [
            pkgs.haskellPackages.sv2v
            pkgs.verilator
            pkgs.python3
            pkgs.gcc
            pkgs.gnumake
          ];
        };
      });
    };
}