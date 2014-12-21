//Michelfrancis Bustillos
//12/13/13, Block A4
//Program #3

#include <iostream>
using namespace std;
int main ()
{
    int num;
    
    cout<<"Enter a positive number: ", cin>>num, cout<<endl;
    system("CLS");
    
    if (num % 2 != 0)
    {
        cout<<"Your number is odd."<<endl<<endl<<endl;
    }
    else if (num % 2 == 0)
    {
        cout<<"Your number is even."<<endl<<endl<<endl;
    }
    else
    {
        cout<<"Invalid Entry!"<<endl<<endl<<endl;
    }
    
    system ("PAUSE");
    return 0;
}
