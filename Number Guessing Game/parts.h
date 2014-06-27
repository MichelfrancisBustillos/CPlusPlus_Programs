#include <iostream>
#include <string>

using namespace std;

void game1 (int secret, int myGuess, int numGuesses);
void game2 (int secret, int myGuess, int numGuesses);
void game3 (int secret, int myGuess, int numGuesses);
void replay (bool& quit, int again, int passlim, int numGuesses);
void variations (int myGuess, int secret);
