#include "ray.h"

point source;
vec3 dir;
float t_min, t_max;
ray::ray(point source, vec3 direction, float tmin, float tmax) {
	this->source = source;
	this->dir = direction;
	this->t_min = tmin;
	this->t_max = tmax;
}

point ray::calcPosi(float t) const {
	if (t<t_max&&t>t_min) {
		point result(this->source + dir*t);
		return result;
	}
	else {
		point result(0, 0, 0);
		return result;
	}
}