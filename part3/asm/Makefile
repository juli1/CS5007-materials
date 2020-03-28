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


all: helloworld-s helloworld-nasm example arguments

clean:
	rm -f helloworld-nasm helloworld-s example arguments *.o *~

.PHONY: all clean
