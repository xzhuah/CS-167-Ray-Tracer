#include "point.h"
point::point(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
point::point(const point& p) {
	this->x = p.x;
	this->y = p.y;
	this->z = p.z;
}
point::point() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

point point::operator+(const vec3& poi) const {
	point result(x + poi.x, y + poi.y, z + poi.z);
	return result;
}

point point::operator-(const vec3& poi) const {
	point result(x - poi.x, y - poi.y, z - poi.z);
	return result;
}

vec3 point::minus(const point& poi) const {
	vec3 result(x-poi.x,y-poi.y,z-poi.z);
	return result;
}

point& point::operator=(const point& other) {
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
	return *this;
}