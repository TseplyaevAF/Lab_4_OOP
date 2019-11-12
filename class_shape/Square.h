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
	~Square();
	void set_side(float side1); // Задание стороны
	float get_side(); // Получение стороны
	float Area() override;
	float Perimeter() override;
};

