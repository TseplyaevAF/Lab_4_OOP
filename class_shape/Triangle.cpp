#include "Triangle.h"

void Triangle::set_a(float a1) {
	if (a1 > 0) this->a = a1;
}

void Triangle::set_b(float b1) {
	if (b1 > 0) this->b = b1;
}

void Triangle::set_c(float c1) {
	if (c1 > 0) this->c = c1;
}

void Triangle::set_sides(float a1, float b1, float c1) {
	if ((a1 + b1 > c1) && (a1 + c1 > b1) && (b1 + c1 > a1)) {
		set_a(a1);
		set_b(b1);
		set_c(c1);
	}
	else throw NotTriangle;
}

float Triangle::get_a() {
	return a;
}

float Triangle::get_b() {
	return b;
}

float Triangle::get_c() {
	return c;
}

float Triangle::Area() {
	// Если треугольник прямоугольный
	if (pow(c, 2) == pow(a, 2) + pow(b, 2))
		return (a * b) / 2;
	// Если треугольник равнобедренный
	if ((a == b) || (b == c) || (c == a)) {
		float h = sqrt(pow(a,2) - (pow(b,2)/4));
		return (b * h) / 2;
	}
	// Если треугольник равносторонний
	if ((a == b) && (b == c) && (c == a))
		return pow(a, 2) * sqrt(3) / 4;
}

float Triangle::Perimeter() {
	return a + b + c;
}