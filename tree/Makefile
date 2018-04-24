CC = gcc
CFLAGS = -Wall -O3
LDFLAGS = 
OBJFILES = main.o functions.o 
DEPS = tree.h

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< 
result: $(OBJFILES)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) 
clean:
	rm -f *.o result
