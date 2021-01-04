CC = g++
CFLAGS  = -g -Wall

default: game

game:  character.o game.o main.o
	$(CC) $(CFLAGS) -o game character.o game.o main.o

bin/character.o:  character.cpp header/character.h
	$(CC) $(CFLAGS) -c character.cpp

bin/game.o:  game.cpp header/Game.h
	$(CC) $(CFLAGS) -c game.cpp
bin/main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean: 
	$(RM) game *.o *~
