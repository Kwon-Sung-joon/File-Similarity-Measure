
.SUFFIXES : .c .o
CC = gcc
CFLAGS = -g -c

OBJS = read_and_chunk.o hash.o sha1.o main.o
SRCS = $(OBJS:.o=.c)
TARGET = FSM

all : $(TARGET)


$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

clean:
	$(RM) $(OBJS)

main.o : main.h main.c

read_and_chunk.o : read_and_chunk.c

sha1.o : sha1.h sha1.c

hash.o : hash.c
