//Michelfrancis Bustillos

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("COURSE.dat", ios::app);
    
    fout<<endl<<"Mary Lamb"<<endl;
    fout<<"Foods"<<endl;
    fout<<"95"<<endl;
    fout<<"99"<<endl;
    fout<<"100"<<endl;
    fout<<"Ms. Little"<<endl;
    
    fin.close();
    cout<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
