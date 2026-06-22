CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGET = app.exe

OBJ = main.o logic.o storage.o

all: $(TARGET)
	del /Q $(OBJ)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

logic.o: logic.c
	$(CC) $(CFLAGS) -c logic.c -o logic.o

storage.o: storage.c
	$(CC) $(CFLAGS) -c storage.c -o storage.o

clean:
	del /Q *.o $(TARGET)

run: $(TARGET)
	./$(TARGET)