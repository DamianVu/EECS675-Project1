
#ifndef B_H
#define B_H

#include <iostream>

class Board {
public:

	Board(int n, int m);
	~Board();

	void print();

private:
	char ** board;
	int size;
};

#endif
