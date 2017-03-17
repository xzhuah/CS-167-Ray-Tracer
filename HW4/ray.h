#pragma once
#include "point.h"
#include "Vec3.h"

class ray
{
public:
	point source;
	Vec3 dir;
	float t_min, t_max;
	ray() {
		t_min = 0;
		t_max = 0;
	}
	ray(point source, Vec3 direction, float tmin, float tmax) {
		this->source = source;
		this->dir = direction;
		this->t_min = tmin;
		this->t_max = tmax;
	}

	point calcPosi(float t) const {
		if (t<t_max&&t>t_min) {
			point result(this->source + dir*t);
			return result;
		}
		else {
			point result(0, 0, 0);
			return result;
		}
	}

private:

};