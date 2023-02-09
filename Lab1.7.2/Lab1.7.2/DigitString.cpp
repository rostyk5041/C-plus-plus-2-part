#include "DigitString.h"
#include <iostream>
#include <string>
#include <sstream> 
using namespace std;
int DigitString::getX() const
{
	int n = 0;
	n = atoi(x);
	return n;
}
void DigitString::setX(char value)
{
	if (*x > 0)
		*x = value;
	else
		*x = 0;
}
void DigitString::Init(char xx)
{
	xx = *x;
}

void DigitString::Read()
{
	cout << " whole part =  ";	cin >> x;
	Init(*x);
}

void DigitString::Display() const
{
	cout << toString();
}

string DigitString::toString() const
{
	stringstream sout;
	sout << "whole part = " << getX() << endl;
	return sout.str();
}

bool DigitString::Less(DigitString a, DigitString b)
{
	return (a.getX() < b.getX());
}

bool DigitString::Great(DigitString a, DigitString b)
{
	return (a.getX() > b.getX());
}
bool DigitString::Equal(DigitString a, DigitString b)
{
	return (a.getX() == b.getX());
}

int DigitString::Sum(DigitString a, DigitString b)
{
	return a.getX() + b.getX();
}
double DigitString::Sub(DigitString a, DigitString b)
{	return a.getX() - b.getX();}
double DigitString::Mult(DigitString a, DigitString b)
{	return a.getX() * b.getX();}
double DigitString::Div(DigitString a, DigitString b)
{	return a.getX() /1.* b.getX(); }
double DigitString::Ost(DigitString a, DigitString b)
{	return a.getX() % b.getX(); }