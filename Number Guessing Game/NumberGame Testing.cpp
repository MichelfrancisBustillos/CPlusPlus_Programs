//Michelfrancis Bustillos
//Program: Number Guessing Game

#include<iostream>
#include<string>
#include<windows.h>
#include<stdlib.h>
#include<fstream>
#include "game1.h"
#include "game2.h"
#include "game3.h"
#include "replay.h"
#include "variations.h"
#include "leaderBoard.h"

using namespace std;

//------------------------------MAIN-----------------------------------------------------------------------
int main(int argc, char *argv[])
{
    int secret; //correct number
    int numGuesses = 0; //number of guesses made
    int myGuess;  //user's guess
    bool quit = false; 
    string pass = "lora";  //correct user password
    string apass = "admin"; //correct admin password
    string passe; //password user enters
    int passlim = 0; //counts how many times user enters a password
    int level; //user level selection
    int again; //user response to 'play again?'
    string name;
    int comman = 0;
    ofstream fout;
    srand (time(NULL)); //randomize random number generator
    
    fout.open("leaderboard.dat", ios::app);
    
    while(!quit && passlim <= 4)
    {
        cout<<"Enter your name: ", cin>>name, cout<<endl;
        cout<<"Enter the password: ", cin>>passe, cout<<endl;
        system("CLS");
    
        if(passe == pass)
        {
            
            cout<<"Hello, "<<name<<"!"<<endl<<endl;
            cout<<"Choose a level: "<<endl;
            cout<<"1. Easy"<<endl;
            cout<<"2. Medium"<<endl;
            cout<<"3. Hard"<<endl;
            cout<<"4. Leaderboard"<<endl;
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
				case 4:
                    leaderBoard ();
                    break;
				default:
					cout<<"Invalid Entry!"<<endl;
					cout<<"Goodbye!"<<endl;
					system("ping -n 2 127.0.0.1 > NUL");
                    return 0;
			}
				
			if (numGuesses !=  0)
            {
                fout<<name<<" "<<numGuesses<<endl;
            }
            
            replay (quit, again, passlim, numGuesses);
        }
        else if (passe == apass)
        {
            cout<<"What would you like to do?"<<endl;
            cout<<"Would you like to reset leadboard (1 = yes/ 2 = no): ", cin>>comman, cout<<endl;
    
            if (comman == 1)
            {
                fout.close();
                fout.open("leaderboard.dat", ios::trunc);
                fout<<"";
                fout.close();
                quit = true;
            }
        }   
        else
        {
            cout<<"Wrong Password! Try agian"<<endl;
            passlim++;
        }
    }
    system("CLS");
    cout<<"Goodbye!";
    fout.close();
           
    system("ping -n 2 127.0.0.1 > NUL");
    return 0;
}
