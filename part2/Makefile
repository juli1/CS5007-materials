CC=/usr/bin/gcc
CFLAGS=-Wall

SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%)

%: %.c
	${CC} ${CFLAGS} $< -o $@


all: clean ${BINS}

clean:
	rm -f *~ ${BINS}

.PHONY: clean all
