#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

// This function will take the name of the course and the a size from the user and implement them to "courseName" and "capacity"
// This ffunction will make an array fro students with its size (capacity) determined by the user 
Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0; // Defaults teh number of students enrolled to 0
	this->courseName = courseName; // takes user input to establish the value of "courseName"
	this->capacity = capacity; // Takes user input to establish the value of "capacity"
	students = new string[capacity]; // creates an array fro students with its size equal to "capacity"
}

// This deconstuctor will delete the student array
Course::~Course()
{
	delete [] students; // Deletes the array
}

// This function will return the name of the course
const string Course::getCourseName()
{
	return courseName; // Returns the "courseName" variable
}

// This function will increase the size of the array if the user tries to exceed it
void Course::increaseClassSize()
{
	int NewSize = capacity * 2; // This doubles the size of the array
	string * ptrArray = new string[NewSize]; // Creates a new array with double the size of the original

	// This loop is to save the values that are stored in the original array to the new array
	for (int i = 0; i < capacity; i++)
	{
		ptrArray[i] = students[i]; // Saves the values in the original array to the new array
	}

	capacity = NewSize; // This makes "capacity" equal to "NewSize", whih effectively doubles its value
	delete[]students; //deletes the student array
	students = ptrArray; // Restores the student array with doubled the size and all of the values that were saved in the new array
}

// This function will add a student's name to the "student" array 
void Course::addStudent(const string& name)
{
	if (numberOfStudents >= capacity) // This executes if the the user tries to add another student when the array is full
	{
		increaseClassSize(); // Calls the the function that will increase the size of the array
	}
	students[numberOfStudents] = name; // Saves the name that the user inputs to the "student" array 
	numberOfStudents++; // Increases the number of students that are enrolled in the course
}

// This function will remove a student, of teh user's choice, from the array
void Course::dropStudent(const string& name)
{
	int stopPoint = 0; // This variable will keep track of where the name that the user inputs is equal to the name that is stored in the array

	// Thsi loop will find where in the array the name that the user inputs is equal to a name that is in the array
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i] == name) // Executesif the name that the user is equal to a value that is stored in the array
		{
			stopPoint = i; // Makes the variable "stopPoint" equal to "i" (which represents the spot n the array where teh array and the name that the user inputted are equal to each other)
			break; // Breaks the loop
		}
	}

	// This loop will shift the the values of the array, starting at "spotPoint", by making the current spot in the array equal to the value that is stored in the next, consecutive spot
	// This will cuase the value in the array that is at "spotPoint" to be covered up by the next array value
	for (int i = stopPoint; i < numberOfStudents - 1; i++)
	{
		students[i] = students[i + 1]; // Makes the current spot in the array equal to the value that is stored in the spot after it
	}
	numberOfStudents--; // decreases the number of students enrolled in the class
}

// This function will return the array that contains the names of the students
const string* Course::getStudent()
{
	return students; // Returns the "student" array
}

// This function will return the number of students that are enrolled in the course
const int Course::getNumberOfStudents()
{
	return numberOfStudents; // Returns the numer of students that are enrolled in the course
}

// This function will delete the student array of the values that are contained in it
void Course::clear()
{
	delete[] students; // Deletes the student array
}


