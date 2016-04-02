#include<iostream>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	string original;
	string ints;
	
	cout<<"Enter string to passwordify: ", getline(cin, original), cout<<endl;
	
	int length = original.length();
	
	for (int c = 0; c < length; c++) {
		if (original[c] == ' ') {
			original[c] = '_';
		}
	}

	for (int c = 0; c < length; c++) {
		if(isdigit(original[c])) {
			ints = ints + original[c];
		}
		else if (original[c] == 's' || original[c] == 'S') {
			original[c] = '$';
		} 
		else if (original[c] == 'l' || original[c] == 'L') {
			original[c] = '1';
		}
		else if (original[c] == 'o' || original[c] == 'O') {
			original[c] = '0';
		}
		else if (original[c] == 'e' || original[c] == 'E') {
			original[c] = 'e';
		}
		else if (original[c] == 'i' || original[c] == 'I') {
			original[c] = '!';
		}
		else if((rand()%2+1) == 1) {
			original[c] = toupper(original[c]);
		}
		else {
			original = original + original[c];
		}
	}
	
	original = original + ints;
	cout<<original<<endl;
	return 0;
}
