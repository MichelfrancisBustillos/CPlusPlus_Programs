//Name: Michelfrancis Bustillos 
//Input/Output/Variables Test Review Program
//Date: 10/01/13
       
//Write C++ statements that include the header files iostream.

#include<iostream>

//Write a C++ statement that allows you to use cin, cout, and endl without the prefix std::.

using namespace std;

int main()
{
	//variable declaration
    string name1;
    string name2;
    int sasquatchSightings;
    int lochnessSightings;
    int totalSightings;
    double totalRewards;
    name1 = "Sasquatch";
    name2 = "Lochness";
    
    //executable statements
    cout<<"How many times has "<<name1<<" been sighted? ";
    cin>>sasquatchSightings;
    cout<<endl<<endl;
    
    cout<<"How many times has "<<name2<<" been sighted? ";
    cin>>lochnessSightings;
    cout<<endl<<endl;
    
    cout<<name1<<" was sighted "<<sasquatchSightings<<" times."<<endl;
    cout<<name2<<" was sighted "<<lochnessSightings<<" times."<<endl<<endl;
   
    totalSightings = sasquatchSightings + lochnessSightings;
    totalRewards = 3.75 * totalSightings;
    
    cout<<"That is a total of "<<totalSightings<<" sightings!  WOW!"<<endl;
    cout<<"The total rewards for the mysterious creature sightings is $"<<totalRewards<<"."<<endl<<endl;
    
    cout<<"Happy Hunting!!"<<endl<<endl;
    
    //system and return statements
    system ("pause");
    return 0;
 }

