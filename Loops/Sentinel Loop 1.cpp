//Michelfrancis Bustillos
//Sentinel Controlled Loop

#include<iostream>

using namespace std;

int main()
{
    char cow = 'a';
   
    cout<<"Enter any letter: ", cin>>cow, cout<<endl;
   
    while(cow != 'c')
    {
        cout<<"HELLO"<<endl;
        cout<<"Enter any letter: ", cin>>cow, cout<<endl;
    }
    
    system("PAUSE");
    return 0;
}
    
