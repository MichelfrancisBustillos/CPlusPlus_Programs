//Michelfrancis Bustillos

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string data;
    ofstream fout;
    
    fout.open("NAMES.dat");
    
    for (int cont = 0; cont <= 4; cont++)
    {
        cout<<"Enter first name: ", cin>>data, cout<<endl;
        fout<<data<<" ";
        cout<<"Enter last name: ", cin>>data, cout<<endl;
        fout<<data<<endl;
        system("CLS");
    }

    fout.close();
        
    system("PAUSE");
    return 0;
}
    
