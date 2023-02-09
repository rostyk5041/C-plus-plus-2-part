#pragma once
#include <string>
using namespace std;

class DigitString
{
private:
	char x[100];
public:

	void setX(char value);
	int getX() const;

	void Init(char);
	void Read();
	void Display() const;
	string toString() const;

	bool Less(DigitString a, DigitString b);
	bool Great(DigitString a, DigitString b);
	bool Equal(DigitString a, DigitString b);

	int Sum(DigitString a, DigitString b);
	double Sub(DigitString a, DigitString b);
	double Mult(DigitString a, DigitString b);
	double Div(DigitString a, DigitString b);
	double Ost(DigitString a, DigitString b);
};

