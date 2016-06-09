///////////////////////////////////////////////
// Aaron Meyers
// 6/7/16
// Homework 4: EX04_05
//////////////////////////////////////////////

#include <iostream>
#include <string>
#include "Course.h"
using namespace std;

int main()
{
	int ClassSIZE = 2; // Establishes teh size of the class
	Course course1("Data Structures", ClassSIZE); // Creates a course with a name and the size of the class

	course1.addStudent("Nathan Drake"); // Adds a student
	course1.addStudent("Aiden Pierce"); // Adds a student
	
	// Shows the user how many students are currently enrolled in the class
	cout << "The number of students currently enrolled in " << course1.getCourseName() << " is " << course1.getNumberOfStudents() << endl;
	cout << "You decide that you are going to enroll more students." << endl;
	
	// The addition of these students will cause the function that increases the class size to execute, which will make room for these students to fit in the array
	course1.addStudent("Lara Croft"); // Adds a student
	course1.addStudent("Faith Conners"); // Adds a student

	// Shows the user how many students are currently enrolled in the class
	cout << "The number of students currently enrolled in the course is " << course1.getNumberOfStudents() << endl;
	cout << "\nThe students who are enrolled are: " << endl;

	const string* ClassStudents{ course1.getStudent() }; // Creates a new array that has the values that are in the class behaviors
	
	// This loop will ouput the names of the students that are stored in the array
	for (int i = 0; i < course1.getNumberOfStudents(); i++)
	{
		if (i == course1.getNumberOfStudents() - 1) // This executes if this is the last time the loop will run before it ends
		{
			cout << "and " << ClassStudents[i]; // Outputs the value in the array
		}
		cout << ClassStudents[i] << ", "; // Outputs the values in the array
	}

	cout << endl; // Empty line

	cout << "You decide that you are going to drop one student. " << endl;
	course1.dropStudent("Faith Conners"); // This executes the function where one student in the array will be removed from the array entirely

	cout << "The students who are still enrolled are: ";

	// This loop will ouput the names of the students that are stored in the array
	for (int i = 0; i < course1.getNumberOfStudents(); i++) 
	{
		cout << ClassStudents[i] << ", "; // Outputs the value in the array
	}
	
	cout << endl; // Empty line

	return 0;
}
