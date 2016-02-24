#include<iostream>
#include<iomanip>
#include<time.h>
#include<random>

using namespace std;


int main()
{
	bool answer = true;
	int answerNum = -1;

	while(answer == true)
	{
		int a = rand() % 5 + 0;
		int b = rand() % 5 + 0;

		cout << a << " * " << b << " = ", cin >> answerNum;

		if (answerNum != (a * b)) 
		{
			cout << endl << "Wrong!" << endl;
			answer = false;
		}
		else
		{
			cout << endl;
		}
	}

	return 0;
}
