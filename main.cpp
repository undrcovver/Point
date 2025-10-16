#include<iostream>
#include "Point.h"
using namespace std;

// Point operator+ (int a, Point& b)
// {
//     Point res(a+b.GetX(), a+b.GetY());
//     return res;
// }
// Point operator--(Point & b) // --a
// {
// 	b.SetX(b.GetX() - 2);
// 	b.SetY(b.GetY() - 2);
// 	return b;
// }
// Point operator--(Point& b, int) // a--
// {
// 	Point temp(b.GetX(), b.GetY());
// 	b.SetX(b.GetX() - 2);
// 	b.SetY(b.GetY() - 2);
// 	return temp;
// }

Point operator-(int a, Point& b)
{
	Point res(a-b.GetX(), a-b.GetY());
	return res;
}

Point operator*(int a, Point& b)
{
	Point res(a*b.GetX(), a*b.GetY());
	return res;
}

Point operator/(int a, Point& b)
{
	Point res(a/b.GetX(), a/b.GetY());
	return res;
}

Point operator*(Point& b, int a)
{
    Point res(b.GetX() * a, b.GetY() * a);
    return res;
}

int main()
{
	Point::PrintCount();
	Point a(1, 2), b(3, 4);
	a.Print();

	// Point d = 10 + a;
	// d.Print();

	// Point d = a + b;
	// Point d = a.Sum(b);
	// d.Print();

	// Point d1 = a * b;
	// d1.Print();

	// Point d2 = a - b;
	// d2.Print();

	// Point d3 = a / b;
	// d3.Print();

	// d = a + 10;
	// d.Print();

	// if (a>b)
	// {
	// 	cout << "a>b\n";
	// }
	// else if (a < b)
	// {
	// 	cout << "a<b\n";
	// }
	// else if (a == b)
	// {
	// 	cout << "a==b\n";
	// }
	// else if (a != b)
	// {
	// 	cout << "a!=b\n";
	// }
	// else if (a >= b)
	// {
	// 	cout << "a>=b\n";
	// }
	// else if (a <= b)
	// {
	// 	cout << "a<=b\n";
	// }

	// Point c = ++a;
	// c.Print();
	// a.Print();

	// Point c = --a;
	// c.Print();
	// a.Print();

	// Реализовать следующие глобальные перегрузки
    Point a1 = 15 - a;
	Point a2 = 2 * a;
	Point a3 = 10/a;
	Point a4 = a*2;


}