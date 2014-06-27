//Name:Michelfrancis Bustillos

#include<iostream>

using namespace std;

int main()
{
    int total = 1;
    for (int cont = 1; cont > 0; cont = cont * total)
    {
        total = total * cont;
        cout<<total<<endl;
    }    
    cout<<"The total is "<<total<<endl<<endl<<endl;
    
    system("pause");
    return 0;
}
