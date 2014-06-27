//Using file PROFIT.dat
#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main (void)
{
    ifstream fin;
    string store, address, dummy;
    double profit1 = 0, profit2 = 0, profit3 = 0, average = 0;
    
    //open the file
    fin.open("PROFIT.dat");
    
    //read in the data from the file
    while (getline (fin, store))
    {
        getline (fin, address);
                
        fin>>profit1;
        fin>>profit2;
        fin>>profit3;
        getline (fin, dummy);
        cout<<store<<endl;
        cout<<address<<endl;
        cout<<profit1<<endl;
        cout<<profit2<<endl;
        cout<<profit3<<endl;
        
        //find the average profit
        average = (profit1 + profit2 + profit3) / 3;
        cout<<"average: "<<average<<endl<<endl;
        
    }
    
    fin.close();
    
    system("PAUSE");
    return 0;
}
