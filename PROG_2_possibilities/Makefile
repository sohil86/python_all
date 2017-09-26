HEADERS = header.h
SOURCE = possible_2.c
CC = gcc
default: possible_2

possible_2: $(SOURCE) $(HEADERS)
	$(CC) $(SOURCE) -I $(HEADERS) -o $@
	$(CC) $(SOURCE) -I $(HEADERS) -o possible_2.o

clean:
	-rm -f possible_2
	-rm -f possible_2.o
