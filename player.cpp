
#include "player.h"

Player::Player() {}

Player::~Player() {
	delete board;
}

void Player::createBoard(int n, int m) {
	board = new Board(n,m);
}

void Player::printBoard() {
	board -> print();
}
