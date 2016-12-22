//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranesphere.cpp
// ** source file
// ** Your name:  Samir Asfirane
//****************************************************************************
#include <iostream>

using namespace std;

#include "asfiranesphere.h"



// public constructor that takes an intger
// representing the radius of the circle
Sphere::Sphere(float r) {

	this->r = r;

}

// public destructor that does nothing
Sphere::~Sphere(){};

// method area() that calculates the area of a sphere
// takes no arguments and returns no arguments just 
// display the area of a phere
void Sphere::area(){

	// message before displaying the area
	cout << "The area of the sphere is :" << 4*PI*r*r << endl; // calculating the area using math formula

}

// method perimeter() that calculates the perimiter of a sphere
// takes no arguments and returns no arguments just 
// display the perimiter of a sphere
void Sphere::perimeter(){

	// message before displaying the perimiter
	cout << "The perimiter of the sphere is :" << PI * 2 * r << endl; // calculating the perimeter using math formula
}

// method volume() that calculates the area of a sphere
// takes no arguments and returns no arguments just 
// display the volume of a pherer
void Sphere::volume(){

	// Display message before displaying the volume of a sphere
	cout << "The volume of the sphere is :" << (4*PI*r*r*r)/3 <<  endl; // calculating the volume using math formula

}






