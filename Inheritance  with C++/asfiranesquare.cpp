//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranesquare.cpp
// ** source file
// ** Your name:  Samir Asfirane
//****************************************************************************
#include <iostream>

using namespace std;

#include "asfiranesquare.h"



// public constructor that takes a float
// representing length of a square
Square::Square(float length) {

	this->length = length;

}

// default constructor
Square::Square(){};          

// public destructor that does nothing
Square::~Square(){};

// method area() that calculates the area of a square
// takes no arguments and returns no arguments just 
// display the area of a square
void Square::area(){

	// message before displaying the area
	cout << "The area of the square is :" << length*length << endl; // calculating the area using math formula

}

// method perimeter() that calculates the perimiter of a square
// takes no arguments and returns no arguments just 
// display the perimiter of a square
void Square::perimeter(){

	// message before displaying the perimeter
	cout << "The perimiter of the square is :" << 4*length << endl; // calculating the perimeter using math formula
}

// This method is inherited but not applicable it doesn't take any arguments
// and returns no arguments just print out an error message to the user
void Square::volume(){

	// Error message displayed to user
	cout << "Volume not defined for Square " << endl;

}






