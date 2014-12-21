//Michelfrancis Bustillos

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
    string name, dummy;
    float wage = 0, hours = 0;
    ifstream fin;
    
    fin.open("PAYROLL.dat");
    
    for(int cont = 4; cont > 0; cont--)
    {
        getline(fin, name);
        cout<<name<<" ";
        fin>>wage;
        cout<<"$"<<fixed<<setprecision(2)<<wage;
        fin>>hours;
        cout<<setprecision(0)<<" "<<hours;
        getline(fin, dummy);
        cout<<endl;
    }
    
    fin.close();
    cout<<endl<<endl<<endl;
        
    system("PAUSE");
    return 0;
}
    
