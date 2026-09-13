CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LIBS = -lm
TARGET = calculator

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) main.c -o $(TARGET) $(LIBS)

clean:
	rm -f $(TARGET) *.o
