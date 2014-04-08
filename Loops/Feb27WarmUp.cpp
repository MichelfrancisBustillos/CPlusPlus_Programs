//Michelfrancis Bustillos

#include<iostream>

using namespace std;

int main()
{
    int enter;
    int add = 0;
    
    cout<<"Enter a number: ", cin>>enter, cout<<endl;
    
    while (enter != 0)
    {
        cout<<"Enter another number: ", cin>>enter, cout<<endl;
        add = add + enter;
    }
    cout<<"The of the entered numbers is "<<add<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
