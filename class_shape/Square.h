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
	Square(float side1);
	~Square();
	void set_side(float side1); // ������� �������
	float get_side() const; // ��������� �������
	float area() override;
	float perimeter() override;
};

