#pragma once
#include "primitive.h"
#include "point.h"
#include "intersection.h"
#include <cmath>
class sphere :public primitive {
public:
	point center;
	float radius;
	sphere(point& center, float radius) {
		this->center = center;
		this->radius = radius;
	}
	virtual intersection findIntersection(ray& theray) {
		Vec3 Poc = theray.source.minus(this->center);
		float a = theray.dir.dot(theray.dir);
		float b = 2 * theray.dir.dot(Poc);
		float c = Poc.dot(Poc) - this->radius*this->radius;

		float delta = b*b - 4 * a*c;

		if (delta < 0) {
			//Didn't intersection
			return intersection();
		}
		else {
			float r1 = (-b + pow(delta, 0.5)) / 2 / a;
			float r2 = (-b - pow(delta, 0.5)) / 2 / a;
			if (r2 > 0) {
				//pick the smaller
				if (r1 != r2) {
					//not tangent

					point inter_point=theray.calcPosi(r1);
					Vec3 normal = inter_point.minus(this->center);
				}
				else {
					//tangent
					point inter_point = theray.calcPosi(r1);
					Vec3 normal = inter_point.minus(this->center);

				}
			}
			else if (r1 > 0) {
				//ray source inside the sphere
				point inter_point = theray.calcPosi(r1);
				Vec3 normal = this->center.minus(inter_point);
			}
			else {
				//no intersect
			}
		}
	}
};