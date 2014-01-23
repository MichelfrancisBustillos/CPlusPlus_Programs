#include <iostream>
using namespace std;
int main ()
{
    string name;
    int secret = 1;
    int guess;
    char controll;
       
    cout<<"Welcome to Michel's Number Guessing Game!"<<endl;
    cout<<"Object of the game: Guess the secret number in as few guesses as possible."<<endl;
    cout<<"Please enter your first name: ", cin>>name, cout<<endl<<endl;
    
    do
    {
        cout<<"Please enter your guess, 1 or 3: ", cin>>guess, cout<<endl;
    
        if (guess == secret)
        {
            cout<<"You got it right!"<<endl;
            system ("PAUSE");
            return 0;
        }  
        else if (guess != secret)
        {
            cout<<"FAIL!!"<<endl,
            cout<<"Try again? (Y/N)", cin>>controll, cout<<endl<<endl<<endl;
        }
    }while (controll != 'n' || controll != 'N');
    
    system ("PAUSE");
    return 0;
}
