#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

using namespace std;

int main()
{
	setlocale(0, "RUS");

	Square a(5);
	a.set_side(4); // сторона квадрата = 4
	float S = a.area(); // Площадь квадрата
	S = a.perimeter(); // Периметр квадрата

	Circle b;
	b.set_r(3.2); // r = 3.2
	S = b.area(); // Площадь окружности
	float L = b.perimeter(); // Длина окружности
	float D = b.diameter(); // Диаметр окружности

	try {
		Triangle c(2, 3, 5);
		c.set_sides(3, 4, 5);
		S = c.area();
		cout << "S = " << S << endl;
	}
	catch (short e){
		if (e == Triangle::NotTriangle)
			cout << "Треугольник не существует!" << endl;
	}

	return 0;
}
