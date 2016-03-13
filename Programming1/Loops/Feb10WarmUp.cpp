#include<iostream>

using namespace std;

int main()
{
    int set, controll;
    
    controll = -10;
    set = 1;
    
    while (controll <= -5)
    {
        set = set * controll;
        controll++;
    }
    
    cout<<"The product of the numbers from -10 to -5 is "<<set<<endl<<endl<<endl;    
    
    system("PAUSE");
    return 0;
}
