{
  description = "Inference engine development tools";

  inputs.librelane.url = "github:librelane/librelane/3.0.17";
  inputs.nixpkgs.url =
    "github:NixOS/nixpkgs/b3aad468604d3e488d627c0b43984eb60e75e782";

  outputs = { nixpkgs, librelane, ... }:
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

            librelane.packages.${pkgs.stdenv.hostPlatform.system}.default
            librelane.legacyPackages.${pkgs.stdenv.hostPlatform.system}.klayout
          ];
        };
      });
    };
}