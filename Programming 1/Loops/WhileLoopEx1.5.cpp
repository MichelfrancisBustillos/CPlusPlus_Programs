#include<iostream>

using namespace std;

int main()
{
    int controll, counter, firstNum, secondNum, fn1, sum, fn2, fn3, set;
    
    controll = 1;
    counter = 5;
    
    while (controll <= 20)
    {
        cout<<"AVERDEEN EAGLES!!"<<endl;
        controll++;
    }
    
    cout<<endl;
    
    while (counter <= 51)
    {
        if (counter % 2 == 1)
        {
            cout<<counter<<endl;
        }
        counter++;
    }
    
    cout<<endl;
    
    cout<<"Enter a number: ", cin>>firstNum, cout<<endl;
    cout<<"Enter another, higher number: ", cin>>secondNum, cout<<endl;
    
    cout<<endl;
    fn1 = firstNum;
    fn2 = firstNum;
    fn3 = firstNum;
    sum = 0;
    
    cout<<"Odd numbers: "<<endl;
    while (firstNum <= secondNum)
    {
        if (firstNum % 2 == 1)
        {
            cout<<firstNum<<endl;
        }
        firstNum++;
    }
    
    cout<<endl;

    
    while (fn1 <= secondNum)
    {
        if (fn1 % 2 == 0)
        {
            sum = sum + fn1;
        }
        fn1++;
    }
    cout<<"Sum of all even numbers: "<<sum<<endl<<endl;

    
    sum = 0;
    
    cout<<"Squares: "<<endl;
    while (fn2 <= secondNum)
    {
        sum = fn2 * fn2;
        fn2++;
        cout<<sum<<endl;       
    }
    cout<<endl;
    
    sum = 0;
    set = 0;
    
    while (fn3 <= secondNum)
    {
        if (fn3 % 2 == 1)
        {
            sum = fn3 * fn3;
            set = set + sum;
            //cout<<fn3<<endl;
        }
        fn3++;
    }
    cout<<"Sum of the squares of all odd numbers = "<<set<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
    
