#ifndef __SORTING_H_INCLUDED__
#define __SORTING_H_INCLUDED__

#include <algorithm>
#include <iostream>
using namespace std;

#define LIST_SIZE 7

class Sorting {
private:
	int numbersArray[LIST_SIZE];
public:
	Sorting();
	void DisplayArray();
	void LoadArray(int*);
	void BubbleSort();
	void SelectionSort();
	void InsertionSort();

}; // end - Sorting

#endif
