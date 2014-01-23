//Michelfrancis Bustillos
//12/6/13, Block A4
//Program #13

#include <iostream>
#include<iomanip>
using namespace std;
int main ()
{
    cout<<fixed<<showpoint<<setprecision(2);
    int acctNum;
    string msg, acctTypeFull;
    char acctType;
    double minBal, currBal, finBal, checkLim, interest=0.0, iRate =0.0;
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"Enter your account number: ", cin>>acctNum, cout<<endl;
    cout<<"Enter your account type ('s' for savings, 'c' for checking): ", cin>>acctType, cout<<endl;
    cout<<"Enter the minimun necessary balance: ", cin>>minBal, cout<<endl;
    cout<<"Enter the current balance: ", cin>>currBal, cout<<endl;
    system("CLS");
    
    checkLim = 5000 + minBal;
    if (acctType == 's')
    {
         if (currBal >= minBal)
         {
             iRate = 4.0   ;     
             interest = currBal * .04;
             finBal = currBal + interest;
             msg = "You met the minimum balance. No service fee was charged.";
         }
         else
         {
             finBal = currBal - 10;
             msg = "You did not meet the minimum balance. A service fee was charged.";
         }
         acctTypeFull = "Savings";
    }
    else if (acctType == 'c')
    {
         if (currBal <= checkLim && currBal >= minBal)
         {
             iRate = 3.0;
             interest = currBal * .03;
             finBal = currBal + interest;
             msg = "You met the minimum balance. No service fee was charged.";
         }
         else if (currBal > checkLim)
         {
             iRate = 5.0;
             interest = currBal * .05;
             finBal = currBal + interest;
             msg = "You met the minimum balance. No service fee was charged.";
         }
         else 
         {
              finBal = currBal - 25;
              msg = "You did not meet the minimum balance. A service fee was charged.";
         }
         acctTypeFull = "Checking";
    }     

    cout<<"Account #"<<acctNum<<endl;
    cout<<"Account Type: "<<acctTypeFull<<endl;
    cout<<"Balance: $"<<currBal<<endl;
    cout<<"Interest Rate: "<<iRate<<"%"<<endl;
    cout<<"Interest: $"<<interest<<endl;
    cout<<"Closing Balance: $"<<finBal<<endl;
    cout<<msg<<endl<<endl;

    system ("PAUSE");
    return 0;
}
