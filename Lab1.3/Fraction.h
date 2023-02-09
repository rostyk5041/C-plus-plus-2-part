#pragma once
#include <string>
using namespace std;

class Fraction
{
private:
	int x;
	double y;
	int sign;
public:
	void setX(int value) { x = value; }
	void setY(double  value) { y = value; }
	double getX() const { return x; }
	double getY() const { return y; }

	friend Fraction Sub(Fraction a, Fraction b);
	friend bool Less(Fraction a, Fraction b);
	friend bool Great(Fraction a, Fraction b);
	friend bool Equal(Fraction a, Fraction b);
	friend bool NLess(Fraction a, Fraction b);
	friend bool NGreat(Fraction a, Fraction b);
	friend bool NEqual(Fraction a, Fraction b);

	bool Init(int, double);
	void Read();
	void Display() const;
	string toString() const;
};
