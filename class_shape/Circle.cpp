#include "Circle.h"

Circle::Circle() {

}

Circle::~Circle() {

}
void Circle::set_r(float r1) { // ������� �������
	if (r1 > 0) this->r = r1;
}

float Circle::get_r() { // ��������� �������
	return this->r;
}

float Circle::Area() {

	return PI * r * r;
}

float Circle::Perimeter() {
	return 2 * PI * r;
}


float Circle::Diameter() {
	return r * r;
}