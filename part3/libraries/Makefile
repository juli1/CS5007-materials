shared:
	$(CC) -shared -o libfunctions.so libfunctions.c
	$(CC) -L. -Wall -o shared main.c -lfunctions
 
static:
	$(CC) -c libfunctions.c
	$(AR) crs libfunctions.a libfunctions.o
	$(CC) -static -o static main.c libfunctions.a

clean:
	rm -f static shared *~ *.o *.a *.so
