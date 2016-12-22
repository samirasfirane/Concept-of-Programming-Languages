//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranerectangle.cpp
// ** source file
// ** Your name:  Samir Asfirane
//****************************************************************************
#include <iostream>

using namespace std;

#include "asfiranerectangle.h"



// public constructor that takes two floats
// representing length and width
Rectangle::Rectangle(float length, float width) {

	this->length = length;
	this->width = width;

}

// default constructor
Rectangle::Rectangle(){};

// public destructor that does nothing
Rectangle::~Rectangle(){};

// method area() that calculates the area of a rectangle
// takes no arguments and returns no arguments just 
// display the area of a rectangle
void Rectangle::area(){

	// message before displaying the area
	cout << "The area of the rectangle is :" << length*width << endl; // calculating the area using math formula

}

// method perimeter() that calculates the perimiter of a rectangle
// takes no arguments and returns no arguments just 
// display the perimiter of a rectangle
void Rectangle::perimeter(){

	// message before displaying the perimeter
	cout << "The perimiter of the rectangle is :" << (length+width)*2 << endl; // calculating the perimeter using math formula
}

// This method is inherited but not applicable it doesn't take any arguments
// and returns no arguments just print out an error message to the user
void Rectangle::volume(){

	// Error message displayed to user
	cout << "Volume not defined for Rectangle " << endl;

}






