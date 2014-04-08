//Michelfrancis I. Bustillos
//MathOperators Programs #1
//10/15/13


#include<iostream>

using namespace std;

int main()
{
    const double PI = 3.14;
    string verb, noun, adjective;
    float radius, volume;
    
    cout<<"Enter a noun: ",
    cin>>noun,
    cout<<endl;    
    cout<<"Enter a verb: ",
    cin>>verb,
    cout<<endl;    
    cout<<"Enter a adjective: ",
    cin>>adjective,
    cout<<endl;    
    
    cout<<"Enter the radius of a sphere: ",
    cin>>radius,
    cout<<endl;
    
    volume = (4.0/3)*PI*(radius*radius*radius);
    
    cout<<"The radius is "<<radius<<endl;
    cout<<"The volume of the sphere is "<<volume<<endl<<endl;
    cout<<"The "<<adjective<<" student compeleted the first "<<noun
               <<".  Then the student quickly "<<verb<<" away."<<endl<<endl;
    
    
    system ("pause");
    return 0;
    
}
