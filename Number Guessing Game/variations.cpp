//------------------------------VARIATIONS----------------------------------------------------------------
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

void variations (int myGuess, int secret)
{
    if (myGuess < secret)
    {
        cout<<"Too low, ";
    }
    else if (myGuess > secret)
    {
        cout<<"Too high, ";
    }
    cout<<"try again!"<<endl;
    
    if (myGuess == 9999)
    {
        cout<<endl<<"The secret is "<<secret<<endl;
    } 
}
