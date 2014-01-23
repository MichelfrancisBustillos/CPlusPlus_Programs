//Michelfrancis Bustillos
//1/14/14, Block A4

#include <iostream>
using namespace std;
int main ()
{
    char g;
    float min, max;
    
    cout<<"Enter your letter grade: ", cin>>g, cout<<endl;
    
    system("CLS");
    
    switch (g)
    {
        case 'A':
        case 'a':
        {
            min = 89.5;
            max = 100;
            break;
        }
        case 'B':
        case 'b':
        {
            min = 79.5;
            max = 89.4;
            break;
        }
        case 'C':
        case 'c':
        {
            min = 69.5;
            max = 79.4;
            break;
        }
        case 'D':
        case 'd':
        {
            min = 59.5;
            max = 100;
            break;
        }
        case 'E':
        case 'e':
        case 'F':
        case 'f':
        {
            cout<<"Your grade is below 59.5."<<endl<<endl<<endl;
            system("PAUSE");
            return 0;
            break;
        }
        default:
        {
            cout<<"Invalid entry!"<<endl<<endl<<endl;
            system ("PAUSE");
            return 0;
        }
    }
    
    cout<<"Your grade is between "<<min<<" and "<<max<<"."<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
