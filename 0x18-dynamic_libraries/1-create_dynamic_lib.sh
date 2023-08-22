#!/bin/bash

#######################################
# Generate object code(.o) from C files(.c)
gcc -c -fPIC *.c
#######################################
# Create a dynamic library containing all object files(.o) created
gcc -shared -o liball.so *.o
#######################################
