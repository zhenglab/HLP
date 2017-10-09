CC=gcc
CPP=g++
CFLAGS=

compare: compare.o max.o
	${CPP} -o compare compare.o max.o

compare.o: compare.cpp max.h
	${CPP} -c compare.cpp

max.o: max.cpp max.h
	${CPP} -c max.cpp

clean:
	rm compare compare.o max.o
