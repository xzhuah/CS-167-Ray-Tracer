#pragma once
class color
{
public:
	float r, g, b;
	color(float, float ,float);
	color operator+(const color&) const;
	color operator-(const color&) const;
	color operator*(float) const;
	color operator/(float) const;


private:

};

