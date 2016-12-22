//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranepolygon.h
// ** header file
// ** Your name:  Samir Asfirane
//****************************************************************************

#ifndef Polygon_HEADER
#define Polygon_HEADER



#include "asfiraneshape.h"

// Class Polygon inherits class shape publicly
class Polygon : public Shape {

	

// method definition as public
public:
	virtual void area()=0;      // virtual method area() that calculates the area of a Polygon
	virtual void perimeter()=0; // virtual method perimeter() that calculates the perimiter of a Polygon
	virtual void volume()=0;    // virtual method volume that calculates the volume of a Polygon
};

#endif