#pragma once

// ����� �������������� ������
class Shape
{
protected:
	float x, y; // ���������� �����

public:
	//Point A;
	Shape();
	~Shape();
	float virtual Area() = 0; // ������ �������		
	float virtual Perimeter() = 0; // ������ ���������
};

