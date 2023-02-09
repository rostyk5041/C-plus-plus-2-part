#include "Student.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;
void Student::Init(int yos, Student::Man man)
{
	setYos(yos);
	setMan(man);
}
void Student::Display() const
{
	cout << toString();
}
void Student::Read()
{
	Student::Man m;
	cout << endl;
	cout << "Man = ? " << endl;
	m.Read(); // використовуємо делегування
	cout << "year of study = ? "; cin >> yos;
	Init(yos, m);
}

string Student::toString() const
{
	stringstream sout;
	sout << "Man=" << endl;
	sout << man.toString() << endl;
	sout << "year of study = " << yos << "year" << endl;
	return sout.str();
}

void Student::Man::Init(string name, int age, string male, double weight)
{
	setName(name);
	setAge(age);
	setMale(male);
	setWeight(weight);
}
void Student::Man::Display() const
{
	cout << toString();
}
void Student::Man::Read()
{
	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "age = ? "; cin >> age;
	cout << "male/famale = ? "; cin >> male;
	cout << "weight = ? "; cin >> weight;
	Init(name, age, male, weight);
}

string Student::Man::toString() const
{
	stringstream sout;
	sout << "name = " << name << endl
		<< "age = " << age << "years" << endl
		<< "male/famale = " << male << endl
		<< "weight = " << weight << "kg" << endl;
	return sout.str();
}

void Student::changeYos()
{
	cout << "Change year to: \n ";
	cin >> yos;
}

void Student::incYos()
{
	int Inc;
	cout << "Add year: \n ";
	cin >> Inc;
	yos += Inc;
}

void Student::Man::changeName()
{
	cout << "Change name to: \n ";
	cin >> name;
}

void Student::Man::changeAge()
{
	cout << "Change age to: \n ";
	cin >> age;
}

void Student::Man::changeWeight()
{
	cout << "Change weight to: \n ";
	cin >> weight;
}