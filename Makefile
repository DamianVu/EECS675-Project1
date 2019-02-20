
FLAGS = -std=c++11 -g -Wall -pthread

battleship: main.o board.o player.o playermanager.o
	g++ $(FLAGS) main.o board.o player.o playermanager.o -o battleship

main.o: main.cpp board.o player.o playermanager.o
	g++ $(FLAGS) -c main.cpp

playermanager.o: playermanager.h playermanager.cpp player.o
	g++ $(FLAGS) -c playermanager.cpp

player.o: player.h player.cpp board.o
	g++ $(FLAGS) -c player.cpp

board.o: board.h board.cpp
	g++ $(FLAGS) -c board.cpp

clean:
	rm battleship *.o
