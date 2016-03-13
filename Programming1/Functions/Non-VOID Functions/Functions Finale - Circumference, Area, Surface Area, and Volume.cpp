#include<iostream>

using namespace std;

const double pi = 3.14;
void circ (int rad);
int area (int rad);
void surfaceArea (int rad);
int volume (int rad);
int main (void)
{
    int rad;
    double areaAns, volumeAns;
    
    for (rad = 1; rad <= 10; rad++)
    {
        circ (rad);
    }
    
    cout<<endl;
    
    for (rad = 1; rad <= 10; rad++)
    {

        if (rad % 2 == 0)
        {
            areaAns = area (rad);
            cout<<"The area of a circle with radius "<<rad<<" inches is "<<areaAns<<" square inches."<<endl;
        }
    }
    
    cout<<endl;
    
    for (rad = 1; rad <= 10; rad++)
    {

        if (rad % 2 != 0)
        {
            surfaceArea (rad);
        }
    }
    
    cout<<endl;
    
    for (rad = 1; rad <= 10; rad++)
    {        
        if (rad % 3 == 0)
        {
            volumeAns = volume (rad);
            cout<<"The volume of a sphere with radius "<<rad<<" inches is "<<volumeAns<<" cube inches."<<endl;
        }
    } 
    
    system("PAUSE");
    return 0;
}

void circ (int rad)
{
    double ans;
    
    ans = pi * (rad * 2);
    
    cout<<"The circumference of a circle with radius "<<rad<<" inch is "<<ans<<" inches."<<endl;
}

int area (int rad)
{
    double areaAns;
    
    areaAns = pi * (rad * rad);
    
    return areaAns;
}

void surfaceArea (int rad)
{
    double ans;
    
    ans = 4 * pi * (rad * rad);
    
    cout<<"The surface area of a sphere with radius "<<rad<<" inch is "<<ans<<" square inches."<<endl;
    
}

int volume (int rad)
{
    double volumeAns;
    
    volumeAns = ( 4 / 3 ) * pi * (rad * rad * rad);
    
    return volumeAns;
}
