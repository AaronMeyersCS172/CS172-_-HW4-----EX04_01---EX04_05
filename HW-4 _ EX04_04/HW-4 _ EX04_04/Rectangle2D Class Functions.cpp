#include <iostream>
#include <iomanip>
#include "Rectangle2D.h"
using namespace std;

// This function sets the value of "x" to that of the user's input
const void Rectangle2D::setX(double X)
{
	x = X;
}

// This function sets the value of "y" to that of the user's input
const void Rectangle2D::setY(double Y)
{
	y = Y;
}

// This function returns the value of "x"
const double Rectangle2D::getX()
{
	return x;
}

// This function returns the value of "y"
const double Rectangle2D::getY()
{
	return y;
}

// Sets the value of "height" to the user's input
const void Rectangle2D::setHeight(double Height)
{
	height = Height;
}

// Sets the value of "height" to the user's input
const void Rectangle2D::setWidth(double Width)
{
	width = Width;
}

// This function returns the value of "height"
const double Rectangle2D::getHeight()
{
	return height;
}

// This function returns the value of "width"
const double Rectangle2D::getWidth()
{
	return width;
}


// This function returns the value of "testX"
const double Rectangle2D::getTestX()
{
	return testX;
}

// This function returns the value of "testY"
const double Rectangle2D::getTestY()
{
	return testY;
}

// This function returns the value of "testHeight"
const double Rectangle2D::getTestHeight()
{
	return testHeight;
}

// This function returns the value of "testWidth"
const double Rectangle2D::getTestWidth()
{
	return testWidth;
}


// This function sets default values for x, y, width, and height
Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}

// 
void Rectangle2D::Create2DRectangle(double X, double Y, double Width, double Height)
{
	const int Gap = 2; // This variable will be used to create spaces 
	double WIDTH = Width; // Saves value of from the user to "WIDTH"
	double HEIGHT = Height; // saves the valeu from the user to "HEIGHT"

	// This loop will output one "-" until the value of "top" is equal to "WIDTH"
	for (int top = 0; top < WIDTH; top++)
	{
		cout << "-" << setw(Gap); // Outputs a "-" and adds a empty space in front of it
	}
	cout << endl; // moves the cursor to the next line when the loop is finished
	cout << setw(Gap * -1); // Moves the cursor back to offset the leftover gap from teh loop above
	
	// Declares a variable that will make a space for the sides of the rectangle
	// NOTE: The size of WideGap is purely for cosmetic purpose to offset the size differencial between "-" amd "|" 
	const double WideGap = Gap * WIDTH;

	// This loop will output a "|" and add a space that is equal to (WIDTH * 2) and putut another "|"
	// The loop will end when the value of "sides" is equal to "HEIGHT"
	for (int sides = 0; sides < HEIGHT; sides++)
	{
		cout << "|" << setw(WideGap) << " |" << endl; // outputs the sides of the rectangle with a space between them
	}

	// This loop will output one "-" until the value of "top" is equal to "WIDTH"
	for (int bottom = 0; bottom < WIDTH; bottom++)
	{
		cout << "-" << setw(Gap); // Outputs a "-" and adds a empty space in front of it
	}
	cout << endl; // Outputs a empty line

	return;
}

// This function will calculate and return the area of the user created rectangle
const double Rectangle2D::getArea()
{
	return (width * height);
}

// This function will calculate and return the perimeter of the user created rectangle
const double Rectangle2D::getPerimeter()
{
	return ((width * 2) + (height * 2));
}

// This function will determine whether or not the coordinates that the user inputs are within the rectangle that they made
const double Rectangle2D::contains(double X, double Y)
{
	Contains = false; // Sets the default boolian value to false

	Rectangle2D D;
	Rectangle2D *in = NULL;
	in = &D; // Makes a pointer

	// This executes if the value of "X" is outisde of the right and left boundaries of the user rectangle
	if (X <= (in->getX() - (in->getWidth() / 2)) || X >= (in->getX() + (in->getWidth() / 2)))
	{
		Contains = true; // Turns the boolian value to true
	}

	// this executes if the value of "Y" is outside of the top or bottom boundaries of the user rectangle
	if (Y <= (in->getY() - (in->getHeight() / 2)) || Y >= (in->getY() + (in->getHeight() / 2)))
	{
		Contains = true; // Turns the boolian value to true
	}

	return Contains; // Returns the boolian value back to the user
}


const void Rectangle2D::contains(Rectangle2D &r)
{
	Within = false; // Sets the default boolian value to false

	// Executes if the dimensions of the user's rectangle are smaller than the dimensions of the test rectangle for when "x" is less than "testX"
	if (r.getX() < r.getTestX() && r.getWidth() < r.getTestWidth() && r.getHeight() < r.getTestHeight())
	{
		Within = true; // Sets the boolian value to true
	}

	// Executes if the dimensions of the user's rectangle are smaller than the dimensions of the test rectangle for when "x" is greater than "testX"
	if (r.getX() > r.getTestX() && r.getWidth() < r.getTestWidth() && r.getHeight() < r.getTestHeight())
	{
		Within = true; // Sets the boolian value to true
	}

	// Executes if the dimensions of the user's rectangle are smaller than the dimensions of the test rectangle for when "y" is less than "testY"
	if (r.getY() < r.getTestY() && r.getWidth() < r.getTestWidth() && r.getHeight() < r.getTestHeight())
	{
		Within = true; // Sets the boolian value to true
	}

	// Executes if the dimensions of the user's rectangle are smaller than the dimensions of the test rectangle for when "y" is greater than "testY"
	if (r.getY() > r.getTestY() && r.getWidth() < r.getTestWidth() && r.getHeight() < r.getTestHeight())
	{
		Within = true; // Sets the boolian value to true
	}

	return;
}

// This function will test to see if the rectangle that the user made overlaps with the test rectangle
const void Rectangle2D::overlaps(Rectangle2D &r)
{
	Overlaps = true; // Sets the defalut boolian value to true
	double distanceX = 0; // Creates a variable that will keep track of the distance between "x" and "testX"
	double distanceY = 0; // Creates a variable that will keep track of the distance between "y" and "testY"

	// Executes if the value of "x" is greater than "testX"
	if (r.getX() > r.getTestX())
	{
		distanceX = r.getX() - r.getTestX(); //Calculates the distance between "x" and "testX"
	}

	// Executes if the value of "x" is less than "testX"
	else
	{
		distanceX = r.getTestX() - r.getX(); //Calculates the distance between "x" and "testX"
	}
	
	// Executes if the value of "y" is greater than "testY"
	if (r.getY() > r.getTestY())
	{
		distanceY = r.getY() - r.getTestY(); //Calculates the distance between "y" and "testY"
	}

	// Executes if the value of "y" is less than "testY"
	else
	{
		distanceY = r.getTestY() - r.getY(); //Calculates the distance between "y" and "testY"
	}


	// This executes if the distnace between "x" and "testX" is greater than the sum of the halves of the rectangle's widths
	if (distanceX > ((r.getWidth() / 2) + (r.getTestWidth() / 2)))
	{
		Overlaps = false; // Sets the boolain value to false
	}

	// This executes if the distnace between "y" and "testY" is greater than the sum of the halves of the rectangle's heights
	if (distanceY > ((r.getHeight() / 2) + (r.getTestHeight() / 2)))
	{
		Overlaps = false; // Sets the boolian value to false
	}

	return;	
}

// This function returns the value of "Within"
const bool Rectangle2D::getContains()
{
	return Within;
}

// This function returns the value of "Overlaps"
const bool Rectangle2D::getOverlaps()
{
	return Overlaps;
}