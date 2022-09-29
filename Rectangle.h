// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/22/2022
// Description: Rectangle.h is a header file for the program
// Time spent: The entire week

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

// creation of class rectangle and the public functions and private variables needed
class Rectangle {

private:

	double length{ 1.0 };
	double width{ 1.0 };

public:
	Rectangle() = default;

	Rectangle(double l, double w) :
		length{ l }, width{ w } {};

	bool setLength(double);
	bool setWidth(double);
	double getLength();
	double getWidth();
	double calcArea();

};

#endif