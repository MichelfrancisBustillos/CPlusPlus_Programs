//Michelfrancis Bustillos
//1/16/14, Block A4

#include <iostream>
using namespace std;
int main ()
{
    char race;
    string name, clasen, racen;
    int clase;
    int range = 1;
    
    cout<<"Enter your character's name: ", cin>>name, cout<<endl<<endl;
    
    cout<<"Pick your race:"<<endl;
    cout<<"(H)uman"<<endl;
    cout<<"(E)lf"<<endl;
    cout<<"(O)rc"<<endl;
    cout<<"(N)ightElf"<<endl;
    cout<<"Ho(B)it"<<endl;
    cout<<"(G)nome"<<endl;
    cout<<"(W)arecat"<<endl<<endl;
    cout<<"Enter the letter for your race: ", cin>>race, cout<<endl<<endl;
    
    switch (race)
    {
        case 'H':
        case 'h':    
        {
            range = range + 1;
            racen = "Human";
            break;
        }
        case 'E':
        case 'e':
        {
            range = range + 15;
            racen = "Elf";
            break;
        }
        case 'O':
        case 'o':
        {
            range = range + 8;
            racen = "Orc";
            break;
        }
        case 'N':
        case 'n':
        {
            range = range + 20;
            racen = "Nightelf";
            break;
        }
        case 'B':
        case 'b':
        {
            range = range + 5;
            racen = "Hobit";
            break;
        }
        case 'G':
        case 'g':
        {
            range = range + 2;
            racen = "Gnome";
            break;
        }
        case 'W':
        case 'w':
        {
            range = range + 10;
            racen = "Warecat";
            break;
        }
        default:
        {
            cout<<"Invalid Entry!"<<endl<<endl<<endl;
            system("PAUSE");
            return 0;
        }
    }
        
    
    cout<<"Pick your class:"<<endl;
    cout<<"1. Knight"<<endl;
    cout<<"2. Cleric"<<endl;
    cout<<"3. Wizard"<<endl;
    cout<<"4. Archer"<<endl;
    cout<<"5. Druid"<<endl;
    cout<<"6. Ninja"<<endl;
    cout<<"7. Bard"<<endl;
    cout<<"Enter the number for your class: ", cin>>clase, cout<<endl<<endl;
    
    system("CLS");
    
    switch (clase)
    {
        case 1:
        {
            range = range + 8;
            clasen = "Knight";
            break;
        }
        case 2:
        {
            range = range + 0;
            clasen = "Cleric";
            break;
        }
        case 3:
        {
            range = range + 20;
            clasen = "Wizard";
            break;
        }
        case 4:
        {
            range = range + 5;
            clasen = "Archer";
            break;
        }
        case 5:
        {
            range = range + 15;
            clasen = "Druid";
            break;
        }
        case 6:
        {
            range = range + 10;
            clasen = "Ninja";
            break;
        }
        case 7:
        {
            range = range + 2;
            clasen = "Bard";
            break;
        }
        default:
        {
            cout<<"Invalid Entry!"<<endl<<endl<<endl;
            system("PAUSE");
            return 0;
        }
    }
    
    cout<<name<<" is an "<<racen<<" "<<clasen<<", level 1 and starts with "<<range<<" hit points."<<endl<<endl<<endl;
    
    system("PAUSE");
    return 0;
}
        
