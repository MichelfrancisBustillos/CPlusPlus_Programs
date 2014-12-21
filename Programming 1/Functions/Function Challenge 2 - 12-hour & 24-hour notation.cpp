//Michelfrancis Bustillos
//Function Challenge 2 - 12-hour & 24-hour notation

#include<iostream>

using namespace std;

void conv12to24 (void);
void conv24to12 (void);
void menu (void);
string collector (int choice);
void desplay (void);

int main ()
{
    string time;
    
    menu ();
    
    system("PAUSE");
    return 0;  
}

void menu (void)
{
    int choice, hour, minute;
    string time;
    
    cout<<"Choose one: "<<endl;
    cout<<"1. Convert 12-hour to 24-hour"<<endl;
    cout<<"2. Convert 24-hour to 12-hour"<<endl;
    cout<<">", cin>>choice, cout<<endl;
    time = collector (choice);
    //cout<<time;
    
    
    if (choice == 1)
    {
        //conv12to24;
    }
    else if (choice == 2)
    {
        //conv24to12;
    }
}

string collector (int choice)
{
    string time;
    
    if (choice == 2)
    {
        cout<<"Enter the time (hh:mm): ", cin>>time, cout<<endl;
    }
    
    return time;
}
