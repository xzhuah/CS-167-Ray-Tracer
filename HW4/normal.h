#include "vec3.h"
class normal {
public:
	float x, y, z;
	normal(float, float, float);
	normal operator+ (const normal&) const;//Need to be normalized after operations (Be careful for 0 vector)
	normal operator- (const normal&) const;//Need to be normalized after operations (Be careful for 0 vector)
	normal operator+ (const vec3&) const;//Need to be normalized after operations (Be careful for 0 vector)
	normal operator- (const vec3&) const;//Need to be normalized after operations (Be careful for 0 vector)

private:
	normal normalize() const;


};