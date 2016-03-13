#include "sorting.h"

Sorting::Sorting()
{

}

void Sorting::DisplayArray()
{
	for (int c = 0; c < LIST_SIZE; c++)
	{
		cout << this->numbersArray[c] << " ";
	}
	cout << endl << endl;
}

void Sorting::LoadArray(int* x)
{
	for (int c = 0; c < LIST_SIZE; c++)
	{
		this->numbersArray[c] = x[c];
	}
}

void Sorting::BubbleSort()
{
	bool swapped = true;
	int n = LIST_SIZE;

	while (swapped)
	{
		swapped = false;
		for (int c = 1; c <= (n - 1); c++)
		{
			if (this->numbersArray[c - 1] > this->numbersArray[c])
			{
				swap(this->numbersArray[c - 1], this->numbersArray[c]);
				swapped = true;
			}
		}
		n--;
	}
}

void Sorting::SelectionSort()
{
	int c, x;
	int n = LIST_SIZE;

	for (c = 0; c < (n - 1); c++)
	{
		int iMin = c;

		for (x = (c + 1); x < n; x++)
		{
			if (this->numbersArray[x] < this->numbersArray[iMin])
			{
				iMin = x;
			}
		}

		if(iMin != c)
		{ 
			swap(this->numbersArray[c], this->numbersArray[iMin]);
		}
	}
}

void Sorting::InsertionSort()
{
	int n = LIST_SIZE;

	for (int c = 1; c < n; c++)
	{
		int x = this->numbersArray[c];
		int y = c - 1;

		while ((y >= 0) && (this->numbersArray[y] > x))
		{
			this->numbersArray[y + 1] = this->numbersArray[y];
			y = y - 1;
		}
		this->numbersArray[y + 1] = x;
	}
}