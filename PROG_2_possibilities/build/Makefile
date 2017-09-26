HEADERS = ../include
SOURCE = ../source/possible_2.c
CC = gcc
default: ../bin/possible_2

../bin/possible_2: $(SOURCE) $(HEADERS)
	$(CC) $(SOURCE) -I $(HEADERS) -o $@
	$(CC) $(SOURCE) -I $(HEADERS) -o ../source/possible_2.o

clean:
	-rm -f ../bin/possible_2
	-rm -f ../source/possible_2.o
