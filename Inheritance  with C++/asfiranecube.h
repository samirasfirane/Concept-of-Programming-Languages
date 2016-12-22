//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranecube.h
// ** header file
// ** Your name:  Samir Asfirane
//****************************************************************************


#ifndef Cube_HEADER
#define Cube_HEADER

#include "asfiranesquare.h"

// Class Cube inherits class Square publicly
class Cube : public Square {

// protected 
protected:

	float length;


// method definition as public
public:
	Cube();         // public constructor
	Cube(float);    // public constructor with a float argument
	~Cube();        // public destructor

	void area();      // method area() that calculates the area of a Cube
	void perimeter(); // method perimeter() that calculates the perimiter of a Cube
	void volume();    // method volume that calculates the volume of a Cube
};

#endif