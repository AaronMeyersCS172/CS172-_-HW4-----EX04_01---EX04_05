///////////////////////////////////////////////
// Aaron Meyers
// 6/6/16
// CS172: Homework 4: EX04_01
//////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
	// Declasres a variable that will become an array
	int *x = NULL;

	cout << "How many numbers (max) do you want to input?" << endl;
	int count; // Declares a variable for user input
	cin >> count; // Get data from the user

	x = new int[count]; // Turns "x" into an array with its size established by user input


	int input = 0; // Declares a variable for user input

	// This loop is for the user to input values into the array until it is filled
	for (int i = 0; i < count; i++)
	{
		cout << "Input an number." << endl;
		cin >> input; // Get data from the user
		x[i] = input; // Stores user input into the array
	}


	int ave = 0; // Declares a variable for the average of the array

	// This array will take the values that are stored into the array and transfers them into "ave"
	// The loop will end when allof the values in the array have been transfered into "ave"
	for (int i = 0; i < count; i++)
	{
		ave += x[i]; // Transfers value in the array into "ave"
	}

	double FinalAverage = ave / count; // Calculates the average of the values in the array by how many values there were
	cout << "The overall average of the number that you have inputted is: " << FinalAverage << endl; // Outputs result to the user


	int OVER = 0; // Declares a variable for keeping track of how many variables are greater than the average value

	// This loop will go through the array and test the values on whether or not they are greater than "FinalAverage"
	// Everytime the loop finds a number that is greater than "FinalAverage", "OVER" is increased by one
	// The loop will end once it goes through all of the values in the array
	for (int i = 0; i < count; i++)
	{
		if (x[i] > FinalAverage) // Executes if the current array value is greater then "FinalAverage"
		{
			OVER++; // Increases "OVER" by one
		}
	}

	// Outputs the result to the user
	cout << "Of the numbers that you have inputted, " << OVER << " are greater than the average." << endl;

	delete[] x; // Deletes the array

	return 0;
}