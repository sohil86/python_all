HEADERS = ../Include
SOURCE = ../Source/RANDOM_NUMBER.c
CC = gcc
default: ../Bin/RANDOM_NUMBER

../Bin/RANDOM_NUMBER: $(SOURCE) $(HEADERS)
	$(CC) $(SOURCE) -I $(HEADERS) -o $@
	$(CC) $(SOURCE) -I $(HEADERS) -o ../Source/RANDOM_NUMBER.o
	
clean:
	-rm -f ../Bin/RANDOM_NUMBER
	-rm -f ../Source/RANDOM_NUMBER.o