/*****************************************
Name: Michelfrancis Bustillos
MathOperators Program #3
Date: 10/22/13
*****************************************/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //variable declarations
    string nameOfGame;
    double cost;
    double taxRate;
    double totalCost;
    
    cout<<fixed<<showpoint<<setprecision(2);
            
    //Prompts
    cout<<"Enter the name of the game you wish to purchase: ",
    getline (cin, nameOfGame),
    cout<<endl;
    
    cout<<"Enter the cost of the game: ",
    cin>>cost,
    cout<<endl;
    
    cout<<"Enter the current sales tax rate: ",
    cin>>taxRate,
    cout<<endl;
        
    //calculations
    taxRate = taxRate * .01;
    totalCost = cost + (cost * taxRate); 
    
    //output results
    cout<<"Your total for the game "<<nameOfGame<<" is "<<totalCost<<endl<<endl;   
    
    system("pause");
    return 0;
}
