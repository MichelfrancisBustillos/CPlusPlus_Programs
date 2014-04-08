//Name:
//Program:  Multiply 1 to 6
#include<iostream>

using namespace std;

int main()
{
    //declare and instantiate a variable to hold the product
    int sum = 1;
    
    //use a for loop to multiply the numbers from 1 to 6, 1 at a time
    //use your variable to hold the product
    for (int cont = 1; cont <= 6; cont++)
    {
        sum = sum * cont;
    }
    
    //output the product of the numbers from 1 to 6
    cout<<sum<<endl<<endl<<endl;  
        
    system("pause");
    return 0;
}
