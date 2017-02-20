CC=gcc
CFLAGS=-I.
DEPS = quick_sort.h
OBJ = quick_sort.c testing.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)