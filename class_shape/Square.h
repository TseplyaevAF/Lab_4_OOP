#pragma once
#include "Shape.h"

// Класс Квадрат
class Square :
	public Shape
{
private:
	float side; // сторона

public:
	Square();
	Square(float side1);
	~Square();
	void set_side(float side1); // Задание стороны
	float get_side() const; // Получение стороны
	float area() override;
	float perimeter() override;
};

