CC =gcc
CFLAGS=-pedantic -Wall -g -O0
LDFLAGS=-lrt -pthread

pthread-create:
	$(CC) $(CFLAGS) $(LDFLAGS) -o pthread-create pthread-create.c

pthread-barrier:
	$(CC) $(CFLAGS) $(LDFLAGS) -o pthread-barrier pthread-barrier.c

pthread-mutex:
	$(CC) $(CFLAGS) $(LDFLAGS) -o pthread-mutex pthread-mutex.c

pthread-cond:
	$(CC) $(CFLAGS) $(LDFLAGS) -o pthread-cond pthread-cond.c

pthread-semaphore:
	$(CC) $(CFLAGS) $(LDFLAGS) -o pthread-semaphore pthread-semaphore.c

all: pthread-create pthread-barrier pthread-semaphore pthread-mutex pthread-cond

clean:
	rm -f *~ *.o pthread-create pthread-barrier pthread-semaphore pthread-mutex pthread-cond
