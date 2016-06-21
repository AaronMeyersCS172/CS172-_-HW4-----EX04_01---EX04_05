////////////////////////////////////////////////////
// Aaron Meyers
// 6/6/16
// Homework 4: EX04_03
///////////////////////////////////////////////////

#include <iostream>
using namespace std;

int FindSmallestElement(const int *ELements, int size); // Function prototype

int main()
{
	const int ISIZE = 8; // Establishes the size of the array
	int Elements[ISIZE] = { 1, 2, 4, 5, 10, 100, 2, -22 }; // Creates an array filled with predetermined values 

	// Calls the function that will find the smallest value that is within the array and saves that value to "smallest"
	int smallest = FindSmallestElement(Elements, ISIZE);

	cout << "The smallest element in the array is " << smallest << endl; // Outputs the smallest value in the array

	return 0;
}

// This function will find the smallest value that is stored in the array
int FindSmallestElement(const int *Elements, int size)
{
	int NewSize = size; // Creates a variable that is equal to the size of the array
	int *Array = new int[NewSize]; // Creates an array that is the smae size as the original array

//PT -- This is unnecessary. You don't need to copy the data over to a new array. Just walk through the array that was given.
//PT -- 18/20

	// This loop will take the values that are in the original array and save them to the new array
	for (int i = 0; i < NewSize; i++)
	{
		Array[i] = Elements[i]; // saves the value in the original array to the new array
	}


	int Smallest = Array[1]; // Defaults the smallest value to be equal to that of the value in the first spot in the array

	// This loop will go through the values that are in the array and check to see which is the smallest 
	for (int i = 0; i < NewSize; i++)
	{
		if (Array[i] < Smallest) // Executes if the current array value is smaller than the current value of "smallest"
		{
			Smallest = Array[i]; // Saves the current value of the array to "smallest"
		}
	}

	delete []Array; // Deletes teh array to prevent memeory leak
	return Smallest; // Returns the value of "smallest"
}
