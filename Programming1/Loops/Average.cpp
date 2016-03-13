//Name:Michelfrancis Bustillos
//Program:  Average
#include<iostream>

using namespace std;

int main()
{
    //declare and instantiate variables for total and average
    int total = 0;
    int avg = 0;
    int input = 0;
    
    //use a for loop to ask the user to enter 5 numbers, 1 at a time
    //keep a running total
    for (int cont = 1; cont <= 5; cont++)
    {
        cout<<"Enter a number: ", cin>>input, cout<<endl;
        total = total + input;
        input = 0;
    }
    
    //calculate the average of the 5 numbers
    avg = total / 5;
    
    //output the average of the 5 numbers
    cout<<"Average = "<<avg<<endl<<endl<<endl;
        
    system("pause");
    return 0;
}
