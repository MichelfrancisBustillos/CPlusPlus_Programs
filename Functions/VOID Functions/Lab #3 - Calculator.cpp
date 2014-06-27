#include<iostream>

void calc (double a, double b, int choice);

using namespace std;

int main(void)
{
    double a, b;
    int choice;
    
    cout<<"Enter an number: ", cin>>a, cout<<endl;
    cout<<"Enter another number: ", cin>>b, cout<<endl;
    cout<<"Choose a function from the lsit below: "<<endl;
    cout<<"(1) +"<<endl;
    cout<<"(2) -"<<endl;
    cout<<"(3) *"<<endl;
    cout<<"(4) /"<<endl;
    cout<<">", cin>>choice, cout<<endl;
    
    calc (a, b, choice);
 
    system("PAUSE");
    return 0;   
}

void calc (double a, double b, int choice)
{
    switch (choice)
    {
        case 1:
        {
            cout<<a<<"+"<<b<<"="<<a+b;
            break;
        }
        case 2:
        {
            cout<<a<<"-"<<b<<"="<<a-b;
            break;
        }
        case 3:
        {
            cout<<a<<"*"<<b<<"="<<a*b;
            break;
        }
        case 4:
        {
            cout<<a<<"/"<<b<<"="<<a/b;
            break;
        }
        default:
        {
            cout<<"ERROR!";
        }
    }
    cout<<endl<<endl<<endl;
}
