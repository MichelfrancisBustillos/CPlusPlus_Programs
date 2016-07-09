#include<iostream>
using namespace std;

bool primeCheck(int number);
void factorizer(int number);

int main()
{
	int number = 1;
	bool prime = false;

	cout << "Please enter a number (0 to exit): ", cin >> number, cout << endl;
	cin.ignore();
	cin.clear();
	if (number == 0)
	{
		cout << "Thank you for using!" << endl;
		return 0;
	}
	while (number < 3)
	{
		cout << number << " is out of our field of consideration ([2, inf] | Z)." << endl;
		cout << "Please enter a number (0 to exit): ", cin >> number, cout << endl;
		cin.ignore();
		cin.clear();
		if (number == 0)
		{
			cout << "Thank you for using!" << endl;
			return 0;
		}
	}

	if (primeCheck(number) == true)
	{
		cout << number << " is a PRIME number." << endl;
	}
	else
	{
		cout << number << " is a COMPOSITE number." << endl;
		factorizer(number);
	}

    return 0;
}

bool primeCheck(int number)
{
	bool prime = true;

	for (int c = 2; c <= (number / 2); c++)
	{
		if (number % c == 0)
		{
			prime = false;
			break;
		}
	}

	return prime;
}

void factorizer(int number)
{
	for (int c = 2; c <= number; c++)
	{
		if ((number % c) == 0)
		{
			if (primeCheck(c) == true)
			{
				cout << c << " has been found as a prime factor." << endl;
				number /= c;
				c--;
			}
		}
	}
}
