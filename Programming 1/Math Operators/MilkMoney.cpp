/*****************************************
Name: Michelfrancis Bustillos
Date: 11/14/13
*****************************************/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout<<fixed<<showpoint<<setprecision(2);
    double cartonAmt = 3.78;
    int cartons;
    double cost;
    double finalCost;
    double profit;
    double finalProfit;
    int produced;
    
    cout<<"Enter the amount of milk produced: ", cin>>produced;
    cout<<"Enter cost to produce one carton: ", cin>>cost;
    cout<<"Enter profit made per carton: ", cin>>profit;
    system("CLS");
    
    cartons = produced/cartonAmt;
    finalCost = produced*cost;
    finalProfit = cartons*profit;
    
    cout<<"You will need "<<cartons<<" cartons."<<endl;
    cout<<"It will cost $"<<finalCost<<" to produce."<<endl;
    cout<<"Your profit will be $"<<finalProfit<<"."<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
    
