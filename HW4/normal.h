#pragma once
#include "Vec3.h"
class normal {
public:
	float x, y, z;
	normal() {
		x = 0;
		y = 0; 
		z = 0;
	}
	normal(float x, float y, float z) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->normalize();
	}
	normal operator+ (const normal& nor) const {
		//Need to be normalized after operations (Be careful for 0 vector)
		normal result(nor.x + x, nor.y + y, nor.z + z);
		return result.normalize();

	};
	normal operator- (const normal& nor) const {
		//Need to be normalized after operations (Be careful for 0 vector)
		normal result(nor.x - x, nor.y - y, nor.z - z);
		return result.normalize();
	};
	normal operator+ (const Vec3& nor) const {
		//Need to be normalized after operations (Be careful for 0 vector)
		normal result(nor.x + x, nor.y + y, nor.z + z);
		return result.normalize();

	};
	normal operator- (const Vec3& nor) const {
		//Need to be normalized after operations (Be careful for 0 vector)
		normal result(nor.x - x, nor.y - y, nor.z - z);
		return result.normalize();
	};

	normal& operator= (const Vec3& other) {
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
		this->normalize();
		return *this;
	}
	normal& operator= (const normal&  other) {
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;
		return *this;
	}

	float getlength() {
		float length = x*x + y*y + z*z;
		length = pow(length, 0.5);
		return length;
	}

	normal normalize() {
		float length = this->getlength();
		if (length == 0) {
			this->x = 0;
			this->y = 0;
			this->z = 0;
			Vec3 result(0, 0, 0);
			*this = result;
		}
		this->x = x / length;
		this->y = y / length;
		this->z = z / length;
		return *this;
	}


private:


};
