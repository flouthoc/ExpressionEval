CC=gcc
CFLAGS=-Wall -g
OBJ=eval.o
DEPS=eval.h

%.o: %.c (DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

main: main.c $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm *.o main


