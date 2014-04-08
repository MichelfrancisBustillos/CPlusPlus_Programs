//Name:Michelfrancis Bustillos
//Program:  Print Factorials
#include<iostream>

using namespace std;

int main()
{
    int start = 0;
    int cont = 1;
    
    cout<<"Enter a nubmer to factorialize: ", cin>>start, cout<<endl;
    system("CLS");
    
    while (start > 0)
    {
        cont = cont * start;
        start--;
    }
    cout<<"The factorial is "<<cont<<endl<<endl<<endl;
        
    system("pause");
    return 0;
}
