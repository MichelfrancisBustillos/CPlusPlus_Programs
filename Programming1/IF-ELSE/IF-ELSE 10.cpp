//Michelfrancis Bustillos
//12/11/13, Block A4
//Program #10

#include <iostream>
using namespace std;
int main ()
{
    string choice;
    
    cout<<"This program may reformat your hard disk. Do you wish to continue (yes/no)? ", cin>>choice, cout<<endl;
        
    if (choice == "yes")
    {
        cout<<"Adios data."<<endl<<endl<<endl;
    }
    else if (choice == "no")
    {
        cout<<"Wise choice."<<endl<<endl<<endl;
    }
    else 
    {
        cout<<"That was not a yes or no, so I guess I will trash your disk!"<<endl<<endl<<endl;
    }
    
    system ("PAUSE");
    return 0;
}
