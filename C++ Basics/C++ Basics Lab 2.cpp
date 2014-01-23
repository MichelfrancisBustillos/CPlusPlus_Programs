//Michelfrancis I. Bustillos
//C++ Basics Lab 2
//9/24/13


#include<iostream>

using namespace std;

int main()
{
    const double PI = 3.14;
    double radius;
    double area;
    double circumference;
    
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<endl;
    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    cout<<"Area = "<<area<<endl;
    cout<<"Circumference = "<<circumference<<endl;
        
    system ("pause");
    return 0;
    
}
