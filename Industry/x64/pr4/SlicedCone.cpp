#include "SlicedCone.h"
#include <iostream>
#include <cmath>

using namespace std;
SlicedCone::SlicedCone() {
	x = 0; y = 0; z = 0;
	r = 1; R = 1;
	h = 1;
}
SlicedCone::SlicedCone(float x_, float y_, float z_) {
	x = x_; y = y_; z = z_;
	r = 1; R = 1;
	h = 1;
}
SlicedCone::SlicedCone(float x_, float y_, float z_, float r1_, float r2_, float h_) {
	x = x_; y = y_; z = z_;
	r = min(r1_, r2_); R = max(r1_, r2_);
	h = h_;
}

float SlicedCone::square() {
	float k = R - r;
	float l = sqrt(k * k + h * h);
	float sideSq = pi * (r + R) * l;
	float foundSq = pi * (r * r + R * R);
	return sideSq + foundSq;
}
float SlicedCone::volume() {
	float v = pi * h * (r * r + r * R + R * R) / 3;
	return v;
}
void SlicedCone::setCone(float x_, float y_, float z_, float r1_, float r2_, float h_) {
	x = x_; y = y_; z = z_;
	r = min(r1_, r2_); R = max(r1_, r2_);
	h = h_;
}
bool SlicedCone::equals(SlicedCone *cone) {
    bool f = this->Cone::equals(cone);
    return f && (this->R == cone->R);
}

ostream& operator<<(ostream& stream, SlicedCone sCone) {
	cout << "Координаты усеченного конуса: " << sCone.x << ", " << sCone.y << ", " << sCone.z << endl;
	cout << "Радиусы: " << sCone.R << ", " << sCone.r << endl;
	cout << "Высота: " << sCone.h;

	return stream;
}
istream& operator>>(istream& stream, SlicedCone &sCone) {
	cout << "Введите координаты усеченного конуса: " << endl;
	cin >> sCone.x >> sCone.y >> sCone.z;

	cout << "Введите радиусы усеченного конуса:: " << endl;
	float r1_, r2_;
	cin >> r1_ >> r2_;
	sCone.R = max(r1_, r2_);
	sCone.r = min(r1_, r2_);

	cout << "Введите высоту усеченного конуса: " << endl;
	cin >> sCone.h;

	return stream;
}