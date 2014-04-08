//Michelfrancis Bustillos

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    string cont;
    int sent;
    fin.open("NUMBERS.dat");
    
    while(!fin.eof())
    {
        fin>>sent;
        cout<<sent<<endl;
    }
    
    fin.close();
    cout<<endl<<endl<<endl;
        
    system("PAUSE");
    return 0;
}
    
