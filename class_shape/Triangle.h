#pragma once
#include "Shape.h"
#include <math.h>

// Класс Треугольник
class Triangle :
	public Shape
{
	float a, b, c; // стороны треугольника
	void set_a(float a1);
	void set_b(float b1);
	void set_c(float c1);
public:
	Triangle(); // к. по умолчанию
	Triangle(float a1, float b1, float c1); // к. с параметрами
	~Triangle();

	static const short NotTriangle = -1;

	void set_sides(float a1, float b1, float c1);

	float get_a();
	float get_b();
	float get_c();
	float area() override;
	float perimeter() override;
};

