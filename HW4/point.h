#pragma once
#include "vec3.h";
class point
{
public:
	float x, y, z;
	point(float,float,float);
	point(const point&);
	point();
	point operator+(const vec3&) const;
	point operator-(const vec3&) const;
	point& operator=(const point&);
	vec3 minus(const point&) const;



private:

};

