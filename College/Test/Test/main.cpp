#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// We will demonstrate the dynamic nature of these arrays by prodiving
	// the rectangular dimensions through variables.
	int height = 5;
	int width = 6;

	// Create the root double pointer for the 2D array.
	int** ppRootPointer = NULL;

	// Allocate an array of int* variables and attach to the double pointer.
	ppRootPointer = new(int*[height]);

	// Allocate arrays of int variables and attach each array to one of the
	// pointers in ppRootPointer's array of pointers.
	for (int i = 0; i < height; i++) {
		ppRootPointer[i] = new(int[width]);
	}

	// Fill the array with a count.
	int counter = 1;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			ppRootPointer[i][j] = counter++;
		}

	}

	// Print the array.
	cout << left;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << setw(3) << ppRootPointer[i][j];
		}
		cout << endl;
	}

	// Deallocate the memory.
	for (int i = 0; i < height; i++) {
		// Since each pointer has multiple elements attached (the widths)
		// we must include the [] with the delete operation.
		// Omitting the [] with the delete operation will only deallocate
		// memory for a single element in the array.  Including the []
		// will use the array size indicated in the new statement used
		// to initially allocate the memory.  If in doubt, use the []
		// with the delete operation.
		delete[] ppRootPointer[i];
	}

}