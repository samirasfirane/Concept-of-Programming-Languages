//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranerectangle.h
// ** header file
// ** Your name:  Samir Asfirane
//****************************************************************************

#ifndef Rectangle_HEADER
#define Rectangle_HEADER


#include "asfiranepolygon.h"

// Class Rectangle inherits class Polygon publicly
class Rectangle : public Polygon {

// protected 
protected:

	float length, width;


// method definition as public
public:

	Rectangle();             // public constructor
	Rectangle(float, float); // constructor with two arguments
	~Rectangle();            // public destructor

	void area();      // method area() that calculates the area of a Rectangle
	void perimeter(); // method perimeter() that calculates the perimiter of a Rectangle
	void volume();    // This method doesn't apply here an error message will be displayed in the concrete class
};

#endif