#include "Cone.h"
#include <iostream>
#include <cmath>

using namespace std;
Cone::Cone() {
	x = 0; y = 0; z = 0;
	r = 1;
	h = 1;
}
Cone::Cone(float x_, float y_, float z_) {
	x = x_; y = y_; z = z_;
	r = 1;
	h = 1;
}
Cone::Cone(float x_, float y_, float z_, float r_, float h_) {
	x = x_; y = y_; z = z_;
	r = r_;
	h = h_;
}

ostream &operator<<(ostream &stream, Cone cone) {
	cout << "Координаты конуса: " << cone.x << ", " << cone.y << ", " << cone.z << endl;
	cout << "Радиус конуса: " << cone.r << endl;
	cout << "Высота конуса: " << cone.h;

	return stream;
}
void Cone::setCone(float x_, float y_, float z_, float r_, float h_) {
	x = x_; y = y_; z = z_;
	r = r_;
	h = h_;
}
float Cone::square() {
	float foundSq = pi * r*r;
	float l = sqrt(r*r + h*h);
	float sideSq = pi * r * l;
	
	return foundSq + sideSq;
}
float Cone::volume() {
	float v = (pi * r*r * h) / 3;
	return v;
}
bool Cone::equals(Cone *cone) {
    if (this->r != cone->r) return false;
    if (this->h != cone->h) return false;
    return true;
}