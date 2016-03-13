void clasSwitch (void)
{
    #include<iostream>
    #include<string>

    char clas, allignment;
    
    cout<<"Choose your class to learn more about it: "<<endl<<endl;
    cout<<"(B)arbarian"<<endl;
    cout<<"B(a)rd"<<endl;
    cout<<"(C)leric"<<endl;
    cout<<"(D)ruid"<<endl;
    cout<<"(F)ighter"<<endl;
    cout<<"(M)onk"<<endl;
    cout<<"(P)aladin"<<endl;
    cout<<"(R)anger"<<endl;
    cout<<"R(o)gue"<<endl;
    cout<<"(S)orcerer"<<endl;
    cout<<"(W)izard"<<endl;
    cout<<"> ", cin>>clas, cout<<endl;
    system("CLS");
    
    switch (clas)
    {
        case 'b':
        case 'B':
            cout<<"Barbarians: archetypal warriors who uses brute strength and raw fury, instead of the honed skills, to excel in combat."<<endl;
            break;
        case 'a':
        case 'A':
            cout<<"Bards: Use their artistic talents to induce magical effects."<<endl;
            break;
        case 'c':
        case 'C':
            cout<<"Clerics: Skilled in the use of divine magic, clerics are powerful healers due to the large number of healing and curative magics available to them. With divinely-granted abilities over life or death, they are also able to repel or control undead creatures."<<endl;
            break;
        case 'd':
        case 'D':
            cout<<"Druid"<<endl;
        case 'f':
        case 'F':
            cout<<"Fighters: versatile, weapons-oriented warriors who fight using skill, strategy and tactics."<<endl;
            break;
        case 'm':
        case 'M':
            cout<<"Monks: martial artists, specializing in unarmed combat."<<endl;
            break;
        case 'p':
        case 'P':
            cout<<"Paladins: holy knights, crusading in the name of good and order. (Can only be alligned good)"<<endl;
            break;
        case 'r':
        case 'R':
            cout<<"Rangers: Often liveing reclusive lives as hermits, Rangers are hunters, and skilled woodsmen."<<endl;
            break;
        case 'o':
        case 'O':
            cout<<"Rogues: Versatile characters, capable of sneaky combat and nimble tricks."<<endl;
            break;
        case 's':
        case 'S':
            cout<<"Sorcerers: Weak in melee combat, but a master of arcane magic, generally the most powerful form of magic. Sorcerers' magical ability is innate rather than studied."<<endl;
        case 'w':
        case 'W':
            cout<<"Wizards: Use arcane magic, and are considered less effective in melee combat than other classes."<<endl;
            break;
        default:
            cout<<"Invalid entry!!"<<endl;
    }       
    cout<<endl<<endl;
}
