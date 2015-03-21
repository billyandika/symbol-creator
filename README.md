# Symbol Creator in C++
Simple C++ app to create file with user-specific number of symbols and size. Supports 1-256 extended ASCII characters and 10000 repetitions. This would be ideal for testing compression algorithms.

# Usage
First, build with make

e.g. `make symbolcreator` or simply `make`

Next, run the executable.


`./symbolcreator <filesize> <rep> outfile`

Example:
`./symbolcreator 256 1000 outfile`

This will create a binary file with 256 unique symbols and size 256000 bytes.
