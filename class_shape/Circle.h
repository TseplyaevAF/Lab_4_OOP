#pragma once
#include "Shape.h"

const double PI = 3.141592653589793238463;

// Класс Окружность
class Circle :
	public Shape
{
	float r; // радиус

public:
	Circle();
	~Circle();
	void set_r(float r1); // задание радиуса
	float get_r(); // получение радиуса
	float Area() override;
	float Perimeter() override;
	float Diameter();// Диаметр

};

