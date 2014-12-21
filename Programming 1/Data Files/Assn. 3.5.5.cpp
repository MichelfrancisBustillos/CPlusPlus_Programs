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
    
    fout.open("NUMBERS.dat", ios::app);
    
    for (int num = 0; num <= 10; num++)
    {
        random = rand() % 100 + 1;
        fout<<random<<" ";
    }
    
    fout.close();
        
    system("PAUSE");
    return 0;
}
    
