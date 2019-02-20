
#include <iostream>
#include <string>
#include <thread>
#include <cstdlib>


int main(int argc, char** argv) {
	if (argc != 4) {
		std::cout << "Usage: ./battleship #players #size #ships\n";
		return 1;
	}
	int p = std::stoi(argv[1]);
	int n = std::stoi(argv[2]);
	int m = std::stoi(argv[3]);


}
