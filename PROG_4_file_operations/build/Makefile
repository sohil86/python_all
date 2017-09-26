HEADERS = ../include
SOURCE = ../source/file_4.c
CC = gcc
default: ../bin/file_4

../bin/file_4: $(SOURCE) $(HEADERS)
	$(CC) $(SOURCE) -I $(HEADERS) -o $@
	$(CC) $(SOURCE) -I $(HEADERS) -o ../source/file_4.o

clean:
	-rm -f ../bin/file_4
	-rm -f ../source/file_4.o
