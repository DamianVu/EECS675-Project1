
#include <iostream>
#include <string>
#include <thread>
#include <cstdlib>
#include "player.h"
#include "playermanager.h"

PlayerManager * pm;

bool startAttacking = false;

void initialize(int id, int n, int m) {
	Player * p = pm->getPlayer(id);
	p -> createBoard(n,m);
}

void fightToTheDeath(int id) {
	while (!startAttacking);
}

int main(int argc, char** argv) {
	if (argc != 4) {
		std::cout << "Usage: ./battleship #players #size #ships\n";
		return 1;
	}
	int p = std::stoi(argv[1]);
	int n = std::stoi(argv[2]);
	int m = std::stoi(argv[3]);

	pm = new PlayerManager(p);

	// Board Creation

	std::thread ** threads = new std::thread * [p];

	for (int i = 0; i < p; i++)
		threads[i] = new std::thread(initialize, i, n, m);

	for (int i = 0; i < p; i++)
		threads[i] -> join();

	// End of Board creation

	if (p == 2 && n <= 40) {
		std::cout << "~Initial Boards~\n\nPlayer 1:\n";
		pm -> getPlayer(0) -> printBoard();
		std::cout << "Player 2:\n";
		pm -> getPlayer(1) -> printBoard();
	}

	// Start attacks


	delete pm;
}
