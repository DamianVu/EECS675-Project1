
#include "board.h"

Board::Board(int n, int m) {
	size = n;
	board = new char * [n];
	for (int i = 0; i < n; i++) {
		board[i] = new char[n + 1];
		board[i][n+1] = 0; // Makes it easier to print later
	}
}

Board::~Board() {
	for (int i = 0; i < size; i++)
		delete [] board[i];
	delete [] board;
}

void Board::print() {
	for (int i = 0; i < size; i++)
		std::cout << board[i] << "\n";
	std::cout << "\n";
}
