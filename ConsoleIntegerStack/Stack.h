// STACK - SPECIFICATION
#ifndef __STACK__
#define __STACK__

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

// This is the 'Node' entity used to construct Stacks.
struct StackNode {
	int payload;
	StackNode* next;
};

class Stack {
private:
	// This points to the base of the Stack.  If pointed at NULL, the Stack is empty.
	StackNode* root;

	// This is the name of the Stack.
	char name[100];

public:
	// CONSTRUCTOR
	// Description: Creates an empty Stack with a common name.
	Stack();

	// OVERLOAD CONSTRUCTOR
	// Description: Creates an empty Stack with the provided name (100 character max).
	Stack(char* theName);
	
	// PUSH
	// Description: Pushes an integer onto the stack.
	// Arguments:
	//		payload - the value being pushed onto the Stack
	// Return:
	//		bool -	'True' indicates the value was successfully pushed onto the Stack.
	//				'False' indicates the value was not pushed onto the Stack.
	bool Push(int payload); 
	
	// POP
	// Description: Pops an integer off the stack.
	// Arguments:
	//		payload - <reference return> the value that was popped off the Stack.
	// Return:
	//		bool -	'True' indicates the value was successfully popped off the Stack.
	//				'False' indicates the value was not popped off the Stack.
	bool Pop(int* payload);
	
	// PEEK
	// Description: Peeks at the top value on the Stack.
	// Arguments:
	//		payload - <reference return> the value that was popped off the Stack.
	// Return:
	//		bool -	'True' indicates the Stack isn't empty.
	//				'False' indicates the Stack is empty.
	bool Peek(int* payload);

	// CONSOLE PRINT
	// Description: Displays a graphical representation of the Stack on the Console.
	void ConsolePrint();
};

#endif