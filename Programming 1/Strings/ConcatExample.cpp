/*Concatenation Example:  Write a value returning function named fullName that takes in a persons
 *first, middle, and last names and returns their full name, with spaces between each name,
 *to be output on the screen.*/
 
 #include<iostream>
 #include<string>
 
 using namespace std;
 
 //fullName function prototype
 string fullName (string firstName, string middleName, string lastName);
 
 int main()
 {
     string firstName;
     string middleName;
     string lastName;
     string name;
     
     cout<<"Please enter your first name: ";
     cin>>firstName;
     
     cout<<"Please enter your middle name: ";
     cin>>middleName;
     
     cout<<"Please enter your last name: ";
     cin>>lastName;
     
     system("CLS");
     
     name = fullName (firstName,middleName, lastName);
     cout<<name<<endl;
     
     system("pause");
     return 0;
 }
 
//fullName function header and definition
string fullName (string firstName, string middleName, string lastName)
{
    string name;
    name = firstName + " " + middleName + " " + lastName;
    return name;
}
