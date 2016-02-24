// INCLUDES AND NAMESPACES
#include <iostream>
using namespace std;

// DEFINES
#ifndef __TRUE_FALSE__
#define __TRUE_FALSE__
#define TRUE 1
#define FALSE 0
#endif

// FUNCTION PROTOTYPES
int DisplayMenuSelections();
void SetTestNumber();
void SignTest();
void EvenOddTest();
void PrimalityTest();

// GLOBALS
int gTestNumber = 0; // global variable that holds the number we are testing
bool gTestNumberSet = FALSE; // global variable that contains a boolean state reflecting
							 // whether or not the user has set the test number

// MAIN
int main() {

	switch (DisplayMenuSelections())
	{
	case 1:
		SetTestNumber();
		system("CLS");
		main();
		break;
	case 2:
		SignTest();
		break;
	case 3:
		EvenOddTest();
		break;
	case 4:
		PrimalityTest();
		break;
	case 5:
		cout << "EXITING PROGRAM" << endl;
		system("EXIT");
		break;
	case -1:
		cout << "Invalid selection!" << endl;
		system("EXIT");
		break;
	default:
		cout << "Error!" << endl;
		system("EXIT");
	}

	return 0;
}

// FUNCTION IMPLEMENTATIONS
// returns the user's menu selection code (-1 if invalid selection is made)
int DisplayMenuSelections() {

	int choice = 0;

	cout << "+-----------------------------------+" << endl;
	cout << "|      NUMERICAL ANALYSIS ENGINE    }" << endl;
	cout << "+-----------------------------------+" << endl;

	if (gTestNumberSet == false)
	{
		cout << "The current test number is: NOT YET SET" << endl;
		cout << "1.) Set the test number." << endl;
		cout << "5.) Exit the program." << endl;
		cout << ":", cin >> choice, cout << endl;
	}
	else if (gTestNumberSet == true)
	{
		cout << "The current test number is: " << gTestNumber << endl;
		cout << "1.) Set the test number." << endl;
		cout << "2.) Test for sign." << endl;
		cout << "3.) Test for even/odd." << endl;
		cout << "4.) Test for primality." << endl;
		cout << "5.) Exit the program." << endl;
		cout << ":", cin >> choice, cout << endl;
	}
	else
	{
		cout << "Error!" << endl;
	}
	
	if (choice < 1 || choice > 5)
	{
		return -1;
	}
	else
	{
		return choice;
	}
}

void SetTestNumber() {
	cout << "Enter the number you would like to test: ", cin >> gTestNumber, cout << endl;
	gTestNumberSet = true;
}

void SignTest() {
	if (gTestNumber < 0)
	{
		cout << "The number is negative..." << endl;
	}
	else
	{
		cout << "The number is positive..." << endl;
	}
}

void EvenOddTest() {
	if ((gTestNumber % 2) == 0)
	{
		cout << "The number is even..." << endl;
	}
	else
	{
		cout << "The number is odd..." << endl;
	}
}

void PrimalityTest() {
	bool prime = true;

	if ((gTestNumber < 3) && (gTestNumber >= 0))
	{
		cout << "The number is neither prime nor composite..." << endl;
	}
	else
	{
		for (int c = 2; c <= (gTestNumber / 2); c++)
		{
			if (gTestNumber % c == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime == false)
		{
			cout << "The number is composite..." << endl;
		}
		else
		{
			cout << "The number is prime..." << endl;
		}
	}
}