SOURCE = ../source/randomnum.c
CC = gcc
default: ../bin/randnum

../bin/randnum: $(SOURCE)
	$(CC) $(SOURCE) -o $@
	
clean:
	-rm -f ../bin/randnum
	