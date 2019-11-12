#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Circle.h"

int main()
{
	Square a;
	a.set_side(4); // сторона квадрата = 4
	float S = a.Area(); // Площадь квадрата
	S = a.Perimeter(); // Периметр квадрата

	Circle b;
	b.set_r(3.2); // r = 3.2
	S = b.Area(); // Площадь окружности
	float L = b.Perimeter(); // Длина окружности

	return 0;
}
