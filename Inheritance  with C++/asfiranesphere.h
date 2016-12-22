//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranesphere.h
// ** header file
// ** Your name:  Samir Asfirane
//****************************************************************************


#ifndef Sphere_HEADER
#define Sphere_HEADER

#include "asfiranecircle.h"

// Class Sphere inherits class Circle publicly
class Sphere : public Circle {

	// protected 
protected:

	float r;  // defines the radius of a Sphere


	// method definition as public
public:
	Sphere();           // default constructor
	Sphere(float);      // public constructor
	~Sphere();          // public destructor

	void area();      // method area() that calculates the area of a Sphere
	void perimeter(); // method perimeter() that calculates the perimiter of a Sphere
	void volume();    // method volume that calculates the volume of a Sphere
};

#endif