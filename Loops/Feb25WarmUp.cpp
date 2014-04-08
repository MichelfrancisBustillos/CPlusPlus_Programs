//Michelfrancis Bustillos

#include<iostream>
#include<windows.h>
#include<stdlib.h>

using namespace std;

int main()
{
    string password = "lora";
    string passenter;
    int adder  = rand() % 10 + 1;
    int con = 0;
    int enters = 0;
    
    srand (time(NULL));
 
    while (passenter != password && enters <= 5)
    {
        cout<<"Try #"<<enters<<endl;
        cout<<"Enter the password: ", cin>>passenter, cout<<endl;
        enters++;
        system("CLS");
        
        if ( passenter == password )
        {
            cout<<"Bananas...yes bananas is a secret."<<endl<<endl<<endl;
            system("PAUSE");
            return 0;
        }
    }
    
    if (passenter != password)
    {
        cout<<"You have entered the password wrong too many times."<<endl;
        cout<<"Your computer will now be wiped."<<endl<<endl<<endl;
        Sleep(500);
        
        while (con <= 100 )
        {
            cout<<"Wiping     "<<con<<"%";
            Sleep(300);
            system("CLS");
            cout<<"Wiping.    "<<con<<"%";
            Sleep(300);
            system("CLS");
            cout<<"Wiping..   "<<con<<"%";
            Sleep(300);
            system("CLS");
            cout<<"Wiping...  "<<con<<"%";
            Sleep(300);
            system("CLS");
            adder  = rand() % 20 + 1;
            con = con + adder;
        }
        cout<<"Wiping Complete!"<<endl<<endl<<endl;
    }
   
    system("PAUSE");
    return 0;
}
