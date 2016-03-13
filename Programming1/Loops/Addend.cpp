#include <iostream>
using namespace std;
int main ()
{
    int controll, set, counter;
    double sum, fac;

    controll = 1;
    sum = 0;
    fac = 1;
    counter = 1;
    
    cout<<"Enter the number to calculate: ", cin>>set, cout<<endl;
    
    while (controll <= set)
    {
        sum = sum + controll;
        controll++;
    }

    cout<<"Result from recursively adding numbers 1 to "<<set<<": "<<sum<<endl;
       
    while (counter <= set)
    {
        fac = fac * counter;
        counter++;
    }
    
    cout<<"Result from factorializing "<<set<<": "<<fac<<endl<<endl;
    
system("PAUSE");
return 0;
}
