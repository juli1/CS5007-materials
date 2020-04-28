CC =gcc
CFLAGS=-pedantic -Wall -g
LDFLAGS=-lrt -pthread

pthread-create:
	$(CC) $(CFLAGS) $(LDFLAGS) -o pthread-create pthread-create.c

pthread-barrier:
	$(CC) $(CFLAGS) $(LDFLAGS) -o pthread-barrier pthread-barrier.c

all: pthread-create pthread-barrier

clean:
	rm -f *~ *.o pthread-create pthread-barrier
