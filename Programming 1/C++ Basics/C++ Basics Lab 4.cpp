//Michelfrancis I. Bustillos
//C++ Basics Lab 4
//9/24/13


#include<iostream>

using namespace std;

int main()
{
    int SECRET;
    double RATE;
    
    SECRET = 11;
    RATE = 12.50;
    
    int num1;
    int num2;
    int newNum;
    string name;
    double hoursWorked;
    double wages;
    
    cout<<"Input num1: ";
    cin>>num1;
    cout<<endl;
    
    cout<<"Input num2: ";
    cin>>num2;
    cout<<endl<<endl;
    
    newNum = num1 * 2 + num2;
    
    cout<<"Num1 = "<<num1<<endl;
    cout<<"Num2 = "<<num2<<endl;
    cout<<"newNum = "<<newNum<<endl<<endl;
    
    newNum = newNum + SECRET;
    
    cout<<"The new value of newNum is "<<newNum<<endl<<endl;
    
    cout<<"Enter your last name: ";
    cin>>name;
    cout<<endl;
    
    cout<<"Enter a decimal number between 0 and 70: ";
    cin>>hoursWorked;
    cout<<endl<<endl;
    
    wages = hoursWorked * RATE;
    
    cout<<"Name: "<<name<<endl;
    cout<<"Pay Rate: $"<<RATE<<endl;
    cout<<"Hours Worked: "<<hoursWorked<<endl;
    cout<<"Salary: $"<<wages<<endl;
    
    system ("pause");
    return 0;
    
}
