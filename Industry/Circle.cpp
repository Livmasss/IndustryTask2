#pragma once
#ifndef _HEADER_Circle
#define _HEADER_Circle
#include <cmath>

class Circle {
private:
	float radius;
	float x_centre;
	float y_centre;
public:
	Circle(float r, float x, float y) {
		x_centre = x;
		y_centre = y;
		radius = r;
	}
	void set_circle(float r, float x, float y) {
		x_centre = x;
		y_centre = y;
		radius = r;
	}
	float square() {
		return 3.14 * radius * radius;
	}
	bool triangle_around(float a, float b, float c);
};

#endif