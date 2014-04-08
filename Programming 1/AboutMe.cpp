// Michelfrancis Bustillos A4
// AboutMe.cpp
// 8/30/13

#include<iostream>

using namespace std;

int main()
{
    string firstName;
    string middleIni;
    string lastName;
    int month;
    int day;
    int year;
    string age;
    string favoriteEvent;
    string favoriteColor;
    string favoriteRestaurant;
    string favoriteFood;
    string dummy;
    
    cout<<"---------INFORMATION GATHERING---------"<<endl;
    cout<<"Enter your first name: ";
    cin>>firstName;
    cout<<endl<<"Enter your middle initial: ";
    cin>>middleIni;
    cout<<endl<<"Enter your last name: ";
    cin>>lastName;
    cout<<endl<<endl<<"Enter your birth month (MM): ";
    cin>>month;
    cout<<endl<<"Enter your birthday (DD): ";
    cin>>day;
    cout<<endl<<"Enter your birth year (YYYY): ";
    cin>>year;
    getline(cin, dummy);
    cout<<endl<<endl<<"What was your favorite event from this past summer? ";
    getline(cin, favoriteEvent);
    cout<<endl<<"What is your favorite color? ";
    cin>>favoriteColor;
    getline(cin, dummy);
    cout<<endl<<"What is your favorite restaurant? ";
    getline(cin, favoriteRestaurant);
    cout<<endl<<"What is your favorite food at that restaurant? ";
    getline(cin, favoriteFood);
    
    /*firstName = "Michelfrancis";
    middleIni = "I.";
    lastName = "Bustillos";*/
    /*month = 5;
    day = 10;
    year = 1998;*/
    /*favoriteEvent = "My favorite thing I did this summer was go to my best friend's football game.";
    favoriteColor = "My favotire color is black.";
    favoriteRestaurant = "My favotire restaurant is Golden Corral.";
    favoriteFood = "  My favorite food there is BBQ ribs.";*/
    
    cout<<endl<<endl<<"---------INFORMATION OUTPUT----------"<<endl;
    cout<<endl<<"Your name is "<<firstName<<" "<<middleIni<<" "<<lastName<<"."<<endl<<endl;
    cout<<"Your birthday is "<<month<<"/"<<day<<"/"<<year<<"."<<endl<<endl;
    cout<<"Your favorite event this summer was "<<favoriteEvent<<"."<<endl<<endl;
    cout<<"Your favorite color is "<<favoriteColor<<"."<<endl<<endl;
    cout<<"Your favorite restaurant is "<<favoriteRestaurant;
    cout<<", and your favorite food at that rest-"<<endl<<"     aurant is "<<favoriteFood<<"."<<endl<<endl;
    system("PAUSE");
    return 0;
}
