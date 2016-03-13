/************************************************
Name: Michelfrancis Bustillos
MathOpTestA
Date: 11/5/13
*************************************************/

#include<iomanip>
#include<iostream>

using namespace std;

int main()
{
          //declare variables needed for your program
          double purchaseAmt, quantity, taxRate, taxAmt, total;
          
          
          cout<<fixed<<showpoint<<setprecision(2);
          
          cout<<"16 HB Flashdrive: $9.99"<<endl;
          cout<<"500 GB External Hard drive: $49.99"<<endl;
          cout<<"1 TB External Hard drive: $89.99"<<endl<<endl;
          //prompts to get user input
          cout<<"How much is the item you would like to purchase? $",
          cin>>purchaseAmt,
          cout<<endl;
          
          cout<<"How many of this item would you like to purchase? ",
          cin>>quantity,
          cout<<endl;
          
          cout<<"What is your local tax rate? ",
          cin>>taxRate,
          cout<<endl;
          
          //calculations
          taxAmt = taxRate * .01;
          purchaseAmt = purchaseAmt + (purchaseAmt * taxAmt);
          total = purchaseAmt * quantity;
          
          //ouput the total the user must pay
          system("CLS");
          cout<<endl<<"The total for your purchase, including tax, is $"<<total<<"."<<endl<<endl;
          
          system("pause");
          return 0;
}
