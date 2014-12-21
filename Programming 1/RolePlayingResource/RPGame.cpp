//Michelfrancis Bustillos
//Program: 

#include<iostream>
#include<string>
#include<windows.h>
#include<stdlib.h>
#include "parts.h"
#include "clasSwitch.h"
#include "allignSwitch.h"

using namespace std;

//------------------------------MAIN-----------------------------------------------------------------------
int main()
{    
    int modSelect;
    
    cout<<"Choose what you would like to learn more about: "<<endl;
    cout<<"1. Allignments"<<endl;
    cout<<"2. Classes"<<endl;
    cout<<"> ", cin>>modSelect, cout<<endl;
    system("CLS");
    
    switch (modSelect)
    {
        case 1:
            allignSwitch();
            break;
        case 2:
            clasSwitch();
            break;
        default:
            cout<<"Invalid entry!"<<endl<<endl<<endl;
    }

    system("PAUSE");
    return 0;
}
