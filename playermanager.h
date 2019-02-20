// playermanager.h
// Class: PlayerManager
//
// Usage: Does the heavylifting of managing the players and giving them to the threads.

#ifndef PM_H
#define PM_H

#include "player.h"
#include <cstdlib>

class PlayerManager {
public:
	PlayerManager(int n);
	~PlayerManager();

	Player * getPlayer(int loc);

	Player * getAttackablePlayer(int myLoc);

private:
	int playerCount;
	Player ** players;
};

#endif
