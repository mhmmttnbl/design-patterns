CC = g++
CFLAGS = -Wall
TARGET = main

objects = $(wildcard *.cpp)

$(TARGET) : $(objects)
	$(CC) $(CFLAGS) $^ -o $@ 

.PHONY : clean

clean :
	-rm $(TARGET)