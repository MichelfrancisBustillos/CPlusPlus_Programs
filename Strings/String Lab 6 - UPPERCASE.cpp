#include<iostream>
#include<string>
//#include <ctype.h>

using namespace std;
 
int main()
{
    string str;
    char c;
    int choice = 0;
    
    cout<<"Enter a string: ", getline(cin, str), cout<<endl;
    cout<<"Choose one: "<<endl;
    cout<<"1) lowercase to UPPERCASE"<<endl;
    cout<<"2) UPPERCASE to lowercase"<<endl;
    cout<<">", cin>>choice, cout<<endl;
    
    if (choice == 1)
    {
        for (int x = 0; x < str.length(); x++)
        {
            c = str.at(x);
            
            if (c >= 97 && c <= 122)
            {
                c = c - 32;
            }
            
            cout<<c;
        }
    }
    else if (choice == 2)
    {
        for (int x = 0; x < str.length(); x++)
        {
            c = str.at(x);
            
            if (c >= 65 && c <= 90)
            {
                c = c + 32;
            }
            
            cout<<c;
        }
    }
    else
    {
        cout<<"ERROR!";
    }
     
    cout<<endl<<endl<<endl;
     
    system("pause");
    return 0;
}
