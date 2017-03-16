#pragma once
#include "point.h"
#include "color.h"

class triangle {
public:
	point a, b, c;
	color mcolor;
	triangle(const point& a, const point& b, const point& c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
};