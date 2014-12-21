//Michelfrancis Bustillos

#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int random, cont;
    int count = 0;
    ofstream fout;
    srand (time(NULL));
    
    fout.open("NUMBERS.dat");
    
    cout<<"How many random numbers do you want? ", cin>>cont, cout<<endl;
    cout<<"It shall be done!"<<endl;
    
    while (count <= cont)
    {
        random = rand() % 100 + 1;
        fout<<random<<" ";
        count++;
    }
    
    fout.close();
        
    system("PAUSE");
    return 0;
}
    
