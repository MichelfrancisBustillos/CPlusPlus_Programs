#ifndef __SLOTS_H_INCLUDED__
#define __SLOTS_H_INCLUDED__

#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class slotMachine
{
public:
	slotMachine();
	void DrawSlots();
	void PullSlot();
	bool WinChecker();
	bool setSlotFunds(int);
	bool setPlayerFunds(int);
	int getSlotFunds();
	int getPlayerFunds();
private:
	char theSlotSpots[5];
	int slotFunds;
	int playerFunds;
};
#endif // !__SLOTS_H_INCLUDED__
