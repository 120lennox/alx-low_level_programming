#!/bin/bash

# Get all the .c files in the current directory
SRCS=$(ls *.c)

# Compile each .c file into a .o object file
for SRC in $SRCS
do
  OBJ=${SRC%.c}.o
  gcc -c $SRC -o $OBJ
done

# Create the static library
ar rcs liball.a *.o
rm *.o
