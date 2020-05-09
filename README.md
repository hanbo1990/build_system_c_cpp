# Introduction

For engineers writing C/C++ code, build system is always important to start the project. For most IDEs, make files are auto generated (which are normally not user friendly enough). In this case programmers only need to add configuration like macros, pre-build or post-build scripts inside IDE configuration. But in some other projects without IDE or the user don't like the generated make files, it is necessary to write custom make files to set up the environment.

This tutorial is not meant to teach how to write the make file but to help programmers set up build environment with the help of different build systems focusing on [**meson**](https://mesonbuild.com/) and **makefile**.

Meson is chosen because it's quite straightforward. It's quite easy to include certain file or folder into your build list. You can find more information below. Generic makefile is also provided in case make file is must for some people.

The documentation can be found [here](https://hanbo1990.github.io/2020/05/09/Environment-Setup-for-C-Cpp/).
