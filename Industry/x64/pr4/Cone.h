#pragma once
#include <iostream>

using namespace std;
class Cone
{
protected:
	const float pi = 3.14159265f;

public:
	float x, y, z;
	float r, h;

	Cone();
	Cone(float x_, float y_, float z_);
	Cone(float x_, float y_, float z_, float r_, float h_);

	void setCone(float x_, float y_, float z_, float r_, float h_);
	friend ostream &operator<<(ostream &stream, Cone cone);

    virtual float square();

    virtual float volume();
    bool equals(Cone *cone);
};

