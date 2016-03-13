#include<iostream>

int calc (double a, double b, int choice);

using namespace std;

int main(void)
{
    double a, b, ans;
    int choice;
    
    cout<<"Enter an number: ", cin>>a, cout<<endl;
    cout<<"Enter another number: ", cin>>b, cout<<endl;
    cout<<"Choose a function from the lsit below: "<<endl;
    cout<<"(1) +"<<endl;
    cout<<"(2) -"<<endl;
    cout<<"(3) *"<<endl;
    cout<<"(4) /"<<endl;
    cout<<">", cin>>choice, cout<<endl;
    
    ans = calc (a, b, choice);
    
    switch (choice)
    {
        case 1:
        {
            cout<<a<<"+"<<b<<"="<<ans;
            break;
        }
        case 2:
        {
            cout<<a<<"-"<<b<<"="<<ans;
            break;
        }
        case 3:
        {
            cout<<a<<"*"<<b<<"="<<ans;
            break;
        }
        case 4:
        {
            cout<<a<<"/"<<b<<"="<<ans;
            break;
        }
        default:
        {
            cout<<"ERROR!";
        }
    }

    cout<<endl<<endl<<endl;
 
    system("PAUSE");
    return 0;   
}

int calc (double a, double b, int choice)
{
    int ans;
    
    switch (choice)
    {
        case 1:
        {
            ans = a+b;
            break;
        }
        case 2:
        {
            ans = a-b;
            break;
        }
        case 3:
        {
            ans = a*b;
            break;
        }
        case 4:
        {
            ans = a/b;
            break;
        }
    }
    
    return ans;
}
