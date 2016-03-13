/*****************************************
Name: Michelfrancis Bustillos
Chapter 3: Input/Output #8
Date: 11/13/13
*****************************************/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<fixed<<showpoint<<setprecision(2);
    double mass, density, volume;
    
    cout<<"Enter the mass, in grams: ", cin>>mass;
    cout<<"Enter the density, in grams per cubic centameters: ", cin>>density;
    
    system("CLS");
    
    volume = mass / density;
    
    cout<<"The object's volume is: "<<volume<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
