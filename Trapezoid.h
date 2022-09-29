// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/22/2022
// Description: Trapezoid.h is a header file for the program
// Time spent: The entire week

#ifndef TRAPEZOID_H_
#define	TRAPEZOID_H_


// creation of class trapezoid and the public functions and private variables needed
class Trapezoid {

private:
	double base1{ 1.0 };
	double base2{ 1.0 };
	double height{ 1.0 };

public:
	Trapezoid() = default;

	Trapezoid(double b1, double b2, double h) :
		base1{ b1 }, base2{ b2 }, height{ h } {};

	bool setBase1(double);

	bool setBase2(double);

	bool setHeight(double);

	double getBase1();

	double getBase2();

	double getHeight();

	double calcArea();

};


#endif