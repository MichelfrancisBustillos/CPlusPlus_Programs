#include<iostream>

using namespace std;

int calc (int a, int b);
int main (void)
{
    int a, b, c;
    
    cout<<"Enter an integer: ", cin>>a, cout<<endl;
    cout<<"Enter another integer: ", cin>>b, cout<<endl;
    
    c = calc(a, b);
    
    cout<<"("<<a<<")("<<a<<")+("<<b<<")("<<b<<")=("<<c<<")"<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;   
}

int calc (int a, int b)
{
    int c;
    c = (a * a) + (b * b);
    return c;
}
