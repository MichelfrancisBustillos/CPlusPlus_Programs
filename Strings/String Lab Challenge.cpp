#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    string key;
    string id, answers, dummy;
    int y = 0;
    ifstream fin;
    ofstream fout;
    fin.open("TrueFalseData.dat");
    fout.open("TrueFalseData2.dat");
    
    fin>>key;
    fout<<key<<endl;
    
    while (!fin.eof())
    {
        
        fin>>id;
        getline(fin, answers);
        
        for (int x = 0; x < answers.length(); x++)
        {
            c = answers.at(x);
            
            cout<<c;
        }
        
        fout<<id<<" "<<answers<<" "<<endl;
    }
    fin.close();
    system("pause");
    return 0;
}
