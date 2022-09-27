CC = gcc

#CFLAGS = -g -Wall
CFALGS = ""

OBJS = get_sign.o

TARGET = get_sign

all: $(TARGET)

$(TARGET): main.o get_sign.o
	$(CC) $(OBJS) -Od -o $(TARGET) main.o

main.o: main.c get_sign.h
	$(CC) -c main.c

get_sign.o: get_sign.c get_sign.h
	$(CC) -c get_sign.c

clean:
	$(RM) $(TARGET)
	$(RM) -f *~ *.o