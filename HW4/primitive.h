#pragma once
#include "ray.h"
#include "intersection.h"
class primitive {
public:
	primitive() {

	}
	virtual intersection findIntersection(ray& theray) {

	}
	~primitive() {

	}
};