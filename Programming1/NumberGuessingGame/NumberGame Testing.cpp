//Michelfrancis Bustillos
//Program: Number Guessing Game

#include<iostream>
#include<string>
#include<windows.h>
#include<stdlib.h>
#include "parts.h"
#include "game1.h"
#include "game2.h"
#include "game3.h"
#include "replay.h"
#include "variations.h"

using namespace std;

//------------------------------MAIN-----------------------------------------------------------------------
int main()
{
    int secret; //correct number
    int numGuesses = 0; //number of guesses made
    int myGuess;  //user's guess
    bool quit = false; 
    string pass = "lora";  //correct user password
    string passe; //password user enters
    int passlim = 0; //counts how many times user enters a password
    int level; //user level selection
    int again; //user responce to 'play again?'
    srand (time(NULL)); //randomize random number generator
    
    while(!quit && passlim <= 4)
    {
        cout<<"Enter the password: ", cin>>passe, cout<<endl;
        system("CLS");
    
        if(passe == pass)
        {
            cout<<"Choose a level: "<<endl;
            cout<<"1. Easy"<<endl;
            cout<<"2. Medium"<<endl;
            cout<<"3. Hard"<<endl;
            cin>>level;
            system("CLS");
                        
            switch (level)
            {
				case 1:
					game1 (secret, myGuess, numGuesses);
					break;
                case 2:
					game2 (secret, myGuess, numGuesses);
					break;
				case 3:
					game3 (secret, myGuess, numGuesses);
					break;
				default:
					cout<<"Invalid Entry!";
			}
				
			replay (quit, again, passlim, numGuesses);
        }
        else
        {
            cout<<"Wrong Password! Try agian"<<endl;
            passlim++;
        }
    }
    system("CLS");
    cout<<"Goodbye!"<<endl<<endl<<endl;
           
    system("PAUSE");
    return 0;
}
