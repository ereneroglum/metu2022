{
  description = "Flake to build libgcdf";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
      in rec {
        packages = flake-utils.lib.flattenTree {
          libgcdf = pkgs.stdenv.mkDerivation {
            pname = "libgcdf";
            version = "1.0.0";
            nativeBuildInputs = with pkgs; [ autoreconfHook ];
            src = ./.;
          };
        };
        defaultPackage = packages.libgcdf;
      }
    );
}
