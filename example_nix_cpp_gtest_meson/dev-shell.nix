with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "gtest-cpp";
  version = "1.0";

  nativeBuildInputs = [ meson ninja separateDebugInfo  pkgconfig ];
  
  buildInputs = [ 
        figlet
        lolcat

        # build related
        gcc9
        gdb
        glib
        
        # ext library
        openssl

        # google test related
        gtest
        gmock
        gcovr
        lcov
  ];

  #checkInputs = [ gtest ];

  #checkTarget = "test";

  shellHook = ''
      figlet "hello!" | lolcat --freq 0.5

      export alias rebuild='meson builddir && ninja -C builddir'

  '';

}
