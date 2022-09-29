// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/22/2022
// Description: This program uses object oriented program and calculates the area of an object
// The user gets output a menu in which they can select from, the user then inputs
// the specific numbers needed to calculate the area for the specific shape with the 
// inputted numbers. The program then outputs the area
// Time spent: The entire week

#include <iostream>
#include <iomanip>

#include "Trapezoid.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"


using namespace std;

int main() {

	//  Variable declaration for user input of choice
	int choice;

	// Outputs the menu
	cout << fixed << showpoint << setprecision(1);
	cout << "1 -- circle\n2 -- square\n3 -- rectangle\n4 -- trapezoid\n5 -- quit\n";
	cin >> choice;


	// if input is not vaid, continues to ask user for valid input
	while (choice < 1 || choice > 5) {

		cout << "Please select a valid option.";
		cin >> choice;

	}


	// if statement for if choice is 1, activates the Circle portion of the program
	if (choice == 1) {

		// Creates an object using circle called shape
		Circle shape;

		double radius;


		cout << "What is the radius of the circle? ";
		cin >> radius;

			// if radius is negative, asks for value again unitl positive
			while (shape.setRadius(radius) == false) {

				cout << "Please enter a positive radius. ";
				cin >> radius;

			}


		// outputs the radius
		cout << "Radius: " << shape.getRadius() << endl;

		// outputs the area
		cout << "Area: " << shape.calcArea() << endl;
	}


	// if statement for if choice is 2, activates the Square portion of the program
	if (choice == 2) {

		// creates an object for square called shape
		Square shape;

		double side;


		cout << "What is the side length of the square? ";
		cin >> side;
			
			// loop for if side value is negative, continues to ask until positive
			while (shape.setSide(side) == false) {

				cout << "Please enter a positive side length. ";
				cin >> side;

			}


		// outputs side value
		cout << "Side: " << shape.getSide() << endl;

		// outputs area value
		cout << "Area: " << shape.calcArea() << endl;

	}


	// if statement for if choice is 3, activates the Rectangle portion of the program
	if (choice == 3) {

		// creates an object using rectangle called shape
		Rectangle shape;

		double length, width;


		cout << "What is the length of the rectangle? ";
		cin >> length;
			
			// if length is negative, loops until length entered is positive
			while (shape.setLength(length) == false) {

				cout << "Please enter a positive length. ";
				cin >> length;

			}


		cout << "What is the width of the rectangle? ";
		cin >> width;

			// if width is negative, loops unitl width entered is positive
			while (shape.setWidth(width) == false) {

				cout << "Please enter a positive width. ";
				cin >> width;

			}


		// outputs length and width values
		cout << "Length: " << shape.getLength() << endl;
		cout << "Width: " << shape.getWidth() << endl;

		// outputs area values
		cout << "Area: " << shape.calcArea() << endl;

	}


	// if statement for if user input is 4, activates the Trapezoid part of the program
	if (choice == 4) {

		// creates an object using trapezoid class called shape
		Trapezoid shape;

		double base1, base2, height;


		cout << "What is the length of the first base of the trapezoid? ";
		cin >> base1;

			// if base1 value is negative, loops until it is positive
			while (shape.setBase1(base1) == false) {

				cout << "Please enter a positive base length. ";
				cin >> base1;
			}


		cout << "What is the length of the second base of the trapezoid? ";
		cin >> base2;

			// if base2 value is negative, loops until value entered is positive
			while (shape.setBase2(base2) == false) {

				cout << "Please enter a positive base length. ";
				cin >> base2;

			}


		cout << "What is the height of the trapezoid? ";
		cin >> height;

			// if height value is negative, loops until value entered is positive
			while (shape.setHeight(height) == false) {

				cout << "Please enter a positive height. ";
				cin >> height;

			}


		// outputs base1, base2, and height values
		cout << "Base1: " << shape.getBase1() << endl;
		cout << "Base2: " << shape.getBase2() << endl;
		cout << "Height: " << shape.getHeight() << endl;

		// outputs area value
		cout << "Area: " << shape.calcArea() << endl;
	}


	// if statement for if user input is 5, activates the quit option for the program
	if (choice == 5) {

		// prints goodbye and ends the program
		cout << "Goodbye" << endl;
		return 0;
	}

	

	return 0;
}