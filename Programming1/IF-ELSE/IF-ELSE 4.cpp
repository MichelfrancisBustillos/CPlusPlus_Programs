//Michelfrancis Bustillos
//12/11/13, Block A4
//Program #4

#include <iostream>
using namespace std;
int main ()
{
    int dob;
    string fruit;
    
    cout<<"Enter your year of birth: ", cin>>dob, cout<<endl;
    
    if (dob < 1970)
    {
        cout<<"You qualify for the Juke Box Rally."<<endl<<endl;
        cout<<"Enter your favorite fruit: ", cin>>fruit, cout<<endl;
        
        if ( (fruit == "strawberry") || (fruit == "strawberries") )
        {
            cout<<"Strawberry Fields Forever."<<endl<<endl<<endl;
        }
        else
        {
            cout<<"Bye, Bye Miss American Pie."<<endl<<endl<<endl;
        }
    }
    else
    {
        cout<<"You do not qualify for the Juke Box Rally."<<endl<<endl;
    }
    
    system ("PAUSE");
    return 0;
}
