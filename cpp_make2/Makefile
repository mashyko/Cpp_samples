CC = g++
CFLAGS = -g -Wall

ALL: main.o sub.o
	$(CC) $(CFLAGS) -o main main.o sub.o

main.o: main.cpp
	$(CC) $(CFLAGS) -o main.o -c main.cpp

sub.o: sub.cpp sub.h
	$(CC) $(CFLAGS) -o sub.o -c sub.cpp
