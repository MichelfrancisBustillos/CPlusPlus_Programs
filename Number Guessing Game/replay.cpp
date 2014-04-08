//-----------------------------REPLAY------------------------------------------------------------------
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

void replay (bool& quit, int again, int passlim, int &numGuesses)
{
	cout<<"Would you like to play again (1-yes, 2-no)? ", cin>>again, cout<<endl;
	system("CLS");
					
	if (again == 1)
	{
		cout<<"Playing Again..."<<endl;
		passlim = 0;
		numGuesses = 0;
	}
	else if (again == 2)
	{
		quit = true;
	}
	else
	{
		cout<<"INVALID ENTRY!"<<endl<<endl<<endl;
	}
}
