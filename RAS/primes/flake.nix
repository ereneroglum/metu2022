{
  description = "Flake to build libprimes";

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
          libprimes = pkgs.stdenv.mkDerivation {
            pname = "libprimes";
            version = "1.0.0";
            nativeBuildInputs = with pkgs; [ autoreconfHook ];
            src = ./.;
          };
        };
        defaultPackage = packages.libprimes;
      }
    );
}
