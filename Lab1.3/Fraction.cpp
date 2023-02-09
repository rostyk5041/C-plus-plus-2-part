#include "Fraction.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream> 
using namespace std;

bool Fraction::Init(int x,double y)
{
	if (y >= 0 && y <= 99)
		return true;
	else
	{
		y = 0;
		return false;
	}
}

void Fraction::Read()
{
	cout << " whole part =  "; cin >> x;
	do {cout << " fraction part =  ";	cin >> y;}
	while (!Init(x, y));
}

void Fraction::Display() const
{
	cout << toString();
}

Fraction Sub(Fraction a, Fraction b)
{
	{
		Fraction z;
		z.x = 0;
		z.y = 0;
		z.sign = 1;
		{
			z.sign = 1;
			if (a.x >= b.x && a.y >= b.y)
			{
				z.x = a.x - b.x;
				z.y = a.y - b.y;

			}
			if (a.x < b.x && a.y < b.y)
			{
				z.x = (-1) * (b.x - a.x);
				z.y = b.y - a.y;

			}
			if (a.x > b.x && a.y < b.y && a.y < 10 && b.y < 10)
			{
				z.x = a.x - b.x - 1;
				z.y = 10 - b.y + a.y;

			}
			if (a.x > b.x && a.y < b.y && a.y >= 10 && b.y >= 10)
			{
				z.x = a.x - b.x - 1;
				z.y = 100 - b.y - a.y;

			}
			if (a.x < b.x && a.y > b.y && a.y < 10 && b.y < 10)
			{
				z.x = -1 * (b.x - a.x - 1);
				z.y = 10 - a.y + b.y;
				z.sign = -1;

			}
			if (a.x < b.x && a.y > b.y && a.y >= 10 && b.y >= 10)
			{
				z.x = -1 * (b.x - a.y - 10);
				z.y = 100 - a.y + b.y;
				z.sign = -1;
			}
			if (a.x == b.x && a.y < b.y)
			{
				z.x = -1 * (a.x - b.x);
				z.y = (b.y - a.y);
				z.sign = -1;
			}
		}

		return z;
	}	
}


bool Less(Fraction a, Fraction b)
{
	return (a.x < b.x) || (a.x == b.x && a.y < b.y);
}
bool NLess(Fraction a, Fraction b){ return !Less(a, b); }

bool Great(Fraction a, Fraction b)
{	
	return (a.x > b.x )|| (a.x == b.x && a.y > b.y);
}
bool NGreat(Fraction a, Fraction b) { return !Great(a, b); }

bool Equal(Fraction a, Fraction b)
{	
	return a.x == b.x && a.y == b.y;
}
bool NEqual(Fraction a, Fraction b) { return !Equal(a, b); }

string Fraction::toString() const
{
	stringstream sout;
	sout << "whole part = " << x << endl
		 << "fraction part = " << y << endl;
	return sout.str();
}

