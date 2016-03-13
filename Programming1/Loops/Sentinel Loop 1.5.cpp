//Michelfrancis Bustillos

#include<iostream>
#include<windows.h>
#include<stdlib.h>

using namespace std;

int main()
{
    char let;
    
    cout<<"Enter a letter: ", cin>>let, cout<<endl;
    system("CLS");
    
    while(let != 'c')
    {
        cout<<"HELLO!"<<endl;
        cout<<"Enter a letter: ", cin>>let, cout<<endl;
        system("CLS");
    }
        
    
    
    system("PAUSE");
    return 0;
}
