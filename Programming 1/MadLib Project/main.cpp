#include <cstdlib>
#include <iostream>
#include <constream>
using namespace conio;
#include <conio2.h>
using namespace std;

//in run window go to pull down window, select properties, under Font tab
// choose Consolas and size either 28 or 36

int main(int argc, char *argv[])
{
    /*Verbs = blue
      Nouns = red
      Adjectives & Adverbs = green
      Numbers = yellow*/
      
    string adj1, adj2, adj3, adj4, adj5, adj6;
    string firstName1, firstName2, firstName3, girlName;
    string pluralNoun1, pluralNoun2, pluralNoun3, pluralNoun4;
    string pastVerb;
    string largeAnimal, smallAnimal;
    int num1, num2, num3;
    
    system("color 1a"), textbackground(BLUE);
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter an adjective: ", textcolor(GREEN), cin>>adj1, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another adjective: ", textcolor(GREEN), cin>>adj2, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another adjective: ", textcolor(GREEN), cin>>adj3, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another adjective: ", textcolor(GREEN), cin>>adj4, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another adjective: ", textcolor(GREEN), cin>>adj5, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another adjective: ", textcolor(GREEN), cin>>adj6, clrscr();
    
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter a first name: ", textcolor(RED), cin>>firstName1, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another first name: ", textcolor(RED), cin>>firstName2, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another first name: ", textcolor(RED), cin>>firstName3, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter a girl's name: ", textcolor(RED), cin>>girlName, clrscr();
    
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter a plural noun: ", textcolor(RED), cin>>pluralNoun1, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another plural noun: ", textcolor(RED), cin>>pluralNoun2, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another plural noun: ", textcolor(RED), cin>>pluralNoun3, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another plural noun: ", textcolor(RED), cin>>pluralNoun4, clrscr();
    
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter a past tense verb: ", textcolor(BLUE), cin>>pastVerb, clrscr();
    
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter a large animal: ", textcolor(RED), cin>>largeAnimal, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter a small animal: ", textcolor(RED), cin>>smallAnimal, clrscr();
    
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter a number: ", textcolor(YELLOW), cin>>num1, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter another number: ", textcolor(YELLOW), cin>>num2, clrscr();
    gotoxy(20,13), textcolor(WHITE), cout<<"Enter a number between 1 and 50: ", textcolor(YELLOW), cin>>num3, clrscr();
    
    gotoxy(5, 13), textcolor(WHITE), cout<<"I, the ";
    textcolor(GREEN), cout<<adj1;
    textcolor(WHITE), cout<<" and ";
    textcolor(GREEN), cout<<adj2<<" ";
    textcolor(RED), cout<<firstName1;
    textcolor(WHITE), cout<<" has ";
    textcolor(BLUE), cout<<pastVerb<<" ";
    textcolor(RED), cout<<firstName2<<"'s ";
    textcolor(GREEN), cout<<adj3;
    textcolor(WHITE), cout<<" sister ";
    gotoxy(5, 14), cout<<"and plans to steal her ";
    textcolor(GREEN), cout<<adj4<<" ";
    textcolor(RED), cout<<pluralNoun1;
    textcolor(WHITE), cout<<"!  What are a ";
    textcolor(RED), cout<<largeAnimal;
    textcolor(WHITE), cout<<" and ";
    gotoxy(5, 15), cout<<"a backpacking ";
    textcolor(RED), cout<<smallAnimal;
    textcolor(WHITE), cout<<" to do?  Before you can help ";
    textcolor(RED), cout<<girlName;
    textcolor(WHITE), cout<<", you'll have to collect ";
    gotoxy(5, 16), cout<<"the ";
    textcolor(GREEN), cout<<adj5<<" ";
    textcolor(RED),  cout<<pluralNoun2;
    textcolor(WHITE), cout<<", and ";
    textcolor(GREEN), cout<<adj6<<" ";
    textcolor(RED), cout<<pluralNoun3;
    textcolor(WHITE), cout<<" that open up the ";
    textcolor(YELLOW), cout<<num3;
    textcolor(WHITE), cout<<" worlds connected to";
    gotoxy(5, 17), cout<<" A ";
    textcolor(RED), cout<<firstName3<<"'s ";
    textcolor(WHITE), cout<<"Lair.  There are ";
    textcolor(YELLOW), cout<<num1<<" ";
    textcolor(RED), cout<<pluralNoun3;
    textcolor(WHITE), cout<<" and ";
    textcolor(YELLOW), cout<<num2<<" ";
    textcolor(RED), cout<<pluralNoun4;
    textcolor(WHITE), cout<<" in the game, ";
    gotoxy(5, 18), cout<<"along with hundreds of other goodies for you to find.  ";
    gotoxy(5, 20), textcolor(BLUE); 
    
    system("PAUSE"); 
    return EXIT_SUCCESS;
}
