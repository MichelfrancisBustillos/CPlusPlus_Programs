#include<iostream>

using namespace std;

void verse1 (void);
void verse2 (void);
int verse3 (int mice);

int main ()
{
    int mice = 3;
    int paws;
    
    verse1 ();
    verse1 ();
    verse2 ();
    verse2 ();
    paws = verse3 (mice);
    
    cout<<"These "<<mice<<" blind mice have "<<paws<<" paws."<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;
}

void verse1 (void)
{
    cout<<"Three blind mice."<<endl;
}

void verse2 (void)
{
    cout<<"See how they run."<<endl;
}

int verse3 (int mice)
{
    int paws = 0;
    
    paws = mice * 4;
    
    return paws;
}
