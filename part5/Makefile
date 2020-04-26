CC =gcc
CFLAGS=-pedantic -Wall -g

forkexample:
	$(CC) $(CFLAGS) -o forkexample forkexample.c

filewrite:
	$(CC) $(CFLAGS) -o filewrite filewrite.c

fileread:
	$(CC) $(CFLAGS) -o fileread fileread.c

fileread2:
	$(CC) $(CFLAGS) -o fileread2 fileread2.c

filewrite2:
	$(CC) $(CFLAGS) -o filewrite2 filewrite2.c

fprintf:
	$(CC) $(CFLAGS) -o fprintf fprintf.c

fscanf:
	$(CC) $(CFLAGS) -o fscanf fscanf.c

dup:
	$(CC) $(CFLAGS) -o dup dup.c


all: forkexample filewrite filewrite2 fileread fileread2 fprintf fscanf dup

clean:
	rm -f *~ *.o forkexample fileread fileread2 filewrite filewrite2 fprintf fscanf dup
