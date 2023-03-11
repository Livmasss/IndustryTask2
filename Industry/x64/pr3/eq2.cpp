#include <iostream>
#include "eq2.h"
#include <cmath>

using namespace std;
	void eq2::set(double a1, double b1, double c1) {
		a = a1;
		b = b1;
		c = c1;
	}
	eq2::eq2() {}
	eq2::eq2(double a1, double b1, double c1) {
		a = a1;
		b = b1;
		c = c1;
		D = b * b - 4 * a * c;
	}
	double eq2::find_Y(double x1) {
		double y = a * x1 * x1 + b * x1 + c;
		return y;
	}
	double eq2::find_X() {
		if (D < 0) {
			cout << "No solutions";
			return 0;
		}
		if (D == 0) { cout << "Корень один" << endl; }
		else { cout << "Корней 2" << endl; }
		double sol = (-b + sqrt(D)) / (2 * a);
		return sol;
	}
	double eq2::getA() { return a; }
	double eq2::getB() { return b; }
	double eq2::getC() { return c; }