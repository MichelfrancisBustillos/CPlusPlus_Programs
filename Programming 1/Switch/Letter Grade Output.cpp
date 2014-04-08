//Michelfrancis Bustillos
//1/2/14, Block A4

#include <iostream>
using namespace std;
int main ()
{
    char letter;
    
    cout<<"Enter you letter grade: ", cin>>letter, cout<<endl<<endl;
    
    system("CLS");
    
    switch (letter)
    {
        case 'A': cout<<"Your work is outstanding!"<<endl<<endl;
            break;
        case 'B': cout<<"Your doing great work!"<<endl<<endl;
            break;
        case 'C': cout<<"Your work is satisfactory!"<<endl<<endl;
            break;
        case 'D': cout<<"You need to work a little bit harder."<<endl<<endl;
            break;
        case 'E': cout<<"You need to see me for help."<<endl<<endl;
            break;
        default: cout<<"You definately need to review the meaning of 'letter grade'."<<endl<<endl;
    }
     
    system ("PAUSE");
    return 0;
}
