//Michelfrancis Bustillos

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    int sent = 0, total = 0, evens = 0, odds = 0, counter = 0, average = 0;
    fin.open("NUMBERS.dat");
    
    while(fin>>sent)
    {
        cout<<sent<<endl;
        total = total + sent;
        counter++;
        if (sent % 2 == 0)
        {
            evens++;
        }
        else if (sent % 2 != 0)
        {
            odds++;
        }
          
    }
    cout<<"Evens: "<<evens<<endl;
    cout<<"Odds: "<<odds<<endl;
    average = total / counter;
    cout<<"Average: "<<average;
    
    fin.close();
    cout<<endl<<endl<<endl;
        
    system("PAUSE");
    return 0;
}
    
