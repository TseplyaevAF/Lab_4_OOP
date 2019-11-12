#include <iostream>
#include "Shape.h"
#include "Square.h"

int main()
{
	Square a;
	a.set_side(4);
	float S = a.Area();

	return 0;
}
