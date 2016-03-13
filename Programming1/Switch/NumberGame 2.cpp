#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
    string name;
    int secret;
    int guess;
    int lev;
    int counter = 1;
    char controll;
       
    cout<<"Welcome to Michel's Number Guessing Game!"<<endl;
    cout<<"Object of the game: Guess the secret number in as few guesses as possible."<<endl;
    cout<<"Please enter your first name: ", cin>>name, cout<<endl<<endl;
    
    srand (time(NULL));
    do
    {
        cout<<"Choose your level (1, 2, 3): ", cin>>lev, cout<<endl<<endl;
        
        switch (lev)
        {
            case 1:
            {
                
                secret = rand() % 5 + 1;
                cout<<secret<<endl;
                do
                {
                    cout<<"Please enter your guess, from 1 to 5: ", cin>>guess, cout<<endl;
        
                    if (guess == secret)
                    {
                        cout<<"You got it right in "<<counter<<" guesses!"<<endl<<endl;
                        cout<<"Play again? (Y/N): ", cin>>controll, cout<<endl;

                    } 
                    else if (guess != secret)
                    {
                        cout<<"FAIL!!"<<endl<<endl;
                        counter = counter + 1;
                    }
                } while (guess != secret);
            }
            
            case 2:
            {
                secret = rand() % 50 + 1;
                cout<<secret<<endl;
                do
                {
                    cout<<"Please enter your guess, from 1 to 50: ", cin>>guess, cout<<endl;
        
                    if (guess == secret)
                    {
                        cout<<"You got it right in "<<counter<<" guesses!"<<endl<<endl<<endl;
                        cout<<"Play again? (Y/N): ", cin>>controll, cout<<endl;
                    } 
                    else if (guess != secret)
                    {
                        cout<<"FAIL!!"<<endl<<endl;
                        counter = counter + 1;
                    }
                } while (guess != secret);   
            }
            
            case 3:
            {
                secret = rand() % 100 + 1;
                cout<<secret<<endl;
                do
                {
                    cout<<"Please enter your guess, from 1 to 100: ", cin>>guess, cout<<endl;
        
                    if (guess == secret)
                    {
                        cout<<"You got it right in "<<counter<<" guesses!"<<endl<<endl<<endl;
                        cout<<"Play again? (Y/N): ", cin>>controll, cout<<endl;
                    } 
                    else if (guess != secret)
                    {
                        cout<<"FAIL!!"<<endl<<endl;
                        counter = counter + 1;
                    }
                } while (guess != secret);
            }
            default:
            {
                cout<<"Goodbye!"<<endl<<endl<<endl;
                system ("PAUSE");
                return 0;
            }
        }
        
        if (controll == 'n' || controll == 'N')
        {
            cout<<"Goodbye!"<<endl<<endl<<endl;
            system ("PAUSE");
            return 0;
        }
    } while (controll != 'n' || controll != 'N');
    
    system ("PAUSE");
    return 0;
}
    
