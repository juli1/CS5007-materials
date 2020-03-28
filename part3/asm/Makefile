helloworld-s:
	gcc -c helloworld.s
	ld -o helloworld-s helloworld.o

helloworld-nasm:
	nasm -f elf64 -o helloworld.o helloworld.asm
	ld -o helloworld-nasm helloworld.o

example:
	nasm -f elf64 -o example.o example.asm
	ld -o example example.o

arguments:
	nasm -f elf64 -o arguments.o arguments.asm
	ld -o arguments arguments.o

stack:
	nasm -f elf64 -o stack.o stack.asm
	ld -o stack stack.o

reverse:
	nasm -f elf64 -o reverse.o reverse.asm
	ld -o reverse reverse.o

integration:
	nasm -f elf64 -o functions.o functions.asm
	gcc -c functionused.c
	gcc -o functionused functionused.o functions.o

all: helloworld-s helloworld-nasm example arguments reverse integration

clean:
	rm -f helloworld-nasm helloworld-s example arguments *.o *~ reverse stack functionused

.PHONY: all clean
