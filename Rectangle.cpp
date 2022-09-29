// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/22/2022
// Description: Rectangle.cpp is the function implementation file
// Time spent: The entire week

#include "Rectangle.h"

// set length function
bool Rectangle::setLength(double l) {

	if (l >= 0) {

		length = l;
		return true;

	}

	else {
		return false;
	}
}

// set width function
bool Rectangle::setWidth(double w) {

	if (w >= 0) {
		width = w;
		return true;

	}

	else {

		return false;
	}
}

// get length function
double Rectangle::getLength() {
	return length;
}

// get width function
double Rectangle::getWidth() {
	return width;
}

// calc area function
double Rectangle::calcArea() {
	return (length * width);
}
