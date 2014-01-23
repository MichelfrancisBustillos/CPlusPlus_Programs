//Michelfrancis Bustillos
//12/13/13, Block A4
//Program #2

#include <iostream>
using namespace std;
int main ()
{
    string name;
    int age;
    
    cout<<"Enter your name: ", cin>>name, cout<<endl;
    cout<<"Enter your age: ", cin>>age, cout<<endl;
    system("CLS");
    
    if (age >= 16)
    {
        cout<<"Its scary "<<name<<", you are old enough to drive!"<<endl<<endl<<endl;
    }
    else if (age < 16)
    {
        age = 16 - age;
        cout<<"You have "<<age<<" year(s) before you can drive."<<endl<<endl<<endl;
    }
    
    system ("PAUSE");
    return 0;
}
