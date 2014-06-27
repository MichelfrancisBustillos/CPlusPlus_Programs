//Creating ACCOUNTS.dat file
#include<iostream>
#include<fstream>

using namespace std;

int main (void)
{
    //declare output stream variable
    ofstream fout;
    
    int number, accountNumber;
    
    //open the file
    fout.open("ACCOUNTS.dat");
    
    cout<<"Houw many account number will you be entering? ";
    cin>>number;
    
    for(int i = 1; i <= number; i++)
    {
        cin>>accountNumber;
        //send accountNumber to the file.
        fout<<accountNumber<<endl;
    }
    cout<<"File complete."<<endl<<endl;
    //close file
    fout.close();
    system("pause");
    return 0;
} 
