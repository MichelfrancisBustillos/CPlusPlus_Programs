#include<iostream>

void squarer (int a, int b);

using namespace std;

int main(void)
{
    int a, b;
    
    cout<<"Enter an integer: ", cin>>a, cout<<endl;
    cout<<"Enter another integer: ", cin>>b, cout<<endl;
    
    squarer (a, b);
 
    system("PAUSE");
    return 0;   
}

void squarer (int a, int b)
{
    int c;
    
    c = (a * a) + (b * b);
    cout<<"("<<a<<")("<<a<<") + ("<<b<<")("<<b<<") = "<<c<<endl<<endl;
}
