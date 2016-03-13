#include<iostream>

using namespace std;

void asterisks (int num);
void name (string nombre);

int main ()
{
    string nombre, dummy;
    int num = 0;
    
    cout<<"Enter your name: ", getline(cin,nombre), cout<<endl;
    cout<<"Enter the number of asterisks: ", cin>>num, cout<<endl;
    
    system("CLS");
    
    asterisks (num);
    name (nombre);
    asterisks (num);
    
    cout<<endl<<endl<<endl;
    system("PAUSE");
    return 0;
}

void asterisks (int num)
{
    int num2 = num;
    
    while (num >= 0)
    {
        cout<<"*";
        num--;
    }
    cout<<endl;
    
    while (num2 >= 0)
    {
        cout<<"*";
        num2--;
    }
    cout<<endl;
}

void name (string nombre)
{
    cout<<nombre<<endl;
}
