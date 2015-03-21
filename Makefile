CC=g++
CXXFLAGS=-std=c++11 -g
LDFLAGS=-g

all: symbolcreator

symbolcreator: symbolcreator.o

symbolcreator.o: symbolcreator.cpp

clean:
	rm -f symbolcreator *.o core*

