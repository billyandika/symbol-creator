# Symbol Creator in C++
This is a simple C++ app to create file with user-specified number of symbols and size. Supports 1-256 extended ASCII characters and up to 500000 repetitions for a maximum file size of 128MB. This would be ideal for testing compression algorithms.

# Usage
First, build with make

e.g. `make symbolcreator` or simply `make`

Next, run the executable.


`./symbolcreator <filesize> <rep> outfile`

e.g.
`./symbolcreator 256 1000 outfile`

This will create a binary file with 256 unique symbols and size 256000 bytes.
