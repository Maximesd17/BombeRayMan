#pragma once

#include "raylib.h"

#include "encapsulation/Camera.hpp"
#include "encapsulation/Vector2.hpp"
#include "encapsulation/Vector3.hpp"

#include <iostream>

class BRMDrawer
{
private:
public:
    BRMDrawer();
    static void clearBackground(Color color);
    static void begin();
    static void end();
    static void begin3D(BRMCamera camera);
    static void end3D();
    static void grid(int slices, int spacing);
    static void rectangle(BRMVector2 position, BRMVector2 size, Color color);
    static void cube(BRMVector3 position, BRMVector3 size, Color color);
    static void cubeWires(BRMVector3 position, BRMVector3 size, Color color);
    static void sphere(BRMVector3 position, float radius, Color color);
    static void fps(BRMVector2 position);
    static void text(std::string text, BRMVector2 position, int size, Color color);

    ~BRMDrawer();
};
