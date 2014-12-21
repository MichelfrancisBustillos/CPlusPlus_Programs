//Michelfrancis Bustillos
//12/13/13, Block A4
//Program #1

#include <iostream>
using namespace std;
int main ()
{
    string password = "honda";
    string passguess;
    
    cout<<"Enter the password: ", cin>>passguess, cout<<endl;
    system("CLS");
    
    if (passguess == password)
    {
        cout<<"You got it!"<<endl<<endl<<endl;
    }
    else if (passguess != password)
    {
        cout<<"Nope."<<endl<<endl<<endl;
    }
    
    system ("PAUSE");
    return 0;
}
