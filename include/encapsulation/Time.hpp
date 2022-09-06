#pragma once

#include "raylib.h"

class BRMTime
{
private:
    int _fps;
public:
    BRMTime(int fps);
    BRMTime();
    void setMaxFPS(int fps);
    int getMaxFPS() const;
    float getFrameTime() const;
    double getEllapsedTime() const;
    ~BRMTime();
};
