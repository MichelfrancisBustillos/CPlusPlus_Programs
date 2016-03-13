//Michelfrancis Bustillos
//1/14/14, Block A4

#include <iostream>
using namespace std;
int main ()
{
    string daynameDay, daynameEnd;
    int daynameNum;
    
    cout<<"Enter the day of the week:"<<endl;
    cout<<"0 = Sunday"<<endl;
    cout<<"1 = Monday"<<endl;
    cout<<"2 = Tuesday"<<endl;
    cout<<"3 = Wednesday"<<endl;
    cout<<"4 = Thursday"<<endl;
    cout<<"5 = Friday"<<endl;
    cout<<"6 = Saturday"<<endl;
    cin>>daynameNum;
    
    system("CLS");
    
    switch (daynameNum)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        {
            cout<<"Ewww!! Its a weekday!"<<endl<<endl<<endl;
            break;
        }
        case 0:
        case 6:
        {
            cout<<"YAY!! Its a weekend!"<<endl<<endl<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid entry!"<<endl<<endl<<endl;
        }
    }
    
    system ("PAUSE");
    return 0;
}
