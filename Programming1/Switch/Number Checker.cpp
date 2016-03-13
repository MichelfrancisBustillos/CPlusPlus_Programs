//Michelfrancis Bustillos
//1/2/14, Block A4

#include <iostream>
using namespace std;
int main ()
{
    int num;
    
    cout<<"Enter a number from 1 to 10: ", cin>>num, cout<<endl<<endl;
    
    system("CLS");
    
    switch (num)
    {
        case 1:
        case 3: 
            cout<<"Your number is a low odd number."<<endl<<endl;
            break;
        case 2:
        case 4:
            cout<<"Your number is a low even number."<<endl<<endl;
            break;
        case 5:
            cout<<"Your number is a middle odd number."<<endl<<endl;
            break;
        case 6:
            cout<<"Your number is a middle even number."<<endl<<endl;
            break;
        case 7:
        case 9:
            cout<<"Your number is a high odd number."<<endl<<endl;
            break;
        case 8:
        case 10:
            cout<<"Your number is a high even number."<<endl<<endl;
            break;
        default:
            cout<<"A NUMBER BETWEEN 1 AND 10, not whatever you entered."<<endl<<endl;
            break;
    }
    
    system ("PAUSE");
    return 0;
}

        
