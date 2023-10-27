#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create a static library named liball.a from the compiled object files
ar rcs liball.a *.o

# Clean up the temporary object files
rm -f *.o

echo "Static library liball.a created successfully."
