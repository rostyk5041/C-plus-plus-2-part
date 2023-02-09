#include <iostream>
#include "Goods.h"
using namespace std;
Goods makeGoods(double x, int y)
{
	Goods nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to Init (second)" << endl;
	return nn;
}
int main()
{
	Goods n;
	n.Init(5.70, 22);
	n.Display();
	n.cost();
	Goods k;
	k.Read();
	k.Display();
	k.cost();
	Goods i;
	double a;
	int b;
	cout << "enter the price: ";
	cin >> a;
	cout << "enter the number: ";
	cin >> b;
	i = makeGoods(a, b);
	i.cost();
	return 0;
}