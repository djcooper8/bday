CC=g++
CFLAGS=-I.


bday: birthdays.o start.o test.o
	$(CC) -o bday birthdays.cpp start.cpp test.cpp


