#include <iostream>
#include <string>
#include "student.h"

using namespace std;
int main() 
{
	Student st1, st2, st3, st4("Alice"),st5("Sarah",18), st6("Ray", 19, 3.45);


	cout << "-----------\n";

	Student myStudents[10] = { Student("Ray", 19),
							   Student("Stephanie", 19, 3.99)
															};
	


	myStudents[0].display();
	myStudents[1].display();


	
	system("pause");
	return 0;
}



Student::Student():Student(" ", 0, 0)//Default constructor 
{
	
}

Student::Student(string _fname):Student(_fname, 0, 0)
{
	/*fname = _fname;*/
}
Student::Student(string _fname, int _age):Student(_fname, _age , 0)
{
	/*fname = _fname;
	setAge(_age);*/
}
Student::Student(string _fname, int _age, float _gpa)
{
	fname = _fname;
	setAge(_age);
	setGpa(_gpa);

	
}