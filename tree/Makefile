CC = gcc
CFLAGS = -Wall -O3
LDFLAGS = 
OBJ = main.o functions.o 
DEPS = tree.h

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< 
result: $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) 
clean:
	rm -f *.o result
