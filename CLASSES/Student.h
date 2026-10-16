#pragma once
#ifndef _STUDENT_
#define _STUDENT_
#include <string>
using namespace std;

class Student {
	string fname; // Atributes (Variable inside of a class)
	int age;
	float gpa;
public:
	//Methods (Functions that are in a class)
	//
	
	// Setters
	void setFname(string _fname); 
	void setAge(int _age);
	void setGpa(float _gpa);
	void setAll(string _fname, int _age, float _gpa);

	//Getters (Should have CONST. NEVER SEND ANYTHING INSIDE OF A GETTER)
	string getFname() const;
	int getAge() const;
	float getGpa() const;
	void display() const;


	Student(); //Default constructor (No value inside parenthesis)
	Student(string _fname);
	Student(string _fname, int _age);
	Student(string _fname, int _age, float _gpa);
};
#endif // !_STUDENT_
