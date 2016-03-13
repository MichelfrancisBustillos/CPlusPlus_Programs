//Michelfrancis Bustillos
//12/11/13, Block A4
//Program #8

#include <iostream>
using namespace std;
int main ()
{
    int a, b, c;
    
    cout<<"Enter a whole number: ", cin>>a, cout<<endl;
    cout<<"Enter another whole number: ", cin>>b, cout<<endl;
    cout<<"Enter a third whole number: ", cin>>c, cout<<endl;
    
    system("CLS");
    
    if ( (a < b) && (a < c) )  //main a
    {
        cout<<a<<", ";
         
        if (b < c) //a-b
        {
            cout<<b<<", "<<c<<endl<<endl;
        }
        else if (c < b) //a-c
        {
            cout<<c<<", "<<b<<endl<<endl;
        }   
    }
    else if ( (b < a) && (b < c) ) //main b
    {
        cout<<b<<", ";
                 
        if (a < c) //b-a
        {
            cout<<a<<", "<<c<<endl<<endl;
        }
        else if (c < a) //b-c
        {
            cout<<c<<", "<<a<<endl<<endl;
        }               
    }
    else if ( (c < a) && (c < b) ) //main c
    {
        cout<<c<<", ";
         
        if (a < b) //c-a
        {
            cout<<a<<", "<<b<<endl<<endl;
        }
        else if (b < a)
        {
            cout<<b<<", "<<a<<endl<<endl;
        }
    }
            
    system ("PAUSE");
    return 0;
}    
