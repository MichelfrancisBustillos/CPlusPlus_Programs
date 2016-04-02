#include <iostream>
#include <random>
#include <algorithm>
#include <chrono> 
#include <windows.h>
#include <conio.h>
#include <limits>

using namespace std;

CONST int arrayLength = 3;

void initializeBoard(char pB[][arrayLength]);
void printBoard(char pB[][arrayLength], bool truths[][arrayLength]);
bool isBoardSolved(char pB[][arrayLength], bool truths[][arrayLength]);
void slideTile(char pB[][arrayLength], char move);
void scrambleBoard(char pB[][arrayLength]);

int main()
{
	char pB[arrayLength][arrayLength];
	bool truths[arrayLength][arrayLength];

	initializeBoard(pB);
	isBoardSolved(pB, truths);
	printBoard(pB, truths);
	bool solved = isBoardSolved(pB, truths);
	if (solved)
	{
		cout << "isBoardSolved(): true" << endl;
	}
	else
	{
		cout << "isBoardSolved(): false" << endl;
	}
	cout << "Press ENTER to continue...";
	cin.get();
	cout << "Scrambling board..." << endl;
	scrambleBoard(pB);
	isBoardSolved(pB, truths);
	printBoard(pB, truths);
	cout << "Scrambling complete." << endl;
	cout << "Press ENTER to continue...";
	cin.get();

	cout << "\033[2J\033[1;1H";
	printBoard(pB, truths);

	char move = ' ';
	bool check = false;

	int key = 0;
	while ((move != 27) && (check != true))
	{
		cout << "Use arrow keys or WASD to move tiles. Press 'Esc' to quit" << endl;
		move = _getch();
		slideTile(pB, move);
		cout << "\033[2J\033[1;1H";
		check = isBoardSolved(pB, truths);
		printBoard(pB, truths);
		if (check)
		{
			cout << "isBoardSolved(): true" << endl << endl;
		}
		else
		{
			cout << "isBoardSolved(): false" << endl << endl;
		}
	}

	if (check)
	{
		cout << "You won!!" << endl;
	}
	else
	{
		cout << "Game ended." << endl;
	}

	cout << "Thanks for playing!" << endl;

	return 0;
}

void initializeBoard(char pB[][arrayLength])
{
	int count = 49;
	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			pB[c][d] = count;
			count++;
		}
	}
	pB[2][2] = '*';
}

void printBoard(char pB[][arrayLength], bool truths[][arrayLength])
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	cout << endl;
	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			if (truths[c][d])
			{
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			}
			else
			{
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			}
			cout << pB[c][d] << " ";
		}
		cout << endl;
	}
	cout << endl;
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

bool isBoardSolved(char pB[][arrayLength], bool truths[][arrayLength])
{
	char correctBoard[arrayLength][arrayLength] = { { '1','2','3' },{ '4','5','6' },{ '7','8','*' } };
	bool proof = true;

	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			if (pB[c][d] != correctBoard[c][d])
			{
				truths[c][d] = false;
				proof = false;
			}
			else
			{
				truths[c][d] = true;
			}
		}
	}

	return proof;
}

void slideTile(char pB[][arrayLength], char move)
{
	int x = 0;
	int y = 0;
	CONST int downKey = 80;
	CONST int upKey = 72;
	CONST int rightKey = 77;
	CONST int leftKey = 75;

	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			if (pB[c][d] == '*')
			{
				x = c;
				y = d;
			}
		}
	}

	switch (move)
	{
	case 's':
	case 'S':
	case downKey:
		if (x != 0)
		{
			pB[x][y] = pB[x - 1][y];
			pB[x - 1][y] = '*';
		}
		break;
	case 'w':
	case 'W':
	case upKey:
		if (x != 2)
		{
			pB[x][y] = pB[x + 1][y];
			pB[x + 1][y] = '*';
		}
		break;
	case 'd':
	case 'D':
	case rightKey:
		if (y != 0)
		{
			pB[x][y] = pB[x][y - 1];
			pB[x][y - 1] = '*';
		}
		break;
	case 'a':
	case 'A':
	case leftKey:
		if (y != 2)
		{
			pB[x][y] = pB[x][y + 1];
			pB[x][y + 1] = '*';
		}
		break;
	case 'e':
	case 'E':
		initializeBoard(pB);
	}
}

void scrambleBoard(char pB[][arrayLength])
{
	char items[9] = { '1','2','3','4','5','6','7','8','*' };
	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
	shuffle(begin(items), end(items), default_random_engine(seed));
	int count = 0;
	int counter = 0;

	while (counter == 0)
	{
		for (int c = 0; c <= 9; c++)
		{
			if (items[c] > items[c + 1])
			{
				counter++;
			}
		}

		if ((counter % 2) == 1)
		{
			shuffle(begin(items), end(items), default_random_engine(seed));
			counter = 0;
		}
	}

	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			pB[c][d] = items[count];
			count++;
		}
	}
}
