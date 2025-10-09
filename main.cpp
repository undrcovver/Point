#include<iostream>
#include "Point.h"
using namespace std;

int main()
{
	Point::PrintCount();
	Point a(1, 2), b(3, 4);

	Point d = a + b;
	// Point d = a.Sum(b);
	d.Print();

	Point d1 = a * b;
	d1.Print();

	Point d2 = a - b;
	d2.Print();

	Point d3 = a / b;
	d3.Print();

	d = a + 10;
	d.Print();

	if (a>b)
	{
		cout << "a>b\n";
	}
	else if (a < b)
	{
		cout << "a<b\n";
	}
	else if (a == b)
	{
		cout << "a<b\n";
	}
	else if (a != b)
	{
		cout << "a<b\n";
	}
	else if (a >= b)
	{
		cout << "a<b\n";
	}
	else if (a <= b)
	{
		cout << "a<b\n";
	}



}