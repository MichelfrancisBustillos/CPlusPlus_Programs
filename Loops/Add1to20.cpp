//Name:Michelfrancis Bustillos
//Program:  Add 1 to 20
#include<iostream>

using namespace std;

int main()
{
    //declare and instantiate a variable to hold the sum
    int sum = 0;
    
    //use a for loop to add the numbers from 1 to 20, 1 at a time
    //use your variable to hold the sum
    for (int cont = 1; cont <= 20; cont++)
    {
        sum = sum + cont;
    }
    
    //output the sum of the numbers from 1 to 20
    cout<<"Sum = "<<sum<<endl<<endl<<endl;  
        
    system("pause");
    return 0;
}
