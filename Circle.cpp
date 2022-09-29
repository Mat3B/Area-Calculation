// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/22/2022
// Description: Circle.cpp is the function implementation file
// Time spent: The entire week

#include "Circle.h"

// set radius function 
bool Circle::setRadius(double r) {

	if (r >= 0) {

		radius = r;
		return true;
	}

	else {

		return false;

	}

}

// get radius function
double Circle::getRadius() {

	return radius;

}

// calc area function
double Circle::calcArea() {

	return { 3.14159 * radius * radius };
}