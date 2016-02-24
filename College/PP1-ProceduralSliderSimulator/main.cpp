#include <iostream>
#include <random>
#include <algorithm>
#include <chrono> 
#include <windows.h>
#include <conio.h>

using namespace std;

void initializeBoard(char pB[][3]);
void printBoard(char pB[][3], bool truths[][3]);
bool isBoardSolved(char pB[][3], bool truths[][3]);
void slideTile(char pB[][3], char move);
void scrambleBoard(char pB[][3]);

int main()
{
	char pB[3][3];
	bool truths[3][3];

	initializeBoard(pB);
	isBoardSolved(pB, truths);
	printBoard(pB, truths);
	if (isBoardSolved(pB, truths) == true)
	{
		cout << "isBoardSolved(): true" << endl;
	}
	else if (isBoardSolved(pB, truths) == false)
	{
		cout << "isBoardSolved(): false" << endl;
	}
	system("PAUSE");
	cout << "Scrambling board..." << endl;
	scrambleBoard(pB);
	isBoardSolved(pB, truths);
	printBoard(pB, truths);
	cout << "Scrambling complete." << endl;
	system("PAUSE");

	system("CLS");
	printBoard(pB, truths);

	char move = ' ';
	bool check = false;
	if (check == true)
	{
		cout << "isBoardSolved(): true" << endl << endl;
	}
	else if (check == false)
	{
		cout << "isBoardSolved(): false" << endl << endl;
	}

	int key = 0;
	while ((move != 27) && (check != true))
	{
		cout << "Use arrow keys or WASD to move tiles. Press 'Esc' to quit" << endl;
		move = _getch();
		slideTile(pB, move);
		system("CLS");
		check = isBoardSolved(pB, truths);
		printBoard(pB, truths);
		if (check == true)
		{
			cout << "isBoardSolved(): true" << endl << endl;
		}
		else if (check == false)
		{
			cout << "isBoardSolved(): false" << endl << endl;
		}
	}

	if (check == true)
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

void initializeBoard(char pB[][3])
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

void printBoard(char pB[][3], bool truths[][3])
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	cout << endl;
	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			if (truths[c][d] == true)
			{
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			}
			else if (truths[c][d] == false)
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

bool isBoardSolved(char pB[][3], bool truths[][3])
{
	char correctBoard[3][3] = { { '1','2','3' },{ '4','5','6' },{ '7','8','*' } };
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

void slideTile(char pB[][3], char move)
{
	int x = 0;
	int y = 0;

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
	case 80:
		if (x != 0)
		{
			pB[x][y] = pB[x - 1][y];
			pB[x - 1][y] = '*';
		}
		break;
	case 'w':
	case 'W':
	case 72:
		if (x != 2)
		{
			pB[x][y] = pB[x + 1][y];
			pB[x + 1][y] = '*';
		}
		break;
	case 'd':
	case 'D':
	case 77:
		if (y != 0)
		{
			pB[x][y] = pB[x][y - 1];
			pB[x][y - 1] = '*';
		}
		break;
	case 'a':
	case 'A':
	case 75:
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

void scrambleBoard(char pB[][3])
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