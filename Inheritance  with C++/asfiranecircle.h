//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranecircle.h
// ** header file
// ** Your name:  Samir Asfirane
//****************************************************************************

#ifndef Circle_HEADER
#define Circle_HEADER

#include "asfiraneshape.h"

const double PI = 3.14159265359; // defining the constant PI to be use

// Class Circle inherits class shape publicly
class Circle : public Shape {

// protected 
protected :

	float  r;  // defines the radius of a circle


	// method definition as public
public:
	Circle();           // public default constructor
	Circle(float);      // public constructor that takes a float
	~Circle();          // public destructor


	void area();      // method area() that calculates the area of a Circle
	void perimeter(); // method perimeter() that calculates the perimiter of a Circle
	void volume();    // This method doesn't apply here an error message will be displayed in the concrete class
};


#endif




