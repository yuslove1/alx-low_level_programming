#!/bin/bash

# make object file with all the file end with .c
gcc -c *.c

#make the static library will all the object file in the current directory
ar -rc liball.a *.o

#index it
ranlib liball.a
