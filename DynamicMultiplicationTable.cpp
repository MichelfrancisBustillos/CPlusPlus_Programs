#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	//declarations
	int rows = 0;
	int columns = 0;
	int grid[11][11] = { { 0,0,0,0,0,0,0,0,0,0,0 }, //1
	{ 0,0,0,0,0,0,0,0,0,0,0 }, //2
	{ 0,0,0,0,0,0,0,0,0,0,0 }, //3
	{ 0,0,0,0,0,0,0,0,0,0,0 }, //4
	{ 0,0,0,0,0,0,0,0,0,0,0 }, //5
	{ 0,0,0,0,0,0,0,0,0,0,0 }, //6
	{ 0,0,0,0,0,0,0,0,0,0,0 }, //7
	{ 0,0,0,0,0,0,0,0,0,0,0 }, //8
	{ 0,0,0,0,0,0,0,0,0,0,0 }, //9
	{ 0,0,0,0,0,0,0,0,0,0,0 }, //10
	{ 0,0,0,0,0,0,0,0,0,0,0 } }; //11

								 //input
	cout << "Please enter a numbe of rows on the interval [1, 10]: ", cin >> rows, cout << endl;
	cin.clear();
	cin.ignore();
	while (rows < 1 || rows > 10)
	{
		cout << "That is not within the interval [1, 10]. Please try again..." << endl;
		cout << "Please enter a numbe of rows on the interval [1, 10]: ", cin >> rows, cout << endl;
	}

	cout << "Please enter a number of columns on the interval [1, 10]: ", cin >> columns, cout << endl;
	cin.clear();
	cin.ignore();
	while (columns < 1 || columns > 10)
	{
		cout << "That is not within the interval [1, 10]. Please try again..." << endl;
		cout << "Please enter a number of columns on the interval [1, 10]: ", cin >> columns, cout << endl;
	}

	//fill
	for (int x = 0; x <= columns; x++)
	{
		grid[0][x] = x;
	}

	for (int x = 0; x <= rows; x++)
	{
		grid[x + 1][0] = (x + 1);
	}

	for (int x = 1; x <= rows; x++)
	{
		for (int y = 1; y <= columns; y++)
		{
			grid[x][y] = grid[x][0] * grid[0][y];
		}
	}

	//output
	for (int c = 0; c < (rows + 1); c++)
	{
		for (int d = 0; d < (columns + 1); d++)
		{
			if ((c == 0) && (d == 0))
			{
				cout << setw(3) << "   |";
			}
			else
			{
				cout << setw(3) << grid[c][d] << "|";
			}
		}
		cout << endl;
		for (int e = 0; e < (columns + 1); e++)
		{
			cout << setw(3) << "---+";
		}
		cout << endl;
	}

	return 0;
}
