## c++ nix-shell development Environment with meson and google test 

This sample project contains setup for **c++** environment with:

- Google test framework with html coverage report
- Meson build system
- Nix shell (dev-shell.nix) to manage dependencies and provide identical development environment

Workspace is configured by vscode with:

- google test adapter (plugin) settings
- Nix Environment Selector
- Launch settings for:
  - application 
  - unit test (required by google test debug)
- Tasks:
  - rebuild
  - generate coverage html report
  - pack coverage report and binary to output folder

All library dependencies are handled by nix via dpkg.

Source code is example code from internet with dependencies of OpenSSL.
