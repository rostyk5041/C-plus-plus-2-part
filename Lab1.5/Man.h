#pragma once
#include <string>
using namespace std;
class Man
{
private:
	string name;
	int age;
	string male;
	double weight;
public:
	string getName() const { return name; }
	int getAge() const { return age; }
	string getMale() const { return male; }
	double getWeight() const { return weight; }

	void setName(string name) { this->name = name; }
	void setAge(int age) { if (age > 0)this->age = age; else age = 0; }
	void setMale(string value) { male = value; }
	void setWeight(double weight) { if (weight < 0)this->weight = weight; else weight = 0; }

	void changeName();
	void changeAge();
	void changeWeight();

	void Init(string name, int age, string male, double weight);
	void Display() const;
	void Read();
	string toString() const;
};

