/////////////////////////////////////////
// Aaron Meyers
// 6/6/16
// Homework 4: EX04_02
////////////////////////////////////////

#include <iostream>
using namespace std;

int *doubleCapacity(const int *list, int size); // Function Prototype

int main()
{
	const int ISIZE = 5; // Establishes a size for the array
	int list[ISIZE]; // Declares an array with the above size

	int input = 0; // Declares a variable for user input

	// This loop is for letting data from the user and storing it into the array
	for (int i = 0; i < ISIZE; i++)
	{
		cout << "Input a number. ";
		cin >> input; // Get data from the user

		list[i] = input; // Stores user input into the array
	}

	cout << "The array is now full. You can no longer input any numbers. "
		<< "The size " << ISIZE << " is now going to double.\n" << endl; // Outputs the result to the user 


	int *array = doubleCapacity(list, (ISIZE)); // Creates a new array that will have double the size that it had

	cout << "\n" << endl; // Creates empty lines

	// This loop will output all of the values that are stored in the array
	cout << "The numbers that are in the array are ";
	for (int i = 0; i < (ISIZE * 2); i++)
	{
		cout << array[i] << " "; // Outputs the current value in the array
	}

	cout << "\n" << endl; // Outputs empty lines

	cout << "The size of the array is now " << (ISIZE*2) << "." << endl; // Outputs the new size of the array

	return 0;
}


// This function will double the size of teh array to create more room
int * doubleCapacity(const int *list, int size)
{
	int NewSize = size * 2; // Creates a new size variable that is double that of the orginal array size
	int * ptrArray = new int [NewSize]; // Creates a new array that has the new size variable: which is double the orginal size

	int input = 0; // Declares a variable for user input 

	// This loop will take the values that are in the orginal array and transfer them into the new array
	// The loop will end once the all of the original values have been saved to the first half of the spots in the array
	for (int i = 0; i < size; i++)
	{
		ptrArray[i] = list[i]; // Transfers the value that is in the original array to the new array
	}

	int Input = 0; // Declares a variable for user input

	// This loop will get data from the user to fill in the new/empty spots in the new array
	// The loop will end once the second half of the array spots have been filled
	for (int i = (NewSize / 2); i < NewSize; i++)
	{
		cout << "Input a number. ";
		cin >> input; // Get data from the user

		ptrArray[i] = input; // Saves user input to the array space
	}

	return ptrArray; // Returns the new array to "main"
	delete[] ptrArray; // Deletes teh new array to prevent memory leak
}