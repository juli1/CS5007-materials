CC =gcc
CFLAGS=-pedantic -Wall -g

forkexample:
	$(CC) $(CFLAGS) -o forkexample forkexample.c

shmwriter:
	$(CC) $(CFLAGS) -o shmwriter shmwriter.c -lrt

shmreader:
	$(CC) $(CFLAGS) -o shmreader shmreader.c -lrt

signalhandler:
	$(CC) $(CFLAGS) -o signalhandler signalhandler.c -lrt

all: forkexample shmwriter shmreader signalhandler

clean:
	rm -f *~ *.o forkexample shmwriter shmreader signalhandler
