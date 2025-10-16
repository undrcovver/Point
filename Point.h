#pragma once
class Point
{ 
	int x;
	int y;
	static int count;
public:
	Point();
	Point(int a, int b);
	void Init(int a, int b);
	void Init(); 
	void Print();

	void SetX(int a);
	void SetY(int a);

	int GetX();
	int GetY();

	static void PrintCount();

	Point operator+(Point& b);
	Point operator*(Point& b);
	Point operator-(Point& b);
	Point operator/(Point& b);

	Point operator+(int a);
	bool operator>(Point& b);
	bool operator<(Point& b);
	bool operator==(Point& b);
	bool operator!=(Point& b);
	bool operator>=(Point& b);
	bool operator<=(Point& b);

	Point& operator++();
	Point& operator--();
	
};

