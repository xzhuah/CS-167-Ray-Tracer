#pragma once
#include "matrix44.h"
#include "vec3.h"
#include "normal.h"
#include "point.h"
#include "ray.h"
class transformation {
public:
	matrix44 m, mivet;
	transformation(matrix44&);

	vec3 doTransform(const vec3&) const;
	normal doTransform(const normal&) const;
	point doTransform(const point&) const;
	ray doTransform(const ray&) const;
};