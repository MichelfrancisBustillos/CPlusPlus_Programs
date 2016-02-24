// STACK - IMPLEMENTATION
#include "Stack.h"

Stack::Stack() {
	this->root = NULL;
	strcpy_s(this->name, "Yoshimitsu");
}

Stack::Stack(char* theName) {
	this->root = NULL;
	strcpy_s(this->name, theName);
}

bool Stack::Push(int payload) {
	// Allocate memory for a new StackNode.
	StackNode* pushMe = NULL;
	pushMe = new(StackNode);
	if(pushMe == NULL) {
		return false;
	}

	// Populate the new StackNode with data.
	pushMe->next = NULL;
	pushMe->payload = payload;

	// Push the StackNode onto the Stack.
	// if the Stack is empty
	if(this->root == NULL) {
		this->root = pushMe;
	}
	
	// if the Stack isn't empty
	else 
	{
		StackNode* iterator = this->root;
		while(iterator->next != NULL) 
		{
			iterator = iterator->next;
		}
		iterator->next = pushMe;
	}

	return true;
}

bool Stack::Pop(int* payload) {
	// Locate the end StackNode and the StackNode right before it.
	StackNode* lastNode = NULL;
	StackNode* beforeLastNode = NULL;

	// If the Stack is empty.
	if(this->root == NULL) {
		return false;
	}

	// If the Stack contains a single StackNode.
	else if(this->root->next == NULL) {
		int capturedPayload = this->root->payload;
		delete this->root;
		this->root = NULL;
		*payload = capturedPayload;
		return true;
	}

	// If the Stack contains two or more StackNodes.
	else {
		// set 'lastNode' and 'beforeLastNode'
		beforeLastNode = this->root;
		while(beforeLastNode->next->next != NULL) {
			beforeLastNode = beforeLastNode->next;
		}
		lastNode = beforeLastNode->next;

		// extract the 'payload', deallocate memory, reshape Stack
		int capturedPayload = lastNode->payload;
		delete lastNode;
		beforeLastNode->next = NULL;
		*payload = capturedPayload;
		return true;
	}
}

bool Stack::Peek(int* payload) {
	StackNode* iterator = root;

	// If the Stack is empty, return 'False'
	if(this->root == NULL) {
		return false;
	}
	
	// If the Stack isn't empty, iterate to the appropriate
	//   StackNode and populate the return reference. 
	while(iterator->next != NULL) {
		iterator = iterator->next;
	}
	*payload = iterator->payload;
	return true;
}

void Stack::ConsolePrint() {
	StackNode* iterator = this->root;

	// Build the name portion of the output.
	char namePortion[120] = "";
	strcat_s(namePortion, "Stack <");
	strcat_s(namePortion, this->name);
	strcat_s(namePortion, ">");
	
	// Iterate through and print the list.
	cout << left;
	if(iterator == NULL) {
		cout << setw(30) << namePortion 
			 << ": " << "<empty>" << endl; 
	}
	else {
		cout << setw(30) << namePortion;
		cout << ": ";
		while(iterator != NULL) {
			cout << setw(4) << iterator->payload;
			iterator = iterator->next;
		}
		cout << endl;
	}
}