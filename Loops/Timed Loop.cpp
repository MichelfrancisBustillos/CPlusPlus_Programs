if ( passenter == password )
        {
            cout<<"Bananas...yes bananas is a secret."<<endl<<endl<<endl;
        }
        else
        {
        cout<<"Wrong answer..."<<endl;
        cout<<"Your computer will now be wiped."<<endl<<endl<<endl;
        
        while (con <= 100 )
        {
            cout<<"Wiping     "<<con<<"%";
            Sleep(300);
            system("CLS");
            cout<<"Wiping.    "<<con<<"%";
            Sleep(300);
            system("CLS");
            cout<<"Wiping..   "<<con<<"%";
            Sleep(300);
            system("CLS");
            cout<<"Wiping...  "<<con<<"%";
            Sleep(300);
            system("CLS");
            adder  = rand() % 20 + 1;
            con = con + adder;
        }
        cout<<"Wiping Complete!"<<endl<<endl<<endl;
        }

