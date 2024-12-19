#pragma once

#include "ArrayFunc.cpp"
#include <array>

using namespace std;

typedef array<float, 2> fPoint;

class BasicShape
{

protected:

	fPoint center;

	fPoint tVelocity;

	float mass;

public:

	fPoint getCenter( ) const { return center; };

	float getMass( ) const { return mass; }

	void translate(fPoint tVector) { center += tVector; }

};

