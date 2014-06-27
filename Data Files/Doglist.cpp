//Michelfrancis Bustillos

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("DOGRev.dat");
    string name, sent, dummy;
    int age;
    
    while(fin>>name)
    {
        fin>>age;
		cout<<name<<" ";
		if (age < 7)
		{
			cout<<"Young Dog"<<endl;
		}
		else if (age => 7)
		{
			cout<<"Old Dog"<<endl;
		}
		else 
		{
			cout<<"Error Dog"<<endl;
		}
    }
    
    
    fin.close();
    cout<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
