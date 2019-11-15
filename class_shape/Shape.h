#pragma once

// Класс Геометрическая фигура
class Shape
{

public:
	Shape();
	~Shape();
	float virtual area() = 0; // Расчет площади		
	float virtual perimeter() = 0; // Расчет периметра
};

