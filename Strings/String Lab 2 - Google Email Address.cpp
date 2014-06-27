#include<iostream>
#include<string>

using namespace std;

void gmail (string name);

int main()
{
    string name;
    
    cout<<"Enter your screen name: ", cin>>name, cout<<endl;
    
    gmail (name);
    
    system("pause");
    return 0;
}

void gmail (string name)
{
    name.append("@gmail.com");
    
    cout<<"Your Google email address is "<<name<<endl<<endl<<endl;
}
