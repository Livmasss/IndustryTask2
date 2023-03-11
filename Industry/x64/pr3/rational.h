#pragma once
class rational
{
private:
	int a, b;
public:
	rational();
	rational(int a, int b);
	void set(int a, int b);
	void show();
	rational operator+ (rational r);
	friend rational operator- (rational r1, rational r2);
	void operator++ ();
	bool operator== (rational r);
	bool operator> (rational r);
	void operator= (rational r);
};