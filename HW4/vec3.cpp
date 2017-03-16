#include "vec3.h"
#include <cmath>
vec3::vec3(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
vec3::vec3() {
	this->x = x;
	this->y = y;
	this->z = z;
}

vec3 vec3::operator+ (const vec3& vec) const{
	vec3 result(x + vec.x, y + vec.y, z + vec.z);
	return result;
}
vec3 vec3::operator- (const vec3& vec) const{
	vec3 result(x - vec.x, y - vec.y, z - vec.z);
	return result;
}
vec3 vec3::operator* (float index) const {
	vec3 result(x*index,y*index,z*index);
	return result;
}
vec3 vec3::operator/ (float index) const{
	vec3 result(x/index, y/index, z/index);
	return result;
}

vec3& vec3::operator=(const vec3& other) {
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
	return *this;
}

vec3 vec3::normalize() {
	float length = x*x + y*y + z*z;
	length = pow(length, 0.5);
	if (length == 0) {
		vec3 result(0,0,0);
		return result;
	}
	vec3 result(x/length,y/length,z/length);
	return result;
}

vec3 vec3::cross(const vec3& other) {
	return vec3(this->y*other.z-this->z*other.y,this->z*other.x-this->x*other.z,this->x*other.y-this->y*other.x);
}
