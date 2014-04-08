//Michelfrancis Bustillos

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string nameFirst, nameLast, sent, dummy;
    int cont;
    float wage, hours;
    int count = 0;
    ifstream fin;
    
    fin.open("PAYROLL.dat");
    
    while(getline(fin, sent))
    {
        cout<<sent<<endl;
    }
    
    fin.close();
    cout<<endl<<endl<<endl;
        
    system("PAUSE");
    return 0;
}
    
