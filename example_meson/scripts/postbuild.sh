#!/bin/sh

echo "this is post build script with argument $1\n"

cp ./builddir/test_app ./test_app && rm -rf builddir
