#include<iostream>

using namespace std;

int harmean (int a, int b);
int main (void)
{
    int a, b, c;
    
    cout<<"Enter an integer: ", cin>>a, cout<<endl;
    cout<<"Enter another integer: ", cin>>b, cout<<endl;
    
    c = harmean (a, b);
    
    cout<<"The harmonic mean of "<<a<<" and "<<b<<" is "<<c<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;   
}

int harmean (int a, int b)
{
    int c;
    c = 1 / ((1 / a) + (1 / b) / 2);
    return c;
}
