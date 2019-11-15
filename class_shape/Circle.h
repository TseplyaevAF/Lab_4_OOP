#pragma once
#include "Shape.h"

const double PI = 3.141592653589793238463;

// Класс Окружность
class Circle :
	public Shape
{
	float r; // радиус

public:
	Circle(); // к. по умолчанию
	Circle(float r1); // к. с параметром
	~Circle();
	void set_r(float r1); // задание радиуса
	float get_r() const; // получение радиуса
	float area() override;
	float perimeter() override;
	float diameter() const;// Диаметр

};

