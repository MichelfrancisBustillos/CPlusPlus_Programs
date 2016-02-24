// DRIVER
#include <iostream>
#include "Stack.h"
using namespace std;

#define SHIFT_THRESHOLD 3
#define CYCLES 70

void main() {
	// SEED THE RNG
	srand( (unsigned int)time(NULL) );
	
	// STACK DEMONSTRATION
	int payload = 0;
	int randomIterations = 0;
	int pushValue = 1;
	Stack s1;
	for(int i = 0; i < CYCLES; i++) {
		cout << "*** STARTING ROUND " << i + 1 << " ***" << endl;
		// choose a random number between 1 and SHIFT_THRESHOLD
		randomIterations = rand() % SHIFT_THRESHOLD + 1;
		cout << "PUSHING " << randomIterations << " items onto the Stack." << endl;

		// push that many items onto the Stack
		for(int i = 0; i < randomIterations; i++) {
			s1.Push(pushValue++);
			cout << "Pushing: " << pushValue - 1 << endl;
		}
		s1.ConsolePrint();

		// choose a random number between 1 and SHIFT_THRESHOLD
		randomIterations = rand() % SHIFT_THRESHOLD + 1;
		cout << "POPPING " << randomIterations << " items off of the Stack." << endl;

		// pop that many items off of the Stack
		for(int i = 0; i < randomIterations; i++) {
			if(s1.Pop(&payload) == true) {
				cout << "The value " << payload << " was popped from the Stack." << endl;
			}
			else {
				cout << "The Stack is empty." << endl;
			}
		}
		s1.ConsolePrint();
		cout << endl;
	}

	// Alternate Constructor Demonstration
	Stack s2("Astaroth");
	cout << "*** STARTING ALTERNATE CONSTRUCTOR DEMO " << endl;
	s2.ConsolePrint();
	cout << "Pushing: 1, 1, 2, 3, 5, 8" << endl;
	s2.Push(1);
	s2.Push(1);
	s2.Push(2);
	s2.Push(3);
	s2.Push(5);
	s2.Push(8);
	s2.ConsolePrint();
	cout << "Popping 8 Times" << endl;
	for(int i = 0; i < 8; i++) {
		if(s2.Pop(&payload) == true) {
			cout << "The value " << payload << " was popped from the Stack." << endl;	
		}
		else {
			cout << "The Stack is empty." << endl;
		}
	}
	s2.ConsolePrint();
}