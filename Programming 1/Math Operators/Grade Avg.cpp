#include <iostream>
using namespace std;
int main ()
{
     double gradeAvg;    
         
     cout<<"Please enter your grade average: ", cin>>gradeAvg, cout<<endl;    
//------------------------------------------------     
     if (gradeAvg >= 90)
     {
         cout<<"Your grade is an A."<<endl;
         cout<<"Awesome!!"<<endl<<endl;
     }
     else if (gradeAvg >= 80)
     {
         cout<<"Your grade is a B."<<endl;
         cout<<"Good work!"<<endl<<endl;
     }      
         else if (gradeAvg >= 70)
         {
              cout<<"Your grade is a C."<<endl;
              cout<<"Not bad."<<endl<<endl;
         }    
              else if (gradeAvg >= 60)
              {
                   cout<<"Your grade is a D."<<endl;
                   cout<<"Keep trying."<<endl<<endl;
              }     
                   else
                   {
                        cout<<"Your grade is an E."<<endl;
                        cout<<"You suck."<<endl<<endl;
                   }

    system ("PAUSE");
    return 0;
}
