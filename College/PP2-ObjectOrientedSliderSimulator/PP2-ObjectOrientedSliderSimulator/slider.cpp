#include "slider.h"

slider::slider()
{
		this->initializeBoard();
		this->isBoardSolved();
		this->printBoard();
		if (this->isBoardSolved() == true)
		{
			cout << "isBoardSolved(): true" << endl;
		}
		else if (this->isBoardSolved() == false)
		{
			cout << "isBoardSolved(): false" << endl;
		}
		system("PAUSE");
		cout << "Scrambling board..." << endl;
		this->scrambleBoard();
		this->isBoardSolved();
		this->printBoard();
		cout << "Scrambling complete." << endl;
		system("PAUSE");

		system("CLS");
		this->printBoard();

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
			this->slideTile(move);
			system("CLS");
			check = this->isBoardSolved();
			this->printBoard();
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
}


void slider::initializeBoard()
{
	int count = 49;
	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			this->pB[c][d] = count;
			count++;
		}
	}
	this->pB[2][2] = '*';
}

void slider::printBoard()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	cout << endl;
	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			if (this->truths[c][d] == true)
			{
				SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			}
			else if (this->truths[c][d] == false)
			{
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			}
			cout << this->pB[c][d] << " ";
		}
		cout << endl;
	}
	cout << endl;
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

bool slider::isBoardSolved()
{
	char correctBoard[3][3] = { { '1','2','3' },{ '4','5','6' },{ '7','8','*' } };
	bool proof = true;

	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			if (this->pB[c][d] != correctBoard[c][d])
			{
				this->truths[c][d] = false;
				proof = false;
			}
			else
			{
				this->truths[c][d] = true;
			}
		}
	}

	return proof;
}

void slider::slideTile(char move)
{
	int x = 0;
	int y = 0;

	for (int c = 0; c <= 2; c++)
	{
		for (int d = 0; d <= 2; d++)
		{
			if (this->pB[c][d] == '*')
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
			this->pB[x][y] = this->pB[x - 1][y];
			this->pB[x - 1][y] = '*';
		}
		break;
	case 'w':
	case 'W':
	case 72:
		if (x != 2)
		{
			this->pB[x][y] = this->pB[x + 1][y];
			this->pB[x + 1][y] = '*';
		}
		break;
	case 'd':
	case 'D':
	case 77:
		if (y != 0)
		{
			this->pB[x][y] = this->pB[x][y - 1];
			this->pB[x][y - 1] = '*';
		}
		break;
	case 'a':
	case 'A':
	case 75:
		if (y != 2)
		{
			this->pB[x][y] = this->pB[x][y + 1];
			this->pB[x][y + 1] = '*';
		}
		break;
	case 'e':
	case 'E':
		this->initializeBoard();
	}
}

void slider::scrambleBoard()
{
	srand(time(NULL));
	for (int c = 0; c <= (rand() % 40000 + 20000); c++)
	{
		int movement = rand() % 4 + 1;
		if (movement == 1)
		{
			this->slideTile('w');
		}
		else if (movement == 2)
		{
			this->slideTile('a');
		}
		else if (movement == 3)
		{
			this->slideTile('s');
		}
		else if (movement == 4)
		{
			this->slideTile('d');
		}
	}
}
