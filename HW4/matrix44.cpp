#include "matrix44.h"

matrix44::matrix44(const float the_matrix[4][4]){
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			this->matrix[i][j] = the_matrix[i][j];
		}
	}
};

matrix44 matrix44::createMatrix44(float rotateX, float rotateY, float rotateZ, float tran_x, float tran_y, float tran_z, float scale_x, float scale_y, float scale_z) {
	matrix44 scale = matrix44::createScaleMatrix44(scale_x,scale_y,scale_z);
	matrix44 rotate = matrix44::createRotateMatrix44(rotateX , rotateY, rotateZ);
	matrix44 tran = matrix44::createTranslateMatrix44(tran_x,tran_y,tran_z);
	matrix44 result = rotate*scale;
	result = result*tran;
	return result;
}
matrix44  matrix44::createScaleMatrix44(float scale_x, float scale_y, float scale_z) {
	float scale[4][4] = {
		{scale_x,	0,	0,	0},
		{0,	scale_y,	0,	0},
		{0,	0,	scale_z,	0},
		{0,	0,	0,	1}
	};
	matrix44 result(scale);
	return result;

}

matrix44 matrix44::createRotateMatrix44(float rotateX, float rotateY, float rotateZ) {
	float temp[4][4];
	matrix44 result(temp);
	return result;
}
matrix44 matrix44::createTranslateMatrix44(float tran_x, float tran_y, float tran_z) {
	float scale[4][4] = {
		{ 0,	0,	0,	tran_x },
		{ 0,	0,	0,	tran_y },
		{ 0,	0,	0,	tran_z },
		{ 0,	0,	0,	1 }
	};
	matrix44 result(scale);
	return result;
}
void matrix44::normalize() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			this->matrix[i][j] /= this->matrix[3][3];
		}
	}
}
matrix44 matrix44::operator*(const matrix44& other) const {
	float result[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			float ele = 0;
			for (int k = 0; k < 4; k++) {
				ele += this->matrix[i][k] * other.matrix[k][j];
			}
			result[i][j] = ele;
		}
	}
	matrix44 final(result);
	return final;
}

//matrix44 matrix44::inverse() const {

//}
matrix44 matrix44::transposition() const {
	float result[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
		
			
			result[i][j] = this->matrix[j][i];
		}
	}
	matrix44 final(result);
	return final;
}