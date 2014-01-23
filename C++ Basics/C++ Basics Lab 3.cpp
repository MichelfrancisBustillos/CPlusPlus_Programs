//Michelfrancis I. Bustillos
//C++ Basics Lab 3
//9/24/13


#include<iostream>

using namespace std;

int main()
{
    string name;
    double studyHours;
    
    cout<<"Enter name: ";
    cin>>name;
    cout<<endl;
    
    cout<<"Enter study hours: ";
    cin>>studyHours;
    cout<<endl<<endl;
    
    cout<<name<<"!  You must study "<<studyHours<<" hours this Saturday."<<endl;
    
    system ("pause");
    return 0;
    
}
