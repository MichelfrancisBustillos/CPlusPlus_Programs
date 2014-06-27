#include<iostream>

using namespace std;

void personalinfo (void);
void schoolinfo (void);

int main()
{
    personalinfo();
    schoolinfo();
    
    system("PAUSE");
    return 0;
}

void personalinfo (void)
{
    cout<<"Michelfrancis Bustillos"<<endl;
    cout<<"120 Weber St."<<endl;
    cout<<"Havre de Grace, MD 21078"<<endl;
    cout<<"(443) 447-5545"<<endl;
}

void schoolinfo (void)
{
    cout<<endl;
    cout<<"Mr. Real"<<endl;
    cout<<"Health - Ms. LaRue"<<endl;
    cout<<"Accounting - Ms. Loughlin"<<endl;
    cout<<"Algebra II - Ms. Andriano"<<endl;
    cout<<"Programming I - Mr. Blythe"<<endl;
    cout<<endl;
    cout<<"American Government - Ms. Zimmerman"<<endl;
    cout<<"Fine Art Prep - Mr. Geiss"<<endl;
    cout<<"English II - Ms. Lorenzet"<<endl;
    cout<<"Biology- Ms. Skica"<<endl;
    cout<<endl;
}
