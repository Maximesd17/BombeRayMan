#include "encapsulation/Vector3.hpp"

BRMVector3::BRMVector3() {}

BRMVector3::BRMVector3(float x, float y, float z)
{
    _x = x;
    _y = y;
    _z = z;
}

void BRMVector3::setX(float x)
{
    _x = x;
}

void BRMVector3::setY(float y)
{
    _y = y;
}

void BRMVector3::setZ(float z)
{
    _z = z;
}

float BRMVector3::getX() const
{
    return _x;
}

float BRMVector3::getY() const
{
    return _y;
}

float BRMVector3::getZ() const
{
    return _z;
}

Vector3 BRMVector3::getBase() const
{
    Vector3 v = (Vector3){_x, _y, _z};
    return v;
}

BRMVector3::~BRMVector3() {}
