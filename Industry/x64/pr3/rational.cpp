#include "rational.h"
#include <iostream>

using namespace std;
rational::rational() {}
rational::rational(int a_, int b_) {
	this->set(a_, b_);
}
void rational::set(int a_, int b_) {
	if (b == 0) {
		cout << "Знаменатель не может быть равен 0" << endl;
		a = 0;
		b = 1;
		return;
	}
	a = a_;
	b = b_;

	for (int i = min(a, b); i > 1; i--) {
		while (a % i == 0 && b % i == 0) {
			a = a / i;
			b = b / i;
		}
	}

	while (a > b) {
		a -= b;
	}
}
void rational::show() {
	cout << a << "/" << b << endl;
}
rational rational::operator+(rational r) {
	rational result;
	if (r.b == this->b) {
		result = rational(r.a + this->a, r.b);
	}
	else {
		result = rational(r.a*this->b + r.b * this->a, r.b*this->b);
	}
	return result;
}
void rational::operator++() {
	this->a++;
}
bool rational::operator==(rational r) {
	int x = this->a * r.b;
	int y = r.a * this->b;
	return x == y;
}
bool rational::operator> (rational r) {
	int x = this->a * r.b;
	int y = r.a * this->b;
	return x > y;
}
void rational::operator=(rational r) {
	this->a = r.a;
	this->b = r.b;
}