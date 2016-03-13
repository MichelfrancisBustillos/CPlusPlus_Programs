/*****************************************
Name: Michelfrancis Bustillos
Chapter 3: Input/Output #9
Date: 11/13/13
*****************************************/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<fixed<<showpoint<<setprecision(2);
    double averageDailyBalance, netBalance, d1, d2, payment, interest;
    
    cout<<"Enter balance shown on bill: ", cin>>netBalance, cout<<endl;
    cout<<"Enter the payment amount: ", cin>>payment, cout<<endl;
    cout<<"Enter number of days in the billing cycle: ", cin>>d1, cout<<endl;
    cout<<"Enter number of days payment is made before end of billing cycle: ", cin>>d2, cout<<endl;
    system("CLS");
    
    averageDailyBalance = (netBalance*d1-payment*d2)/d1;
    interest = averageDailyBalance*0.0152;
    
    cout<<"You will pay $"<<interest<<" interest."<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
