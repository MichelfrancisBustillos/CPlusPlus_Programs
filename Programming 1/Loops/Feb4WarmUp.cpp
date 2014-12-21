#include<iostream>

using namespace std;

int main()
{
    int addend, controll, square, supersum;
    
    addend = 0;
    controll = 25;
    square = 0;
    supersum = 0;
    
    while (controll <= 75)
    {
        
        if ( controll % 2 == 1)
        {
            addend = addend + controll;
        }
        if (controll % 2 == 0)
        {
            cout<<"Add = "<<controll<<endl;
        }
        square = controll * controll;
        cout<<"Square = "<<square<<endl;
        supersum = supersum + square;
        cout<<"Supersum = "<<supersum<<endl;
        cout<<endl;
        controll++;
    }
    
    cout<<endl;
    cout<<"Add = "<<addend<<endl;
    cout<<"Supersum = "<<supersum<<endl;
    cout<<"Square = "<<square<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
