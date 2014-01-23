//Michelfrancis Bustillos
//12/13/13, Block A4
//Program #6

#include <iostream>
using namespace std;
int main ()
{
    double num;
    
    cout<<"Enter a number: ", cin>>num, cout<<endl;
    system("CLS");
    
    if (num < 0)
    {
        cout<<"Your number is negative."<<endl<<endl<<endl;
    }
    else if (num > 0)
    {
        cout<<"Your number is positive."<<endl<<endl<<endl;
    }
    else if (num == 0)
    {
        cout<<"Your number is zero."<<endl<<endl<<endl;
    }
    else
    {
        cout<<"Invalid Entry!!"<<endl<<endl<<endl;
    }
    
    system ("PAUSE");
    return 0;
}
