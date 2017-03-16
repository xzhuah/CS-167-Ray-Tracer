#pragma once

#include "point.h"
#include "vec3.h"
class camera
{
public:
	point posi;
	vec3 dirction;
	vec3 right;
	vec3 down;
	camera();
	camera(point &,vec3&, vec3&, vec3&);
	~camera();

private:

};

camera::camera()
{
}

camera::~camera()
{
}