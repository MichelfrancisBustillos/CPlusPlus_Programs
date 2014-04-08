//------------------------------LeaderBoard------------------------------------------------------------
#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>

using namespace std;

void leaderBoard (void)
{
    string name;
    int reset = 0;
    int score = 0;
    
    ifstream fin;
    ofstream fout;
    fin.open("leaderBoard.dat");
    
    cout<<"----------Leader Board-------------"<<endl;
    while (getline(fin, name))
    {
        //fin>>name>>score;
        //cout<<name<<" "<<score<<endl;
        cout<<name<<endl;
    }
    
    cout<<endl<<endl<<endl;
    cout<<endl<<endl;
}
