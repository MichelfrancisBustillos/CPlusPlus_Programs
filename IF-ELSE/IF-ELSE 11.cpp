//Michelfrancis Bustillos
//12/6/13, Block A4
//Program #11

#include <iostream>
using namespace std;
int main ()
{
    double side1, side2, side3, check1, check2;
    
    cout<<"Enter length of side 1: ", cin>>side1, cout<<endl;
    cout<<"Enter length of side 2: ", cin>>side2, cout<<endl;
    cout<<"Enter length of side 3: ", cin>>side3, cout<<endl;
    system("CLS");
    
    check1 = side1 * side1;
    check2 = (side2 * side2) + (side3 * side3);
    
    if (check1 == check2)
    {
        cout<<"The triangle is a right triangle."<<endl<<endl;
    }
    else
    {
        cout<<"The triangle is not a right triangle."<<endl<<endl;
    }
    
    system ("PAUSE");
    return 0;
}
