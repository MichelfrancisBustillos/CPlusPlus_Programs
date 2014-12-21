//Michelfrancis Bustillos
//12/11/13, Block A4
//Program #9

#include <iostream>
#include<iomanip>
using namespace std;
int main ()
{
    cout<<fixed<<showpoint<<setprecision(2);
    int words;
    double price;
    
    cout<<"Enter the number of words in the telegram: ", cin>>words, cout<<endl;
    system("CLS");
    
    price = 8.50 + ((words - 15) * .25);
    
    if (price <= 8.50)
    {
        price = 8.50;
    }
    
    cout<<"The telegram costs $"<<price<<endl<<endl;
    
    system ("PAUSE");
    return 0;
}
