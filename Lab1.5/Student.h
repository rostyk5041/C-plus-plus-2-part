#pragma once
#include <string>
#include "Man.h"
using namespace std;

class Student
{
private:
	int yos;//year of study
	Man man;
public:
	int getYos() const { return yos; }
	Man getMan() const { return man; }
	void setYos(int yos) { if (yos > 0)this->yos = yos; else yos = 0; }
	void setMan(Man man) { this->man = man; }

	void changeYos();
	void incYos();

	void Init(int yos, Man man);
	void Display() const;
	void Read();
	string toString() const;
};

