//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiraneshape.h
// ** header file
// ** Your name:  Samir Asfirane
//****************************************************************************

#ifndef Shape_HEADER
#define Shape_HEADER




// Top level abstract class Shape
class Shape {

	

// method definition as public
public:
	
	virtual void area()=0;      // virtual method area() that calculates the area of a shape
	virtual void perimeter()=0; // virtual method perimeter() that calculates the perimiter of a shape
	virtual void volume()=0;    // virtual method volume that calculates the volume of a shape
};


#endif