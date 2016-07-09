#include <iostream>
using namespace std;

#include "sorting.h"

int main() {
	Sorting sortClass;
	int sortMe[LIST_SIZE] = { 15, 14, 16, 7, 4, 8, 1 };

	// INITIAL ARRAY
	sortClass.LoadArray(sortMe);
	cout << "THE INITIAL LIST CONTAINS" << endl;
	sortClass.DisplayArray();
	cout << endl;

	// BUBBLE SORT
	sortClass.LoadArray(sortMe);
	cout << "BEGIN BUBBLE SORT" << endl;
	sortClass.BubbleSort();
	sortClass.DisplayArray();


	// INSERTION SORT
	sortClass.LoadArray(sortMe);
	cout << "BEGIN INSERTION SORT" << endl;
	sortClass.InsertionSort();
	sortClass.DisplayArray();

	// SELECTION SORT
	sortClass.LoadArray(sortMe);
	cout << "BEGIN SELECTION SORT" << endl;
	sortClass.SelectionSort();
	sortClass.DisplayArray();

	return 0;
}