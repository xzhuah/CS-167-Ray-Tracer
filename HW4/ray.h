#pragma once
#include "point.h"
#include "vec3.h"

class ray
{
public:
	point source;
	vec3 dir;
	float t_min, t_max;
	ray(point,vec3,float,float);

	point calcPosi(float) const;

private:

};

