#pragma once
#include <string>
using namespace std;
class Student
{
private:
	int yos;
public:
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
		void setAge(int age) { int value; }
		void setMale(string male) { string male; }
		void setWeight(double weight) { this->weight = weight; }

		void changeName();
		void changeAge();
		void changeWeight();

		void Init(string name, int age, string male, double weight);
		void Display() const;
		void Read();
		string toString() const;
	};
private:
	Man man;
public:
	int getYos() const { return yos; }
	Man getMan() const { return man; }
	void setYos(int yos) { this->yos = yos; }
	void setMan(Man man) { this->man = man; }

	void changeYos();
	void incYos();

	void Init(int yos, Man man);
	void Display() const;
	void Read();
	string toString() const;
};

