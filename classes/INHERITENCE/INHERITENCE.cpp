#include <iostream>
#include <string>
using namespace std;

	class Human{ //GRANDPARENT

		private:
		string fName; 
		int age;
		string lName;
	public:
		Human()
		{
			cout << "Human Constructor is running" << endl;
			fName = "";
			lName = ""; 
			age = 0;

		}
		Human(string _fname, string _lname, int _age)
		{
			setAll(_fname, _lname, _age);

		}
		void display() const
		{
			cout << fName << " " << lName << " " << age << endl;;
		}

		~Human()
		{
			cout << "Human Destrcutor" << endl;
		}
		void setAll(string _fname, string _lname, int _age)
		{
			fName = _fname;
			lName = _lname;
			age = _age;

		}
	};

			class Student : public Human{ // CHILD OF HUMAN && PARENT OF GradStudent	
				int noCredits; 
				float gpa;

			public:
				Student():Human()
				{
					cout << "Student Constructor is running" << endl;
					noCredits = 0;
					gpa = 0;
				}
				Student(string _fname, string _lname, int _age,
					int _noCredits, float _gpa):Human(_fname,_lname,_age) 
												//DONT PUT DATA TYPE :Human(string _fname,string _lname,int _age)
				{
					noCredits = _noCredits;
					gpa = _gpa;


				}
				void display() const
				{
					Human::display();
					cout << noCredits << " " << gpa << endl;

				}

				~Student()
				{
					cout << "Student Destrcutor" << endl;
				}
				void setAll(string _fname, string _lname, int _age,
					int _noCredits, float _gpa) 
					
				{
					Human::setAll(_fname, _lname, _age);
					noCredits = _noCredits;
					gpa = _gpa;


				}
			};

					class GradStudent :public Student { //CHILD OF STUDENT CHILD OF HUMAN
						string advisor, thesis;

					public:
						GradStudent():Student()
						{
							cout << "Grad Student Constructor is running" << endl;
							advisor = "";
							thesis = "";
						}
						
						
						
						
						GradStudent(string _fname, string _lname, int _age,
									int _noCredits, float _gpa, string _thesis, 
									string _advisor) : Student(_fname, _lname, _age, _noCredits, _gpa)
						{
							thesis = _thesis;
							advisor = _advisor;
						}

						void display() const
						{
							Student::display();
							cout << thesis << " " << advisor << " " << endl;

						}
						~GradStudent()
						{
							cout << "Grad Student Destrcutor" << endl;
						}
						void setAll(string _fname, string _lname, int _age,
							int _noCredits, float _gpa, string _thesis,
							string _advisor) 
						{
							Student::setAll(_fname, _lname, _age, _noCredits, _gpa);
							thesis = _thesis;
							advisor = _advisor;
						}

					};



int main()
{

	GradStudent gs1("Bob", "Smith", 18, 25, 3.5, "Optimization", "Reza Sarraf");
	GradStudent gs2;

	gs1.Human::display();
	gs1.display();
	system("Pause");
	return 0;
}

