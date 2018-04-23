CC = gcc
CFLAGS = -Wall -O3
LDFLAGS = 
OBJFILES = main.o functions.o
TARGET = out 

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) $(OBJFILES) -o $(TARGET) $(LDFLAGS) 
clean:
	rm -f *.o 
