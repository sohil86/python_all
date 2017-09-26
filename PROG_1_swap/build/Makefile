HEADERS = ../include
SOURCE = ../source/swap_1.c
CC = gcc
default: ../bin/swap_1

../bin/swap_1: $(SOURCE) $(HEADERS)
	$(CC) $(SOURCE) -I $(HEADERS) -o $@
	$(CC) $(SOURCE) -I $(HEADERS) -o ../source/swap_1.o

clean:
	-rm -f ../bin/swap_1
	-rm -f ../source/swap_1.o
