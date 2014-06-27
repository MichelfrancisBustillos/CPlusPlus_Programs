#include<iostream>
#include<string>

using namespace std;

int main()
{
    string names;
    char c;
    
    cout<<"Enter a string: ", cin>>names, cout<<endl;
    
    for (int x = 0; x < names.length(); x++)
    {
        if (names.at(x) == 'a' || names.at(x) == 'e' || names.at(x) == 'i' || names.at(x) == 'o' || names.at(x) == 'u' || names.at(x) == 'y')
        {
            names.erase(x, 1);
            x--;
        }
    }
    
    cout<<names<<endl;
    
    system("pause");
    return 0;
}
