//Michelfrancis Bustillos
//12/13/13, Block A4
//Program #5

#include <iostream>
using namespace std;
int main ()
{
    int a, b;
    
    cout<<"Enter a number: ", cin>>a, cout<<endl;
    cout<<"Enter another number: ", cin>>b, cout<<endl;
    system("CLS");
    
    if (a < b)
    {
        cout<<a<<", "<<b<<endl<<endl<<endl;
    }
    else if (a == b)
    {
        cout<<"Your numbers are equal."<<endl<<endl<<endl;
    }
    else if (a > b)
    {
        cout<<b<<", "<<a<<endl<<endl<<endl;
    }
    else
    {
        cout<<"Invalid Entry!!"<<endl<<endl<<endl;
    }
    
    system ("PAUSE");
    return 0;
}

