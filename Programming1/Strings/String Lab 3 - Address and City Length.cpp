#include<iostream>
#include<string>

using namespace std;

void address (string name, string add, string cSZ);
void city (string cSZ);

int main()
{
    string cSZ;
    string name;
    string add;
    string dummy;
    
    cout<<"Please enter your name: ", cin>>name, cout<<endl;
    getline(cin, dummy);
    cout<<"Please enter your street address: ", getline(cin, add), cout<<endl;
    cout<<"Please enter your city, state and zip with a comma between the city and state: ", getline(cin, cSZ), cout<<endl;
    
    system("CLS");
    
    address (name, add, cSZ);
    
    city (cSZ);
    
    system("pause");
    return 0;
}

void address (string name, string add, string cSZ)
{
    cout<<name<<endl<<add<<endl<<cSZ<<endl;
}

void city (string cSZ)
{
    string sub;
    sub = cSZ.substr(0, cSZ.find(","));
    cout<<sub<<" has "<<sub.length()<<" letters in its name."<<endl<<endl<<endl;
    
}
