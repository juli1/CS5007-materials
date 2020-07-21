CFLAGS=-O2 -pedantic -Wall

shared:
	$(CC) $(CFLAGS) -shared -o libfunctions.so libfunctions.c
	$(CC) $(CFLAGS) -L. -Wall -o shared main.c -lfunctions
 
static:
	$(CC) $(CFLAGS) -c libfunctions.c
	$(AR) crs libfunctions.a libfunctions.o
	$(CC) $(CFLAGS) -static -o static main.c libfunctions.a

clean:
	rm -f static shared *~ *.o *.a *.so
