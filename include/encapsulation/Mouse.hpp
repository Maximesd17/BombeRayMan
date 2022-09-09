#pragma once

#include "raylib.h"

#include "encapsulation/Cursor.hpp"
#include "encapsulation/Vector2.hpp"

class BRMMouse
{
private:
public:
    BRMMouse();
    bool isButtonPressed(int button) const;
    bool isButtonDown(int button) const;
    bool isButtonReleased(int button) const;
    bool isButtonUp(int button) const;
    int getX() const;
    int getY() const;
    BRMVector2 getPosition() const;
    BRMVector2 getDelta() const;
    void setPosition(int x, int y) const;
    void setOffset(int offX, int offY) const;
    void setScale(float scaleX, float scaleY) const;
    BRMVector2 getWheelMoveV() const;
    float getWheelMove() const;
    void setCursor(int cursor) const;
    ~BRMMouse();
};
