//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranecircle.cpp
// ** source file
// ** Your name:  Samir Asfirane
//****************************************************************************
#include <iostream>

using namespace std;

#include "asfiranecircle.h"



    // public constructor that takes a float
    // representing the radius of the circle
	Circle::Circle(float r) {
	
		this->r = r;
	
	}

	// default constructor
	Circle::Circle(){};

	// public destructor that does nothing
	Circle::~Circle(){};        

	// method area() that calculates the area of a Circle
	// takes no arguments and returns no arguments just 
	// display the area of a circle
	void Circle::area(){

	   // message before displaying the area
		cout << "The area of the circle is :" << PI*r*r << endl; // calculating the area using math formula
	
	}  

	// method perimeter() that calculates the perimiter of a Circle
	// takes no arguments and returns no arguments just 
	// display the perimiter of a circle
	void Circle::perimeter(){		

		// message before displaying the perimeter
		cout << "The perimiter of the circle is :" << PI*2*r << endl; // calculating the perimeter using math formula
	}

	// This method is inherited but not applicable it doesn't take any arguments
	// and returns no arguments just print out an error message to the user
	void Circle::volume(){

		// Error message displayed to user
		cout << "Volume not defined for Circle " << endl;

}






