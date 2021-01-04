CC = g++
CFLAGS  = -g -Wall

default: all

game:  character.o game.o 
	$(CC) $(CFLAGS) -o game character.o game.o

character.o:  character.cpp header/character.h
	$(CC) $(CFLAGS) -c character.cpp

game.o:  counter.c header/Game.h
	$(CC) $(CFLAGS) -c game.cpp
clean: 
	$(RM) game *.o *~
