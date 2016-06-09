//////////////////////////////////////////////////
// Aaron Meyers
// 6/7/16
// Homework 4: EX04_04
//////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include "Rectangle2D.h"
using namespace std;

int main()
{
	Rectangle2D R1;
	Rectangle2D *Rec = NULL;
	Rec = &R1; // Creates a pointer for use in main

	// Introductory text that tells the user the parameters (x, y, width, and height) of the test rectangle 
	cout << "Welcome. You are going to make a rectangle and it will be compared to a test rectangle " 
		<< "which has a height of " << Rec->getTestHeight() << ", a width of " << Rec->getTestWidth() 
		<< ", and coordinates of (" << Rec->getTestX() << ", " << Rec->getTestY() << ").\n" << endl;

	cout << "Now you are going to make your own rectangle. " << endl;
	
	double input = 0; // Creates a variable for user input
	cout << "Input a value for x " << endl;
	cin >> input; // Gets input from the user
	Rec->setX(input); // Takes the input from the user set up the "x" variable in the class fuction

	cout << "Input a value for y " << endl;
	cin >> input; // Get input from the user
	Rec->setY(input); // Takes the input from the user set up the "y" variable in the class fuction

	cout << "Input a value for the width " << endl;
	cin >> input; // Get input from the user
	Rec->setWidth(input); // Takes the input from the user set up the "width" variable in the class fuction

	cout << "Input a value for the height " << endl;
	cin >> input; // Get input from the user
	Rec->setHeight(input); // Takes the input from the user set up the "height" variable in the class fuction

	double X = Rec->getX(); // Creates a varibale that will be equal to the variable "x" in the Rectangle2D class
	double Y = Rec->getY(); // Creates a varibale that will be equal to the variable "y" in the Rectangle2D class
	double WIDTH = Rec->getWidth(); // Creates a varibale that will be equal to the variable "width" in the Rectangle2D class
	double HEIGHT = Rec->getHeight(); // Creates a varibale that will be equal to the variable "height" in the Rectangle2D class

	Rec->Create2DRectangle(X, Y, WIDTH, HEIGHT); // Calls a function that will take the above values and create a rectangle from them
	cout << "The area of the rectangle that you made is: " << Rec->getArea() << endl; // Returns the area of the rectangle that the user amde
	cout << "The perimeter of the rectangle that you made is: " << Rec->getPerimeter() << endl; // Returns the perimeter of the rectangle that the user made

	int pointX = 0; // Creates a variable for coordinate x
 	int pointY = 0; // Creates a variable for coordinate y
	cout << "Input coordinates (x, y) to see if it is within the rectangle that you made. " << endl;
	cin >> pointX >> pointY; // Get input from the user

	cout << "Are the coordinates (" << pointX << ", " << pointY << ") within the rectangle that you made? " 
		<< Rec->contains(pointX, pointY) << endl; // returns whether of not the coordinates that the user inputted are within teh rectangle that they made

	cout << "Is the rectangle you made contained within the test sqaure? " << Rec->getContains() << endl; // Returns whether or not the rectangle that the user made is completely within the test rectangle
	cout << "Does your rectangle overlap the test rectangle? " << Rec->getOverlaps() << endl; // Returns whether or not the rectangle that the user made overlaps the test rectangle


	return 0;
}