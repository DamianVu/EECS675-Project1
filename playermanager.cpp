
#include "playermanager.h"

PlayerManager::PlayerManager(int n) {
	playerCount = n;
	players = new Player * [n];
	for (int i = 0; i < n; i++)
		players[i] = new Player();
}

PlayerManager::~PlayerManager() {
	for (int i = 0; i < playerCount; i++) {
		delete players[i];
	}
	delete [] players;
}

Player * PlayerManager::getPlayer(int loc) {
	return players[loc];
}
