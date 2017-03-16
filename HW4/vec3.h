#pragma once
class vec3 {
public:
	float x;
	float y;
	float z;

	vec3(float, float, float);
	vec3();

	vec3 operator+ (const vec3&) const;
	vec3 operator- (const vec3&) const;
	vec3 operator* (const float) const;
	vec3 operator/ (const float) const;

	vec3& operator=(const vec3&);

	vec3 normalize();
	vec3 cross( const vec3&);

	
};