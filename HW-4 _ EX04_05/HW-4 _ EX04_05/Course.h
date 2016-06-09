#include <iostream>
#include <string>
using namespace std;

class Course
{
private:
	string courseName; // The name of the course
	string* students; // The name of the students
	int numberOfStudents; // The number of students enrolled in teh course
	int capacity; // The capacity of the array for the students

public:
	Course(const string& courseName, int capacity); // Gets the name of the course and the array size from main
	~Course(); // A deconstructor that will delete the student array
	const string getCourseName(); // Returns the name of teh course
	void increaseClassSize(); // Increases the size of the array to add more students
	void addStudent(const string& name); // Adds a student to teh array
	void dropStudent(const string& name); // Removes a student from the array
	const string* getStudent(); // Returns the student array
	const int getNumberOfStudents(); // Returns the number of students enrolled in the course
	void clear(); // Deletes the student array
};