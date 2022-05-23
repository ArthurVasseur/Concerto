//
// Created by arthur on 22/05/22.
//

#include "math/Transform.hpp"

void Concerto::Math::Transform::translate(float x, float y, float z)
{
	Location.X() += x;
	Location.Y() += y;
	Location.Z() += z;
}

void Concerto::Math::Transform::translate(const Concerto::Math::Vector3f& vec)
{
	translate(vec.X(), vec.Y(), vec.Z());
}