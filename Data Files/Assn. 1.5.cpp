//Michelfrancis Bustillos

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("COURSE.dat");
    string nameFirst, nameLast, course, teachName, dummy;
    int grade1 = 0, grade2 = 0, grade3 = 0;
    float avg = 0;
    
    fin>>nameFirst>>nameLast;
    cout<<"Student Name: "<<nameFirst<<" "<<nameLast<<endl;
    
    fin>>course;
    cout<<"Course: "<<course<<endl;
    
    fin>>grade1>>grade2>>grade3;
    cout<<"Last three test grades: "<<endl;
    cout<<grade1<<endl<<grade2<<endl<<grade3<<endl;
    
    avg = (grade1 + grade2 + grade3) / 3;
    
    cout<<"GPA: "<<avg<<endl;   
    
    getline(fin, dummy);
    getline(fin, teachName);
    cout<<"Instructor: Mr./Ms. "<<teachName<<endl; 
    
    fin.close();
    cout<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
