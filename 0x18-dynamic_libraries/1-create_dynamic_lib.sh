#!/bin/bash
echo "Creating Dynamic Library..."
gcc -g -fPIC -Wall -Wextra -Werror -pedantic  -std=gnu89 *.c -shared -o liball.so
ls liball.so
echo "Complete"

