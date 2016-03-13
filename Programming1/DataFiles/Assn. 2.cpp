//Michelfrancis Bustillos

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string nameFirst, nameLast;
    int cont;
    float wage, hours;
    int count = 0;
    ofstream fout;
    
    fout.open("PAYROLL.dat");
    
    cout<<"Enter the number of employees: ", cin>>cont;
    system("CLS");
    
    while (count < cont)
    {
        cout<<"Enter employee's name: ", cin>>nameFirst, cin>>nameLast, cout<<endl;
        fout<<nameFirst<<" "<<nameLast;
        
        cout<<"Enter hourly wage: ", cin>>wage, cout<<endl;
        fout<<endl<<wage;
        
        cout<<"Enter hours worked: ", cin>>hours, cout<<endl;
        fout<<endl<<hours<<endl;
        
        system("CLS");
        
        count++;
    }
    
    fout.close();
        
    system("PAUSE");
    return 0;
}
    
