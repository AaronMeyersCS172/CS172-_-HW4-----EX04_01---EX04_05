#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle2D
{
private:
	double x; // This variable is for coordinate x for the center of the user's rectangle 
	double y; // This variable is for coordinate y for the center of the user's rectangle 
	double height; // This variable is for the height of the user's rectangle 
	double width; // This variable is for the width of the user's rectangle 
	bool Contains; // This variable is for whether or not coordinates that the user inputs is within the user's rectangle 
	bool Within; // This variable is for whether of not the user's rectangle is within the test rectangle
	bool Overlaps; // This variable is for whether or not the user's rectangle overlaps the test rectangle 
	
	// These variables are related to the test rectangle that will be usedto test the rectangle that the user will make
	double testX = 10; // Establishes the x coordinate for the center of the test rectangle
	double testY = 10; // Establishes the y coordinate for the center of the test rectangle
	double testHeight = 6; // Establishes the height of the test rectangle
	double testWidth = 6; // Establishes the width of the test rectangle

public:
	const void setX(double); // Takes input from the user and makes it equal to "x"
	const void setY(double); // Takes input from the user and makes it equal to "y"
	const double getX(); // Return the value of "x"
	const double getY(); // Return the value of "y"
	const void setHeight(double); // Takes input from the user and makes it equal to "height"
	const void setWidth(double); // Takes input from the user and makes it equal to "width"
	const double getHeight(); // Return the value of "height"
	const double getWidth(); // Return the value of "width"

	const double getTestX(); // Return the value of "testX"
	const double getTestY(); // Return the value of "testY"
	const double getTestHeight(); // Return the value of "testHeight"
	const double getTestWidth(); // Return the value of "testWidth"



	Rectangle2D(); // contains default variables
	void Create2DRectangle(double, double, double, double); // Takes input from the user and creates a rectangle from it
	const double getArea(); // Returns the area of the user's rectangle
	const double getPerimeter(); // Returns the perimeter of the user's rectangle
	const double contains(double, double); // Takes input from the user (x, y) and tests whether or not it is within the rectangle that the user made
	const void contains(Rectangle2D &r); // Tests whether of not the rectangle made by the user is within the test rectangle
	const void overlaps(Rectangle2D &r); // Tests whether or not the rectangle made by the user overlaps the test rectangle
	const bool getContains(); // Returns the boolian value of "Within"
	const bool getOverlaps(); // Returns the boolian value of "Overlaps"
};
