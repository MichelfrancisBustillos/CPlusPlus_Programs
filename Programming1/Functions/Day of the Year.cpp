//Michelfrancis Bustillos
//Functions Challenge - Day of the year

#include<iostream>

using namespace std;

bool leaper (int year);
int dater (bool leap, int day, int month);

int main ()
{
    int day, month, year, dateNumber;
    bool leap;
    string leapWord;
    
    cout<<"Enter the month: ", cin>>month, cout<<endl;
    cout<<"Enter the day: ", cin>>day, cout<<endl;
    cout<<"Enter the year: ", cin>>year, cout<<endl;
    
    system("CLS");
    
    leap = leaper (year);
    
    dateNumber = dater (leap, day, month);
    
    if (leap == true)
    {
        leapWord = " was ";
    }
    else if (leap == false)
    {
        leapWord = " was not ";
    }
    
    cout<<year<<leapWord<<" a leap year."<<endl;
    cout<<month<<"/"<<day<<"/"<<year<<" was "<<dateNumber<<" day(s) from the beginning of the year."<<endl<<endl<<endl;
    
    
    
    system("PAUSE");
    return 0;    
}

bool leaper (int year)
{
    bool leap;
    
    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            leap = true;
        }
        else if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                leap = true;
            }
            else if (year % 400 != 0)
            {
                leap = false;
            }
        }
    }
    else if (year % 4 != 0)
    {
        leap = false;
    }
    
    return leap;
}

int dater (bool leap, int day, int month)
{
    string leapWord;
    int yearDays;
    int dateNumber;
    int dateRem;
    int leapFebDays;
    
    if (leap == true)
    {
        yearDays = 366;
        leapWord = "is";
        leapFebDays = 29;
    }
    else if (leap == false)
    {
        yearDays = 365;
        leapWord = "is not";
        leapFebDays = 28;
    }
    
    switch (month)
    {
    	case 1: 
    	{
    		dateRem = yearDays - day;
    		break;
    	}
    	case 2:
    	{
    		dateRem = yearDays - (31 + day);
    		break;
    	}
    	case 3:
    	{
    		dateRem = yearDays - (31 + leapFebDays + day);
    		break;
    	}
    	case 4:
    	{
    		dateRem = yearDays - (62 + leapFebDays + day);
    		break;
    	}
    	case 5:
    	{
    		dateRem = yearDays - (92 + leapFebDays + day);
    		break;
    	}
    	case 6:
    	{
    		dateRem = yearDays - (123 + leapFebDays + day);
    		break;
    	}
    	case 7:
    	{
    		dateRem = yearDays - (153 + leapFebDays + day);
    		break;
    	}
    	case 8:
    	{
    		dateRem = yearDays - (184 + leapFebDays + day);
    		break;
    	}
    	case 9:
    	{
    		dateRem = yearDays - (215 + leapFebDays + day);
    		break;
    	}
    	case 10:
    	{
    		dateRem = yearDays - (245 + leapFebDays + day);
    		break;
    	}
    	case 11:
    	{
    		dateRem = yearDays - (276 + leapFebDays + day);
    		break;
    	}
    	case 12:
    	{
    		dateRem = yearDays - (306 + leapFebDays + day);
    		break;
    	}
    }
    dateNumber = yearDays - dateRem;
	
    return dateNumber;
}
