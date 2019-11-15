#include "Circle.h"

Circle::Circle() {

}

Circle::~Circle() {

}

Circle::Circle(float r1) { // �. � ����������
	if (r1 > 0) r = r1;
}

void Circle::set_r(float r1) { // ������� �������
	if (r1 > 0) 
		r = r1;
}

float Circle::get_r() const { // ��������� �������
	return r;
}

float Circle::area() {

	return PI * r * r;
}

float Circle::perimeter() {
	return 2 * PI * r;
}


float Circle::diameter() const {
	return r * r;
}