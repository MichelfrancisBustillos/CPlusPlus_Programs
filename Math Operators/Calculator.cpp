#include <iostream>
using namespace std;
int main ()
{
    float num1, num2, answer;
    char operatr;
    
    cout<<"Enter the first number: ", cin>>num1, cout<<endl;
    cout<<"Enter the second number: ", cin>>num2, cout<<endl;
    cout<<"Pick the operator: "<<endl;
    cout<<"(+) Addition "<<endl;
    cout<<"(-) Subtraction "<<endl;
    cout<<"(*) Multiplication "<<endl;
    cout<<"(/) Division "<<endl;
    cout<<"(q) Quit "<<endl;
    cin>>operatr;
    
    system("CLS");
    
    if (operatr == '+')
    {
         answer = num1 + num2;
    }     
         
    if (operatr == '-')
    {
         answer = num1 - num2;
    }
    
    if (operatr == '*')
    {
         answer = num1 * num2;
    }
    
    if (operatr == '/')
    {
         answer = num1 / num2;
    }
    
    if (operatr == 'q')
    {
         cout<<"Thank you!! Goodbye."<<endl<<endl;
         system ("PAUSE");
         return 0;
    }

    cout<<num1<<" "<<operatr<<" "<<num2<<" = "<<answer<<endl<<endl;
    
    system ("PAUSE");
    return 0;
}
