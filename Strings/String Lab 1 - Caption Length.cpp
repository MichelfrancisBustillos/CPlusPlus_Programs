#include<iostream>
#include<string>

using namespace std;

int main()
{
    string caption;
    
    cout<<"Enter a title for the picture: ", getline(cin, caption), cout<<endl;
    cout<<"There are "<<caption.length()<<" characters in your caption, including spaces."<<endl<<endl<<endl;
        
    system("pause");
    return 0;
}
