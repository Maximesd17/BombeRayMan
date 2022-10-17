#pragma once

#include "raylib.h"

class BRMVector3
{
private:
    float _x;
    float _y;
    float _z;
public:
    BRMVector3();
    BRMVector3(float x, float y, float z);
    void setX(float x);
    void setY(float y);
    void setZ(float z);
    float getX() const;
    float getY() const;
    float getZ() const;
    Vector3 getBase() const;
    ~BRMVector3();
};
