
#ifndef P_H
#define P_H

#include "board.h"

class Player {
public:
	Player();
	~Player();

	void createBoard(int n, int m);

	void printBoard();
	
private:
	Board * board;
};

#endif
