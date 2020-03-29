CC =gcc
CFLAGS=-pedantic -Wall

forkexample:
	$(CC) $(CFLAGS) -o forkexample forkexample.c

shmwriter:
	$(CC) $(CFLAGS) -o shmwriter shmwriter.c -lrt

shmreader:
	$(CC) $(CFLAGS) -o shmreader shmreader.c -lrt

all: forkexample shmwriter shmreader

clean:
	rm -f *~ *.o forkexample shmwriter shmreader
