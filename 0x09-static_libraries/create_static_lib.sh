#!/bin/bash

# create object file of all file end with .c
gcc -c *.c

# make static libarary will all the file end with .o
ar -rc liball.a *.o
