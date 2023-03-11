#pragma once
#include "Cone.h"

class SlicedCone : public Cone {
public:
	float R;

	SlicedCone();
	SlicedCone(float x_, float y_, float z_);
	SlicedCone(float x_, float y_, float z_, float r1_, float r2_, float h_);

	void setCone(float x_, float y_, float z_, float r1_, float r2_, float h_);
	float square();
	float volume();
    bool equals(SlicedCone *cone);

	friend ostream &operator<<(ostream& stream, SlicedCone sCone);
	friend istream &operator>>(istream& stream, SlicedCone &sCone);

};

