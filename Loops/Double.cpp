//Name: Michelfrancis Bustillos
//Program:  Print 1  2  4  8  16  32  64  128
#include<iostream>

using namespace std;

int main()
{
    
    for (int cont = 1; cont <= 128; cont = cont * 2)
    {
        cout<<cont<<" ";
    }
    cout<<endl<<endl<<endl;
        
    system("pause");
    return 0;
}
