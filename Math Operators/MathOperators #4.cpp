/*****************************************
Name: Michelfrancis Bustillos
MathOperators Program #4
Date: 10/22/13
*****************************************/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    //variable declarations
    int startOdo, endOdo, miles;
    double monGas, tuesGas, wedGas, thursGas, friGas, gallons;
    double mpg;
    
    
    cout<<fixed<<showpoint<<setprecision(4);
            
    //Prompts
    cout<<"Enter starting Odometer reading: ",
    cin>>startOdo,
    cout<<endl;
    
    cout<<"Enter ending odometer reading: ",
    cin>>endOdo,
    cout<<endl;
    
    cout<<"Enter gallons of gas purchased on Monday: ",
    cin>>monGas,
    cout<<endl;
    
    cout<<"Enter gallons of gas purchased on Tuesday: ",
    cin>>tuesGas,
    cout<<endl;
    
    cout<<"Enter gallons of gas purchased on Wednesday: ",
    cin>>wedGas,
    cout<<endl;
    
    cout<<"Enter gallons of gas purchased on Thursday: ",
    cin>>thursGas,
    cout<<endl;
    
    cout<<"Enter gallons of gas purchased on Friday: ",
    cin>>friGas,
    cout<<endl<<endl;
        
    //calculations
    miles = endOdo - startOdo;
  
    gallons = monGas + tuesGas + wedGas + thursGas + friGas;
    
    mpg = miles/gallons;
       
    //output results
    system("CLS");  /* clears output screan for output results */
    cout<<"Beginning Odometer reading was: "<<startOdo<<endl;
    cout<<"End Odometer reading was: "<<endOdo<<endl<<endl;
    cout<<"Gallons of gas purchased on Monday: "<<monGas<<endl;
    cout<<"Gallons of gas purchased on Tuesday: "<<tuesGas<<endl;
    cout<<"Gallons of gas purchased on Wednesday: "<<wedGas<<endl;
    cout<<"Gallons of gas purchased on Thursday: "<<thursGas<<endl;
    cout<<"Gallons of gas purchased on Friday: "<<friGas<<endl<<endl;
    cout<<"The average miles per gallon is: "<<mpg<<endl<<endl;
    
    
    system("pause");
    return 0;
}
