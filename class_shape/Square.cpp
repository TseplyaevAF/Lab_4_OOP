#include "Square.h"

Square::Square() {
}

Square::~Square() {
}

void Square::set_side(float side1) {
	if (side1 > 0)
	this->side = side1;
}

float Square::get_side() {
	return this->side;
}

float Square::Area() {
	return side * side;
}

float Square::Perimeter()
{
	return 4 * side;
}