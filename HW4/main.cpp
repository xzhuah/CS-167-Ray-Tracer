#include "scene.h"
#include "pixel_image.h"
#include "pixel.h"
int main() {

	int height = 300;
	int width = 180;

	pixel_image myimage(width, height);//to out put


	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			pixel p(0,0,0);
			
			myimage.image[i*width + j] = p;
		}
	}
	myimage.outputImage("testing.png");
}