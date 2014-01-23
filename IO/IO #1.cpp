/*****************************************
Name: Michelfrancis Bustillos
Chapter 3: Input/Output #3
Date: 11/13/13
*****************************************/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<fixed<<showpoint<<setprecision(2);
    double lbW, kgW;
    
    cout<<"Enter weight in pounds: ", cin>>lbW;
    
    kgW = lbW / 2.2;
    
    system("CLS");
    cout<<"Weight in pounds = "<<lbW<<endl;
    cout<<"Weight in kilograms = "<<kgW<<endl<<endl;
    
    system("PAUSE"); 
    return 0;
}
