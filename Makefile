
battleship: main.o board.o player.o playermanager.o
	g++ -std=c++11 -g -Wall main.o board.o player.o playermanager.o -o battleship

main.o: main.cpp board.o player.o playermanager.o
	g++ -std=c++11 -g -Wall -c main.cpp

playermanager.o: playermanager.h playermanager.cpp player.o
	g++ -std=c++11 -g -Wall -c playermanager.cpp

player.o: player.h player.cpp board.o
	g++ -std=c++11 -g -Wall -c player.cpp

board.o: board.h board.cpp
	g++ -std=c++11 -g -Wall -c board.cpp

clean:
	rm battleship *.o
