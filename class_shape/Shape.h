#pragma once

// ����� �������������� ������
class Shape
{

public:
	Shape();
	~Shape();
	float virtual area() = 0; // ������ �������		
	float virtual perimeter() = 0; // ������ ���������
};

