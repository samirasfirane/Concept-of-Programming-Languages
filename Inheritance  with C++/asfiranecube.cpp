//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranecube.cpp
// ** source file
// ** Your name:  Samir Asfirane
//****************************************************************************
#include <iostream>

using namespace std;

#include "asfiranecube.h"



// public constructor that takes a float
// representing length of a cube
Cube::Cube(float length) {

	this->length = length;

}

// public destructor that does nothing
Cube::~Cube(){};

// method area() that calculates the area of a Cube
// takes no arguments and returns no arguments just 
// display the area of a Cube
void Cube::area(){

	// message before displaying the area
	cout << "The area of the cube is :" << 6*length*length << endl; // calculating the area using math formula

}

// method perimeter() that calculates the perimiter of a cube
// takes no arguments and returns no arguments just 
// display the perimiter of a cube
void Cube::perimeter(){

	// message before displaying the perimeter
	cout << "The perimiter of the cube is :" << 12*length << endl; // calculating the perimeter using math formula
}

// method volume() that calculates the volume of a cube
// takes no arguments and returns no arguments just 
// display the perimiter of a volume
void Cube::volume(){

	// Error message displayed to user
	cout << "The volume of the cube is :" << length*length*length <<endl;  // calculating the voolume using math formula

}






