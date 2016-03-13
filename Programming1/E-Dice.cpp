//Michelfrancis Bustillos
//Program: Dice Program

#include<iostream>
#include<string>
#include<windows.h>
#include<stdlib.h>

using namespace std;

//------------------------------MAIN-----------------------------------------------------------------------
int main()
{   
     int master, sides;
     int count = 0;
     int sidesInput;
     srand (time(NULL));
    
    cout<<"Enter the number of sides on your dice and press enter. "<<endl;
    cout<<"> ", cin>>sides, cout<<endl;
    system("CLS");
        
    while (!GetAsyncKeyState(VK_ESCAPE))
     {  

        cout<<"Press the space bar to roll dice or press Esc to exit."<<endl;
 
        if (GetAsyncKeyState(VK_SPACE))
        {
            
            while (count <= sides)
            {
                master = rand() % 5 + 1;
                cout<<"Result: "<<master<<endl;
                Sleep(30);
                system("CLS");
                count++;
            }
            cout<<"Result: "<<master<<endl<<endl<<endl;
            cout<<"Press the space bar again to roll again or Esc to exit."<<endl;
            count = 0;
        }
    }
    system("CLS");
    cout<<"Goodbye!";
    
    system("ping -n 2 127.0.0.1 > NUL");
    return 0;
}
