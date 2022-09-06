#include "encapsulation/Time.hpp"

BRMTime::BRMTime() {}

BRMTime::BRMTime(int fps)
{
    _fps = fps;
    SetTargetFPS(_fps);
}

void BRMTime::setMaxFPS(int fps)
{
    _fps = fps;
    SetTargetFPS(_fps);
}

int BRMTime::getMaxFPS() const
{
    return _fps;
}

float BRMTime::getFrameTime() const
{
    return GetFrameTime();
}

double BRMTime::getEllapsedTime() const
{
    return GetTime();
}

BRMTime::~BRMTime()
{}
