//Michelfrancis Bustillos
//Program: Number Guessing Game

#include<iostream>
#include<windows.h>
#include<stdlib.h>

using namespace std;
void game (int secret, int myGuess, int numGuesses);

int main()
{
    int secret; //correct number
    int numGuesses = 0; //number of guesses made
    int myGuess;  //user's guess
    int again; //"play again" responce
    bool quit = false; 
    string pass = "lora";  //correct user password
    string passe; //password user enters
    int passlim = 0; //counts how many times user enters a password
    srand (time(NULL));
    
    while(!quit && passlim <= 4)
    {
        cout<<"Enter the password: ", cin>>passe, cout<<endl;
        system("CLS");
    
        if(passe == pass)
        {
                        
            game (secret, myGuess, numGuesses);
                
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

void game (int secret, int myGuess, int numGuesses)
{
    secret = rand() % 10 + 1; //set correct number to random value between 1 and 10
    cout<<"Welcome, User!"<<endl;
    cout<<"Enter a number between 1 and 10: ", cin>>myGuess, cout<<endl;
    numGuesses++;
    
    system("CLS");
            while (myGuess != secret)
            {
                cout<<"Try again!"<<endl;
                cout<<"Enter a number between 1 and 10: ", cin>>myGuess, cout<<endl;
                numGuesses++;
                system("CLS");
            }
                
            if ( myGuess == secret )
            {
                cout<<"Your right!"<<endl;
                cout<<"It took "<<numGuesses<<" guesses!"<<endl<<endl<<endl;
            }    
}
