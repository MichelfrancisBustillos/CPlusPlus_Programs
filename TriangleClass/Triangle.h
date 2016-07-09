#ifndef __TRIANGLE_H_INCLUDED__
#define __TRIANGLE_H_INCLUDED__

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class Triangle
{
public:
	Triangle();
	void DisplayTriangle();
	void calcVals();
	bool setOppositeLength(double);
	bool setAdjacentLength(double);
	bool setHypotenuseLength(double);
	bool setArea(double);
	bool setPerimeter(double);
	double getOppositeLength();
	double getAdjacentLength();
	double getHypotenuseLength();
	double getArea();
	double getPerimeter();

private:
	double opposite;
	double adjacent;
	double hypotenuse;
	double area;
	double perimeter;
};

#endif