#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

int main()
{
	setlocale(0, "RUS");

	Square a;
	a.set_side(4); // сторона квадрата = 4
	float S = a.Area(); // Площадь квадрата
	S = a.Perimeter(); // Периметр квадрата

	Circle b;
	b.set_r(3.2); // r = 3.2
	S = b.Area(); // Площадь окружности
	float L = b.Perimeter(); // Длина окружности
	float D = b.Diameter();

	Triangle c;
	try {
		c.set_sides(3, 4, 5);
		S = c.Area();
		cout << "S = " << S << endl;
	}
	catch (short e){
		if (e == Triangle::NotTriangle)
			cout << "Треугольник не существует!" << endl;
	}

	return 0;
}
