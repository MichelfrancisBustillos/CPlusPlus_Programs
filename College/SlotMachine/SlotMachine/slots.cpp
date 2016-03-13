#include "slots.h"

slotMachine::slotMachine()
{
	srand(time(NULL));
	for (int c = 0; c < 5; c++)
	{
		this->theSlotSpots[c] = 0;
	}
}

void slotMachine::DrawSlots()
{
	for (int c = 0; c < 5; c++)
	{
		cout << (int)this->theSlotSpots[c] << " ";
	}
	cout << endl;
}

void slotMachine::PullSlot()
{
	for (int c = 0; c < 5; c++)
	{
		this->theSlotSpots[c] = rand() % 4 + 1;
	}
}

bool slotMachine::WinChecker()
{
	bool isWin = true;
	for (int c = 0; c < 4; c++)
	{
		if (this->theSlotSpots[c] == 0 ||
			this->theSlotSpots[c] == 1)
		{
			isWin = false;
		}
	}
	return isWin;
}

bool slotMachine::setPlayerFunds(int newAmt)
{
	if (newAmt >= 0)
	{
		this->playerFunds = newAmt;
		return true;
	}
	return false;
}

bool slotMachine::setSlotFunds(int newAmt)
{
	if (newAmt >= 0)
	{
		this->slotFunds = newAmt;
		return true;
	}
	return false;
}

int slotMachine::getSlotFunds()
{
	return this->slotFunds;
}

int slotMachine::getPlayerFunds()
{
	return this->playerFunds;
}