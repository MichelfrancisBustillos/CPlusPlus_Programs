//Michelfrancis Bustillos
//12/11/13, Block A4
//Program #14

#include <iostream>
#include<iomanip>
using namespace std;
int main ()
{
    cout<<fixed<<showpoint<<setprecision(2);
    char svcType;
    int simpMin, dayMin, nightMin, totMin, acctNum;
    double bill;
    string svcTypeFull;
    
    cout<<"Enter account number: ", cin>>acctNum, cout<<endl;
    cout<<"Choose service type ('r' for regular, 'p' for premium): ", cin>>svcType, cout<<endl;
    
    if (svcType == 'r')
    {
         cout<<"Enter number of minutes used: ", cin>>simpMin, cout<<endl;
         bill = 10 + ((simpMin - 50) * .20);
         totMin = simpMin;
         svcTypeFull = "Regualar";
         
         if (bill <= 10)
         {
                  bill = 10;
         }
    }
    else if (svcType == 'p')
    {
         cout<<"Enter number of daytime minutes used (6am-6pm): ", cin>>dayMin, cout<<endl;
         cout<<"Enter number of nighttime minutes used (6pm-6am): ", cin>>nightMin, cout<<endl;
         bill = 25 + ((dayMin - 75) * .10) + ((nightMin - 100) * .05);
         totMin = dayMin + nightMin;
         svcTypeFull = "Premium";
         
         if (bill <= 25)
         {
                  bill = 25;
         }
    }
    
    system("CLS");
    cout<<"Account #"<<acctNum<<endl;
    cout<<"Service Type: "<<svcTypeFull<<endl;
    cout<<"Total Minutes Used: "<<totMin<<endl;
    cout<<"Amount Due: $"<<bill<<endl<<endl;
    
    system ("PAUSE");
    return 0;
}
