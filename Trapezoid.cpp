// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/22/2022
// Description: Trapezoid.cpp is the function implementation file
// Time spent: The entire week

#include "Trapezoid.h"

// set base 1 function
bool Trapezoid::setBase1(double b1) {

	if (b1 >= 0) {

		base1 = b1;
		return true;
	}

	else {
	
		return false;
	}
}

// set base 2 function
bool Trapezoid::setBase2(double b2) {

	if (b2 >= 0) {

		base2 = b2;
		return true;

	}

	else {

		return false;
	}
}

// set height function
bool Trapezoid::setHeight(double h) {

	if (h >= 0) {

		height = h;
		return true;

	}

	else {

		return false;

	}
}


// get base 1 function
double Trapezoid::getBase1() {
	return base1;
}

// get base 2 function
double Trapezoid::getBase2() {
	return base2;
}

// get height function
double Trapezoid::getHeight() {
	return height;
}

// calc area function
double Trapezoid::calcArea() {
	return (height * (base1 + base2)) / 2;
}