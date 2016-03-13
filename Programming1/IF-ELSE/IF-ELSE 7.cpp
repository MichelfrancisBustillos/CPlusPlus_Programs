//Michelfrancis Bustillos
//12/13/13, Block A4
//Program #7

#include <iostream>
#include<iomanip>
using namespace std;
int main ()
{
    cout<<fixed<<showpoint<<setprecision(2);
    int age;
    double fee;
    
    cout<<"Enter your age: ", cin>>age, cout<<endl;
    system("CLS");
    
    if (age <= 5)
    {
        cout<<"Your ticket is free!!"<<endl<<endl<<endl;
        
        system ("PAUSE");
        return 0;
    }
    
    else if (age >= 65)
    {
        fee = 1.50;
    }
    else
    {
        fee = 2.50;
    }
    
    cout<<"Your ticket will cost $"<<fee<<endl<<endl<<endl;
    
    system ("PAUSE");
    return 0;
}
