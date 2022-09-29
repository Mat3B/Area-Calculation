// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/22/2022
// Description: Square.cpp is the function implementation file
// Time spent: The entire week

#include "Square.h"

// set side function
bool Square::setSide(double s) {

	if (s >= 0) {

		side = s;
		return true;

	}

	else {

		return false;

	}
}

// get side function
double Square::getSide() {

	return side;

}

// calc area function
double Square::calcArea() {

	return { side * side };

}