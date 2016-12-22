//****************************************************************************
//  CS351 C++ Final project
//  Header File  asfiranedriver.cpp
// ** source file
// ** Your name:  Samir Asfirane
//****************************************************************************
#include <iostream>

# include "asfiranesquare.h"
# include "asfiranecircle.h"
# include "asfiranecube.h"
# include "asfiranerectangle.h"
# include "asfiranesphere.h"

using namespace std;


// functions prototype for function displaying operations
// on different objects being created
void displayCircle(float radius);
void displaySphere(float radius);
void displayRectangle(float length, float width);
void displaySquare(float length);
void displayCube(float length);


int main() {

	// declare and intialize variable choice to 0
	int choice = 0;
	float radius, length, width;


	// use of menu choice to taken action
	while (choice != 6)
	{
		// Display menu choice for user
		cout << "Enter a number for the menu item you want selected!" << endl;
		cout << "1. calculate the characteristics of a Circle" << endl;
		cout << "2. calculate the characteristics of a Sphere" << endl;
		cout << "3. calculate the  characteristics of a Rectangle" << endl;
		cout << "4. calculate the  characteristics of a Square" << endl;
		cout << "5. calculate the  characteristics of a Cube" << endl;
		cout << "6. Quit" << endl;
		cin >> choice;
		cin.ignore();
		cin.clear();



		// switch coice  
		switch (choice){
		case 1: cout << " enter the radius for the circle " << endl; // displays message to user to enter radius
			cin >> radius;
			cin.ignore();
			cin.clear();
			displayCircle(radius); // calls function display to operate on object
			break;
		case 2: cout << " enter the radius for the sphere " << endl; // displays message to user to enter radius
			cin >> radius;
			cin.ignore();
			cin.clear();
			displaySphere(radius);
			break;
		case 3: cout << " enter the length of the rectangle first " << endl; // displays message to user to enter length
			cin >> length;
			cin.ignore();
			cin.clear();
			cout << " enter the width of the rectangle now " << endl; // displays message to user to enter length
			cin >> width;
			cin.ignore();
			cin.clear();
			displayRectangle(length, width); // calls function display to operate on object
			break;
		case 4: cout << " enter the length for the square " << endl; // displays message to user to enter length
			cin >> length;
			cin.ignore();
			cin.clear();
			displaySquare(length);
			break;
		case 5: cout << " enter the radius for the cube " << endl; // displays message to user to enter length
			cin >> length;
			cin.ignore();
			cin.clear();
			displayCube(length);   // calls function display to operate on object
			break;
		case 6: cout << "The program is going to quit !" << endl;
			exit(0);  // choice four exit the program
			break;


		}
	}

}

// function displayCircle takes a float as argument
// calls circle constructor to intiaite process of creating 
// displying different operations on object
// no value is returned
void displayCircle(float radius){

	Circle circle = Circle(radius);
	circle.area();
	circle.perimeter();
	circle.volume();

}
// function displaySphere takes a float as argument
// calls sphere constructor to intiaite process of creating 
// displying different operations on object
// no value is returned
void displaySphere(float radius){

	Sphere sphere = Sphere(radius);
	sphere.area();
	sphere.perimeter();
	sphere.volume();

}

// function displayRectangle takes two float as argument
// calls Rectangle constructor to intiaite process of creating 
// displying different operations on object
// no value is returned
void displayRectangle(float length, float width){

	Rectangle rectangle = Rectangle(length, width);
	rectangle.area();
	rectangle.perimeter();
	rectangle.volume();

}
// function displaySquare takes a float as argument
// calls square constructor to intiaite process of creating 
// displying different operations on object
// no value is returned
void displaySquare(float length){

	Square square = Square(length);
	square.area();
	square.perimeter();
	square.volume();

}
// function displayCube takes a float as argument
// calls Cube constructor to intiaite process of creating 
// displying different operations on object
// no value is returned
void displayCube(float length){

	Cube cube = Cube(length);
	cube.area();
	cube.perimeter();
	cube.volume();

}