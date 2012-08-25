TARGET = command
SOURCES = $(wildcard *.c *.cc)
OBJS = $(patsubst %.c,%.o,$(patsubst %.cc,%.o,$(SOURCES))) 
CC = gcc
XX = g++
CFLAGS = -g -Wall -O

$(TARGET): $(OBJS)
	$(XX) -o $(TARGET) $(OBJS)
%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<
%.o:%.cc %.hh
	$(XX) $(CFLAGS) -o $@ -c $<

.PHONY :clean
clean:
	-rm $(TARGET) $(OBJS)
