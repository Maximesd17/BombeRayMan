#pragma once

#include "raylib.h"

class BRMVector2
{
private:
    float _x;
    float _y;
public:
    BRMVector2();
    BRMVector2(float x, float y);
    void setX(float x);
    void setY(float y);
    float getX() const;
    float getY() const;
    ~BRMVector2();
};
