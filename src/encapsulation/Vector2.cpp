#include "encapsulation/Vector2.hpp"

BRMVector2::BRMVector2() {}

BRMVector2::BRMVector2(float x, float y)
{
    _x = x;
    _y = y;
}

void BRMVector2::setX(float x)
{
    _x = x;
}

void BRMVector2::setY(float y)
{
    _y = y;
}

float BRMVector2::getX() const
{
    return _x;
}

float BRMVector2::getY() const
{
    return _y;
}

BRMVector2::~BRMVector2() {}
