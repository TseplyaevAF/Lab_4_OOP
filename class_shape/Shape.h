#pragma once

// Класс Геометрическая фигура
class Shape
{
protected:
	float x, y; // координаты точки

public:
	//Point A;
	Shape();
	~Shape();
	float virtual Area() = 0; // Расчет площади		
	float virtual Perimeter() = 0; // Расчет периметра
};

