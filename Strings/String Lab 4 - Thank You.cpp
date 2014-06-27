#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name, firstName, lastName;
    
    cout<<"Please enter your name as last name first name with a comma in between: ", getline(cin, name), cout<<endl;
    
    lastName = name.substr(0, name.find(","));
    firstName = name.substr(name.find(","), name.length());
    
    cout<<"Thank you"<<firstName<<" "<<lastName<<endl<<endl<<endl;
        
    system("pause");
    return 0;
}
