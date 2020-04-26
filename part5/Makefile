CC =gcc
CFLAGS=-pedantic -Wall -g

forkexample:
	$(CC) $(CFLAGS) -o forkexample forkexample.c

filewrite:
	$(CC) $(CFLAGS) -o filewrite filewrite.c

fileread:
	$(CC) $(CFLAGS) -o fileread fileread.c

dup:
	$(CC) $(CFLAGS) -o dup dup.c


all: forkexample filewrite fileread dup

clean:
	rm -f *~ *.o forkexample fileread filewrite dup
