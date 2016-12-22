//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranesquare.h
// ** header file
// ** Your name:  Samir Asfirane
//****************************************************************************


#ifndef Square_HEADER
#define Square_HEADER

#include "asfiranepolygon.h"

// Class square inherits class Rectangle publicly
class Square : public Polygon {

// protected 
protected:

	float length;


// method definition as public
public:
	Square();           // public constructor
	Square(float);      // constructor with one argument
	~Square();          // public destructor

	void area();      // method area() that calculates the area of a Square
	void perimeter(); // method perimeter() that calculates the perimiter of a Square
	void volume();    // This method doesn't apply here an error message will be displayed in the concrete class
};

#endif