//******************************
//Name: Michelfrancis Bustilolos
//Student Schedule Program
//Date: 9/13/10
//****************************** 

#include <iostream> 
#include <string>

using namespace std;

int main()
{
    //variable declarations
    
    string firstName;
    string lastName;
    string a1;
    string a2;
    string a3;
    string a4;
    string b1;
    string b2;
    string b3;
    string b4;
    string dummy;
    
    //executable statements
    
    //input commands             
    cout<<"Please enter your first name: ";
    cin>>firstName;
    
    cout<<endl<<endl<<"Please enter your last name: ";
    cin>>lastName;
    
    cout<<endl<<endl;
    getline(cin, dummy);
    
    cout<<"Please enter the class you have A1: ";
    getline(cin, a1);
    
    cout<<endl<<endl<<"Please enter the class you have A2: ";
    getline(cin, a2);
    
    cout<<endl<<endl<<"Please enter the class you have A3: ";
    getline(cin, a3);
    
    cout<<endl<<endl<<"Please enter the class you have  A4: ";
    getline(cin, a4);
    
    cout<<endl<<endl<<"Please enter the class you have B1: ";
    getline(cin, b1);
    
    cout<<endl<<endl<<"Please enter the class you have B2: ";
    getline(cin, b2);   
     
    cout<<endl<<endl<<"Please enter the class you have B3: ";
    getline(cin, b3);   
     
    cout<<endl<<endl<<"Please enter the class you have B4: ";
    getline(cin, b4);
    
    cout<<endl<<endl;
    
    //output commands
    //cout<<"------------------------------------------"<<endl<<endl;
    cout<<firstName<<" "<<lastName<<endl<<endl;
    cout<<"A1: "<<a1<<endl;
    cout<<"A2: "<<a2<<endl;    
    cout<<"A3: "<<a3<<endl;
    cout<<"A4: "<<a4<<endl;
    
    cout<<"B1: "<<b1<<endl;
    cout<<"B2: "<<b2<<endl;
    cout<<"B3: "<<b3<<endl;
    cout<<"B4: "<<b4<<endl;
    
    //return statements
    
    system("PAUSE");
    return 0;
        
}
