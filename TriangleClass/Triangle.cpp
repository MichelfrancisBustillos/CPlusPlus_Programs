#include "Triangle.h"

Triangle::Triangle()
{

}

void Triangle::DisplayTriangle()
{
	this->calcVals();
	
	cout << "Hypotenuse Length: " << this->getHypotenuseLength() << endl;
	cout << "Adjacent Length: " << this->getAdjacentLength() << endl;
	cout << "Opposite Length: " << this->getOppositeLength() << endl;
	cout << "The area of the triangle is: " << this->getArea() << endl;
	cout << "The perimeter of the triangle is: " << this->getPerimeter() << endl;
}

void Triangle::calcVals()
{
	double h = (this->getAdjacentLength() * this->getAdjacentLength()) + (this->getOppositeLength() * this->getOppositeLength());
	h = sqrt(h);
	this->setHypotenuseLength(h);

	double a = (this->getAdjacentLength() * this->getOppositeLength()) / 2;
	this->setArea(a);

	double p = this->getAdjacentLength() + this->getOppositeLength() + sqrt((this->getAdjacentLength() * this->getAdjacentLength()) + (this->getOppositeLength() * this->getOppositeLength()));
	this->setPerimeter(p);
}

bool Triangle::setOppositeLength(double x)
{
	this->opposite = x;
	return true;
}

bool Triangle::setAdjacentLength(double x)
{
	this->adjacent = x;
	return true;
}

bool Triangle::setHypotenuseLength(double x)
{
	this->hypotenuse = x;
	return true;
}

bool Triangle::setArea(double x)
{
	area = x;
	return true;
}

bool Triangle::setPerimeter(double x)
{
	this->perimeter = x;
	return true;
}

double Triangle::getOppositeLength()
{
	return this->opposite;
}

double Triangle::getAdjacentLength()
{
	return this->adjacent;
}

double Triangle::getHypotenuseLength()
{
	return this->hypotenuse;
}

double Triangle::getArea()
{
	return this->area;
}

double Triangle::getPerimeter()
{
	return this->perimeter;
}