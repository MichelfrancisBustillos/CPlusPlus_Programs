//Michelfrancis Bustillos
//1/14/14, Block A4

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    cout<<fixed<<showpoint<<setprecision(2);
    
    int mainMenu;
    float cost, tax, total;
    string techName;
    
    cout<<"***COMPUTER REPAIR CENTER***"<<endl<<endl;
    
    cout<<"What work was performed? Choose one:"<<endl;
    cout<<"1. Replaced the CPU and RAM"<<endl;
    cout<<"2. Replaced the RAM only"<<endl;
    cout<<"3. Repaired the Monitor"<<endl;
    cout<<"4. Fixed stuck key"<<endl;
    cin>>mainMenu;
    
    system("CLS");
    
    switch (mainMenu)
    {
        case 1:
        {
            cost = (200 + 150);
            tax = cost * .07;
            total = cost + tax;
            break;
        }
        case 2:
        {
            cost = 150;
            tax = cost * .07;
            total = cost + tax;
            break;
        }
        case 3:
        {
            cost = 75;
            tax = cost * .07;
            total = cost + tax;
            break;
        }
        case 4:
        {
            cost = 12;
            tax = cost * .07;
            total = cost + tax;
            break;
        }
        default:
        {
            cout<<"Invalid Entry!"<<endl<<endl<<endl;
            system("PAUSE");
            return 0;
        }
    }
    
    cout<<"Total cost: $"<<total<<endl<<endl;
    
    cout<<"Enter technician's name: ", cin>>techName, cout<<endl;
    
    if (techName == "Donald" || techName == "donald")
    {
        cout<<"15% Discount added."<<endl;
        total = total - (total * .15);
        cout<<"Total cost is now: $"<<total<<endl<<endl<<endl;
    }
    else
    {
        cout<<"Goodbye!"<<endl<<endl<<endl;
    }
    
    system("PAUSE");
    return 0;
}
    
