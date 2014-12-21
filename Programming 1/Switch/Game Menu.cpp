//Michelfrancis Bustillos
//1/6/14, Block A4

#include <iostream>
#include <windows.h>
using namespace std;
int main ()
{
    int mainSel, vol, music;
    
    cout<<"__________________"<<endl;
    cout<<"|                |"<<endl;
    cout<<"|     HALO       |"<<endl;
    cout<<"|  C++ Edition   |"<<endl;
    cout<<"|________________|"<<endl<<endl;
    cout<<"Choose: "<<endl;
    cout<<"(1) Campaign"<<endl;
    
    
    time_t start_time, cur_time;

    /*
    time(&start_time);
    do
    {
    time(&cur_time);
    }
    while((cur_time - start_time) < 1);
    */

    cout<<"(2) Multiplayer"<<endl;
    cout<<"(3) Sound Effects"<<endl;
    cout<<"(4) Music"<<endl;
    cout<<"(5) Help"<<endl;
    cout<<"(6) Quit"<<endl<<endl;
    cin>>mainSel;
    
    system("CLS");
    
    switch(mainSel)
    {
        case (1): 
        {
            cout<<"(Insert Campaign Here)"<<endl<<endl<<endl;
            break;
        }
        case (2):
        {
            cout<<"(Insert Multiplayer Here)"<<endl<<endl<<endl;
            break;
        }
        case (3):
        {
            cout<<"Sounds Effects: "<<endl;
            cout<<"(1) On"<<endl;
            cout<<"(2) Off"<<endl;
            cin>>vol;
            
            system ("CLS");
            
            if (vol == 1)
            {
                cout<<"Sound Effects On"<<endl<<endl<<endl;
            }
            else if (vol == 2)
            {
                cout<<"Sound Effects Off"<<endl<<endl<<endl;
            }
            else
            {
                cout<<"Invalid Entry"<<endl<<endl<<endl;
            }
            break;
        }
        case (4):
        {
            cout<<"Music: "<<endl;
            cout<<"(1) On"<<endl;
            cout<<"(2) Off"<<endl;
            cin>>music;
            
            system ("CLS");
            
            if (music == 1)
            {
                cout<<"Music On"<<endl<<endl<<endl;
            }
            else if (music == 2)
            {
                cout<<"Music Off"<<endl<<endl<<endl;
            }
            else
            {
                cout<<"Invalid Entry"<<endl<<endl<<endl;
            }
            break;
        }
        case (5):
        {
            cout<<"Choose a menu option."<<endl<<endl<<endl;
            break;
        }
        case (6):
        {
            cout<<"Thanks for playing!"<<endl<<endl<<endl;
            system ("PAUSE");
            return 0;
            break;
        }
        default:
        {
            cout<<"Invalid Entry"<<endl<<endl<<endl;
            break;
        }
    }
        
    system ("PAUSE");
    return 0;
}
