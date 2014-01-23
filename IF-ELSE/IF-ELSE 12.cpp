//Michelfrancis Bustillos
//12/6/13, Block A4
//Program #12

#include <iostream>
using namespace std;
int main ()
{
    int cookies, cookPerBox, boxPerCont, boxes, containers, cookRem, boxRem;
    
    cout<<"Enter the number of cookies: ", cin>>cookies, cout<<endl;
    cout<<"Enter the number of cookies per box: ", cin>>cookPerBox, cout<<endl;
    cout<<"Enter the number of boxes per container: ", cin>>boxPerCont, cout<<endl;
    system("CLS");
    
    boxes = cookies / cookPerBox;
    containers = boxes / boxPerCont;   
    cookRem = cookies % cookPerBox;
    boxRem = boxes % boxPerCont;
    
    cout<<"You will need "<<boxes<<" boxes."<<endl;
    cout<<"You will need "<<containers<<" containers."<<endl;
    cout<<"You will have "<<boxRem<<" boxes remaining. "<<endl;
    cout<<"You will have "<<cookRem<<" cookies remaining."<<endl<<endl;
    
    system ("PAUSE");
    return 0;
}
