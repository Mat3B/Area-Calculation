// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/22/2022
// Description: Circle.h is a header file for the program
// Time spent: The entire week

#ifndef CIRLCE_H
#define CIRCLE_H

// creation of class circle and the public functions and private variables needed
class Circle {

private:
	double radius{ 1.0 };

public:
	Circle() = default;

	Circle(double r) :
		radius{ r } {};

	bool setRadius(double);
	double getRadius();
	double calcArea();

};

#endif