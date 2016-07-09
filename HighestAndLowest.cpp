#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<locale>
using namespace std;

#define aSize 20

int ReturnLargest(int aRay[]);
int ReturnSmallest(int* a);
int ToUpperCase(char* n);

int main()
{
	srand(time(NULL));
	int aRay[aSize];
	char name[] = "Banana McMasters, the Private Investigator.";

	for (int c = 0; c < aSize; c++)
	{
		aRay[c] = rand() % 999 + 1;
	}

	char *n;
	int *a;
	n = name;
	a = aRay;

	cout << "Largest: " << ReturnLargest(aRay) << endl;
	cout << "Smallest: " << ReturnSmallest(a) << endl;
	cout << "Lower Cases Letters: " << ToUpperCase(n) << endl;

    return 0;
}

int ReturnLargest(int aRay[])
{
	int largest = 0;

	for (int c = 0; c < aSize; c++)
	{
		if (aRay[c] > largest)
		{
			largest = aRay[c];
		}
	}

	return largest;
}

int ReturnSmallest(int* a)
{
	int smallest = 1000;

	for (int c = 0; c < aSize; c++)
	{
		if (a[c] < smallest)
		{
			smallest = a[c];
		}
	}

	return smallest;
}

int ToUpperCase(char* n)
{
	int count = 0;
	int c = 0;

	while (n[c])
	{
		char x = n[c];
		if (islower(x))
		{
			count++;
			x = toupper(x);
		}
		n[c] = x;
		c++;
	}

	return count;
}