#include "normal.h"
#include "cmath"
normal::normal(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}
normal normal::operator+ (const normal& nor) const {
	//Need to be normalized after operations (Be careful for 0 vector)
	normal result(nor.x+x,nor.y+y,nor.z+z);
	return result.normalize();

}
normal normal::operator- (const normal& nor) const {
	//Need to be normalized after operations (Be careful for 0 vector)
	normal result(nor.x - x, nor.y - y, nor.z - z);
	return result.normalize();
}
normal normal::operator+ (const vec3& nor) const {
	//Need to be normalized after operations (Be careful for 0 vector)
	normal result(nor.x + x, nor.y + y, nor.z + z);
	return result.normalize();

}
normal normal::operator- (const vec3& nor) const {
	//Need to be normalized after operations (Be careful for 0 vector)
	normal result(nor.x - x, nor.y - y, nor.z - z);
	return result.normalize();
}

normal normal::normalize() const {
	float length = x*x + y*y + z*z;
	length = pow(length, 0.5);
	if (length == 0) {
		normal result(0, 0, 0);
		return result;
	}
	normal result(x / length, y / length, z / length);
	return result;
}