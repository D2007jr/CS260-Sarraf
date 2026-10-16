#include <iostream>
#include "Student.h"


void Student::setFname(string _fname)
{
	fname = _fname;

}
void Student::setAge(int _age)
{
	if (_age > 0 && _age < 130)
	{
		age = _age;


	}
	else
	{

		age = 0;
	}
}
void Student::setGpa(float _gpa)
{
	if (_gpa > 0 && _gpa < 4)
	{
		gpa = _gpa;
	}
	else 
	{
		gpa = 0;
	}
}
void Student::setAll(string _fname, int _age, float _gpa)
{

	fname = _fname;
	setAge(_age);
	setGpa(_gpa);
}

string Student::getFname() const
{

	return fname;
}
int Student::getAge() const
{

	return age;
}
float Student::getGpa() const
{

	return gpa;
}
void Student::display() const
{
	cout << "First Name: " << fname << endl;
	cout << "Age: " << age << endl;;
	cout << "GPA: " << gpa << endl;
	cout << endl;
}