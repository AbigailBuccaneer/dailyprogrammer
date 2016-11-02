with import <nixpkgs> {};
stdenv.mkDerivation rec {
  name = "daily-programmer-${version}";
  version = "2016-11-02";
  src = ./.;
  buildInputs = [ cmake ];
}
