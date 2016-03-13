#include <iostream>
#include "Triangle.h"
using namespace std;

#define OPPOSITE 3
#define ADJACENT 4

int main() {
	// instantiate the class
	Triangle myTriangle;

	// load the values
	myTriangle.setOppositeLength(OPPOSITE);
	myTriangle.setAdjacentLength(ADJACENT);

	// display the rectangle
	myTriangle.DisplayTriangle();

	return 0;
}