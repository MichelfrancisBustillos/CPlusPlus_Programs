//Name:Michelfrancis Bustillos
//Program:  Print odds and evens
#include<iostream>

using namespace std;

int main()
{
    int start= 1;
    int start2 = 1;
    int end = 0;
    int counter1 = 0;
    int counter2 = 0;
    
    cout<<"Enter starting value: ", cin>>start, cout<<endl;
    cout<<"Enter ending value: ", cin>>end, cout<<endl;
    system("CLS");
    
    start = start2;
    
    cout<<"Odds: "<<endl;
    cout<<"Start: "<<start<<" End: "<<end<<endl;
    while (start <= end)
    {
        if (start % 2 == 1)
        {
            cout<<start<<" ";
            counter1++;
        }
        start++;
    }
    cout<<endl<<"There are "<<counter1<<" odd numbers in the group."<<endl<<endl;
    
    cout<<"Evens: "<<endl;
    cout<<"Start: "<<start2<<" End: "<<end<<endl;
    while (start2 <= end)
    {
        if (start2 % 2 == 0)
        {
            cout<<start2<<" ";
            counter2++;
        }
        start2++;
    }
    cout<<endl<<"There are "<<counter2<<" even numbers in the group."<<endl<<endl<<endl<<endl;
    
        
    system("pause");
    return 0;
}
