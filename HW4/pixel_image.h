#pragma once
#include "pixel.h"
#include "FreeImage.h"
class pixel_image {
public:
	int width;
	int height;
	pixel *image;

	pixel_image(int width, int height) {
		this->width = width;
		this->height = height;
		image = new pixel[width*height];
	}

	void outputImage(const char* filename) {
		FreeImage_Initialise();
		
		int pix = width * height;
		BYTE *pixels = new BYTE[3 * pix];
		for (int i = 0,j=0; i <  pix,j<pix*3; i++,j+=3) {
			pixels[j] = image[i].b;
			pixels[j + 1] = image[i].g;
			pixels[j + 2] = image[i].r;
		}
		FIBITMAP *img = FreeImage_ConvertFromRawBits(pixels, width, height, width * 3, 24, 0xFF0000, 0x00FF00, 0x0000FF, false);
		FreeImage_Save(FIF_PNG, img, filename, 0);
		FreeImage_DeInitialise();
	}

};