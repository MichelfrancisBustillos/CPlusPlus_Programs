//Michelfrancis I. Bustillos
//MathOperators Programs #2
//10/15/13


#include<iostream>

using namespace std;

int main()
{
    const string greeting = "Hello ";
    int num1, num2, ans1, ans2;
    string name;
    
    cout<<"Enter your name: ",
    cin>>name,
    cout<<endl;
   
    cout<<"Enter a number: ",
    cin>>num1,
    cout<<endl;
    
    cout<<"Enter another number: ",
    cin>>num2,
    cout<<endl;
    
    ans1 = 1 % 2;
    ans2 = 2 * (num1 + num2);
    
    cout<<greeting<<name<<endl;
    cout<<"num1 = "<<num1<<"  num2 = "<<num2<<endl;
    cout<<"ans1 = "<<ans1<<"  ans2 = "<<ans2<<endl<<endl;
        
    system ("pause");
    return 0;
    
}
