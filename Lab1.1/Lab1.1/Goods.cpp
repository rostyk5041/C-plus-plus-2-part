#include "Goods.h"
#include <iostream>
using namespace std;
void Goods::SetFirst(double value)
{	first = value;	}
void Goods::SetSecond(int value)
{	second = value;	}
bool Goods::Init(double x, int y)
{
	first = x;
	if (y >= 0)
	{
		second = y;
		return true;
	}
	else
	{
		second = 0;
		return false;
	}
}
void Goods::Display() const
{	cout << "price:  " << first << "number:  " << second << endl;	}
void Goods::Read()
{
	double x;
	int y;
	cout << "enter the price: ";
	cin >> x;
	do 
	{
		cout << "enter the number: ";
		cin >> y;
	} 
	while (!Init(x, y));
}
void Goods::cost()
{
	double price = first*second;
	cout << "cost = " <<price<< endl;
}