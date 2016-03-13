#include<iostream>

using namespace std;

void square (int a);
int cube (int a);
int main (void)
{
    int a = 0, ans = 0, c = 0;
    
    cout<<"Enter an integer: ", cin>>a, cout<<endl;
    cout<<"Choose (1) Square or (2) Cube: ", cin>> c, cout<<endl;
    
    switch (c)
    {
        case 1:
            square (a);
            break;
        case 2:
            ans = cube (a);
            cout<<a<<" cubed = "<<ans;
            break;
        default:
            cout<<"ERROR!"<<endl;
    }
    
    cout<<endl<<endl<<endl;

    system("PAUSE");
    return 0;   
}

void square (int a)
{
    int ans; 
    
    ans = a * a;
    cout<<a<<" squared = "<<ans;
}

int cube (int a)
{
    int ans = 0;
    
    ans = a * a * a;
    
    return ans;
}
