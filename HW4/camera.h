#pragma once

#include "point.h"
#include "Vec3.h"
#include "ray.h"
#include <cmath>
class camera
{
public:
	point posi;
	Vec3 camera_front;//-W
	Vec3 camera_right;//U
	Vec3 camera_up;//V
	
	float fov;

	camera();
	camera(point & posi, point& lookat, Vec3& up, float fov) {
		this->posi = posi;

		Vec3 w(posi.minus(lookat));
		w.normalize();
		camera_front = w.negative();
		Vec3 u = up.cross(w);
		u.normalize();
		camera_right = u;
		camera_up = w.cross(u);

		
		this->fov = fov;
	}
	ray genRay(int i, int j, int height,int width,float t_min, float t_max) {
		point source(this->posi);
		float alpha = tan(fov / 2)*(j - width / 2) / (width / 2);
		float blta= tan(fov / 2)*(height/2 -i) / (height / 2);
		Vec3 direction_ray = this->camera_front + this->camera_right*alpha + this->camera_up*blta;
		direction_ray.normalize();
		return ray(source,direction_ray,t_min,t_max);
	}
	~camera();

private:

};

camera::camera()
{
}

camera::~camera()
{
}