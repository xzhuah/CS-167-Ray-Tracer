#pragma once

class matrix44 {
public:
	float matrix[4][4];
	matrix44(const float[4][4]);

	static matrix44 createMatrix44(float rotateX, float rotateY, float rotateZ, float tran_x, float tran_y, float tran_z, float scale_x, float scale_y, float scale_z);
	static matrix44 createScaleMatrix44(float scale_x, float scale_y, float scale_z);

	static matrix44 createRotateMatrix44(float rotateX, float rotateY, float rotateZ);
	static matrix44 createTranslateMatrix44(float tran_x, float tran_y, float tran_z);

	void normalize();

	matrix44 operator*(const matrix44&) const;

	//matrix44 inverse() const;
	matrix44 transposition() const;

};