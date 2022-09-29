// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/22/2022
// Description: Square.h is a header file for the program
// Time spent: The entire week


#ifndef SQUARE_H
#define SQUARE_H

// creation of class square and the public functions and private variables needed
class Square {

private:

	double side{ 1.0 };

public:
	Square() = default;

	Square(double s) :
		side{ s } {};

	bool setSide(double);
	double getSide();
	double calcArea();
};

#endif
