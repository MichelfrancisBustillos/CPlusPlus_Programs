/*find Example:  Write a value returning function named vowelLocation that takes in a string and
 *a char representing the vowel you are looking for and returns the location of any vowels contained
 *in the string.  The string will be all lowercase letters and we will consider the letters
 *a, e, i, o, u, and y as vowels.*/
#include<iostream>
#include<string>
 
using namespace std;

//vowelLocation function prototype
int vowelLocation(string word, char vow);

int main()
{
    string str;
    char vowel;
    int loc;
    
    cout<<"Please enter a word: ";
    cin>>str;
    
    cout<<"Please enter a vowel to search for: ";
    cin>>vowel;
    
    loc = vowelLocation(str, vowel);
    
    cout<<"The vowel "<<vowel<<" in the word "<<str<<" is located at index "
        <<loc<<endl;
    
    system("pause");
    return 0;
}

//vowelLocation function header and definition
int vowelLocation(string word, char vow)
{
    int x;
    
    x = word.find(vow);
    
    return x;
}
