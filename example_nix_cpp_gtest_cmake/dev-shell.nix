with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "gtest-cpp";
  version = "1.0";
  src = ./.;

  nativeBuildInputs = [ cmake separateDebugInfo  pkgconfig ];
  
  buildInputs = [ 
        figlet
        lolcat

        gcc9
        gdb
        glib
        
        openssl

        gtest
  ];

  checkInputs = [ gtest ];

  checkTarget = "test";

  shellHook = ''
      figlet "hello!" | lolcat --freq 0.5
  '';

}
