/*Concatenation & Length Example:  Write a void function named multiplyStrings that takes in a string
 *and changes it to a string with the same number of copies of the original string as its length.
 *Example:  Eagle is changed to EagleEagleEagleEagleEagle*/
#include<iostream>
#include<string>
 
using namespace std;

//multiplyString function prototype
string multiplyString (string str);

int main()
{
    string str;
    
    cout<<"Please enter a word: ";
    cin>>str;
    
    system("CLS");
    
    str = multiplyString (str);
    
    cout<<str<<endl<<endl;
    
    system("pause");
    return 0;
}

//multiplyString function header and definitions
string multiplyString (string str)
{
    string str2;
    
    for (int x = 0; x < str.size(); x++)
    {
        str2 = str2 + str;
    }
    
    return str2;
}
