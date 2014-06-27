#include<iostream>

void printer (int a, int b, char c);

using namespace std;

int main(void)
{
    int a, b;
    char c;
    
    cout<<"Enter a character: ", cin>>c, cout<<endl;
    cout<<"Enter an integer: ", cin>>a, cout<<endl;
    cout<<"Enter another integer: ", cin>>b, cout<<endl;
    
    printer (a, b, c);
 
    system("PAUSE");
    return 0;   
}

void printer (int a, int b, char c)
{
    for (int x = 1; x <= b; x++)
    {
        for (int y = 1; y <= a; y++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    cout<<endl<<endl<<endl;
}
