{ pkgs ? (import <nixpkgs> {})
, stdenv ? pkgs.stdenv
, automake ? pkgs.automake
, autoconf ? pkgs.autoconf
, libtool ? pkgs.libtool
}:

stdenv.mkDerivation rec {
  name = "TamagoC";
  version = "0.0.1";

  src = ./.;

  buildInputs =
    [ automake autoconf libtool ];
  preConfigure =
    ''
      autoreconf -i
    '';
  installPhase =
    ''
      mkdir $out
      mkdir $out/lib
      mv src/libtamagoc.a $out/lib
    '';
}
