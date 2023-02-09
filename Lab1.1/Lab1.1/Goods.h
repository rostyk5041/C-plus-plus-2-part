#pragma once
class Goods
{
private:
	double first;
	int second;
public:
	double GetFirst() const { return first; }
	unsigned int GetSecond() const { return second; }
	void SetFirst(double value);
	void SetSecond(int value);
	bool Init(double x, int y);
	void Display() const;
	void Read();
	void cost();
};