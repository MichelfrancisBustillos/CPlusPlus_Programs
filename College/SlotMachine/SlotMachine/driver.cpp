#include "slots.h"
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	slotMachine mySlotMachine;
	mySlotMachine.PullSlot();
	while (1)
	{
		if (mySlotMachine.WinChecker())
		{
			cout << "You win! There were no 1's." << endl << endl;
			break;
		}
		cout << "Press any key to pull..." << endl;
		_getch();
		mySlotMachine.PullSlot();
		mySlotMachine.DrawSlots();
	}

	return 0;
}
