/*insert Example: Write a void function named makeTitle that takes in a string representing a 
 *title of a book or magazine article, but without any spaces, and changes it to the title properly
 *spaced, meaning spaces between all capitalized words.
 *Example:  Twilight:BreakingDawn returns Twilight: Breaking Dawn*/
#include<iostream>
#include<string>

using namespace std;

//makeTitle function prototype
void makeTitle (string bookTitle);

int main()
{
    string bookTitle, bookTitleFixed;
    
    cout<<"Please enter the title of a book or magazine without any spaces: ";
    cin>>bookTitle;
    
    //function call
    makeTitle (bookTitle);
        
    system("pause");
    return 0;
}

//makeTitle function header and definition
void makeTitle (string bookTitle)
{
    int looper = 0;
    
    while (looper <= bookTitle.length())
    {
        if (bookTitle.at(looper) <= 92 && bookTitle.at(looper) >= 64)
        {
            bookTitle.insert(looper, " ");
            looper++;
        }
        looper++;
    }
    cout<<bookTitle;
}
