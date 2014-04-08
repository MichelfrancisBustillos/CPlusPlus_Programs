//Michelfrancis Bustillos

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string nameFirst, nameLast, course, teachName;
    int grade1, grade2, grade3;
    ofstream fout;
    
    fout.open("COURSE.dat");
    cout<<"Enter your name: ", cin>>nameFirst, cin>>nameLast, cout<<endl;
    fout<<nameFirst<<" "<<nameLast<<endl;
    
    cout<<"Enter your favorite class (without spaces): ", cin>>course, cout<<endl;
    fout<<course<<endl;
    
    cout<<"Enter your teacher's last name: ", cin>>teachName, cout<<endl;
    fout<<teachName<<endl;
  
    cout<<"Enter your last three test grades seperated by spaces: ", cin>>grade1, cin>>grade2, cin>>grade3, cout<<endl;
    fout<<grade1<<" "<<grade2<<" "<<grade3<<endl;
      
    fout.close();
        
    system("PAUSE");
    return 0;
}
    
