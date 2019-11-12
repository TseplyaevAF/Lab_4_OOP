#pragma once
#include "Shape.h"

// ����� �������
class Square :
	public Shape
{
private:
	float side; // �������

public:
	Square();
	~Square();
	void set_side(float side1); // ������� �������
	float get_side(); // ��������� �������
	float Area() override;
	float Perimeter() override;
};

