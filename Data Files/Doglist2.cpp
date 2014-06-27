//Michelfrancis Bustillos

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    ifstream fin;
    fout.open("DOGRev.dat", ios::app);
    string name;
    int age;
    
    fin.open("DOGRev.dat");
    
    while (fin>>name)
    {
        fin>>age;
        cout<<name<<endl;
    }
    cout<<endl<<endl<<endl;

    system("PAUSE");
    return 0;
}
