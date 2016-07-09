// INCLUDES AND NAMESPACES
#include <iostream>
#include <iomanip>
using namespace std;

// PROTOTYPES
int FibonacciIterative(int);
int FibonacciRecursive(int);

// MAIN
int main() {
	int i = 0;
	int items = 0;
	int type = 0;
	int element = 0;

	// YOUR DRIVER CODE GOES HERE
	cout << "LETS LOOK AT THE FIBONACCI SEQUENCE..." << endl << endl;
	cout << "Would you like to output a list(1) or specific element(2)? ", cin >> type, cout << endl;

	if (type == 1)
	{
		cout << "How many numbers in the Fibonacci sequence would you like printed? ", cin >> items, cout << endl;
		system("CLS");
		cout << "LETS LOOK AT THE FIBONACCI SEQUENCE..." << endl << endl;
		cout << left;
		cout.width(15);	cout << "ELEMENT";
		cout.width(15); cout << "ITERATIVE";
		cout.width(15); cout << "RECURSIVE" << endl;

		for (int c = 1; c <= items; c++)
		{
			cout.width(15); cout << c;
			cout.width(15); cout << FibonacciIterative(c);
			cout.width(15); cout << FibonacciRecursive(c) << endl;
		}
	}
	else if (type == 2)
	{
		cout << "What element in the sequence would you like? ", cin >> element, cout << endl;
		system("CLS");
		cout << "LETS LOOK AT THE FIBONACCI SEQUENCE..." << endl << endl;
		cout << left;
		cout.width(15);	cout << "ELEMENT";
		cout.width(15); cout << "ITERATIVE";
		cout.width(15); cout << "RECURSIVE" << endl;

		cout.width(15); cout << element;
		cout.width(15); cout << FibonacciIterative(element);
		cout.width(15); cout << FibonacciRecursive(element) << endl;
	}
	else
	{
		cout << "Error! Invalid input." << endl;
	}

	return 0;
}

// FUNCTION IMPLEMENTATIONS
// returns F_i of the Fibonacci sequence (iterative)
int FibonacciIterative(int i) {
	// YOUR ITERATIVE IMPLEMENTATION GOES HERE
	if (i == 0)
	{
		return 0;
	}
	int previous = 0;
	int current = 1;
	for (int c = 1; c < i; c++)
	{
		int nexter = previous + current;
		previous = current;
		current = nexter;
	}
	return current;
}

// returns F_i of the Fibonacci sequence (recursive)
int FibonacciRecursive(int i) {
	// YOUR RECURSIVE IMPLEMENTATION GOES HERE
	if ((i == 0) || (i == 1))
	{
		return i;
	}
	else
	{
		return (FibonacciRecursive(i - 1) + FibonacciRecursive(i - 2));
	}
}