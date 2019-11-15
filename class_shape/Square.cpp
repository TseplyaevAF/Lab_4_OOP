#include "Square.h"

Square::Square() {
}

Square::~Square() {
}

Square::Square(float side1) {
	if (side1 > 0)
		side = side1;
}

void Square::set_side(float side1) {
	if (side1 > 0)
	side = side1;
}

float Square::get_side() const {
	return side;
}

float Square::area() {
	return side * side;
}

float Square::perimeter()
{
	return 4 * side;
}