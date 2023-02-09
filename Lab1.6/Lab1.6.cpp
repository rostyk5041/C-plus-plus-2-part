#include "Student.h"
#include <iostream>
using namespace std;
int main()
{
	Student s;
	s.Read();
	s.Display();
	cout << "___________________________" << endl;
	Student::Man m;
	m.changeName();
	m.changeAge();
	m.changeWeight();
	m.getMale();

	s.changeYos();
	s.incYos();
	s.Display();
	return 0;
}
