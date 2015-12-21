CC=cc
CFLAGS=-Wall -g
DEPS=eval.h
OBJ=eval.o

%.o: %.c $(DEPS)
	$(CC) $< $(CFLAGS) -c -o $@ 

main: main.c $(OBJ)
	cc $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -f *.o main

