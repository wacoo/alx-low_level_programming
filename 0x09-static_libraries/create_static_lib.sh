#!/bin/bash
echo "Compiling..."
gcc -Wall -pedantic -Wextra -Werror -std=gnu89 -c *.c
echo "Compile successful!"
ar -rc liball.a *.o
echo "Compiled object files"
echo "====================="
ar -t liball.a
echo "Complete."

