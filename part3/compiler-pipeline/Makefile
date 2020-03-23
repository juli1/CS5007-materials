part1:
	$(CC)	-E file.c

part2:
	$(CC)	-S file.c
	cat file.s

part3:
	$(CC)	-c file.c
	objdump -x file.o
	hexdump file.o

part4:
	$(CC)	-c file.c
	$(CC) -o program file.o -lc

clean:
	rm -f *~ *.s a.out 

.PHONY: part1 part2
