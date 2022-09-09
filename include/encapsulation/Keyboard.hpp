#pragma once

#include "raylib.h"

class BRMKeyboard
{
private:
    int _exitKey;
public:
    BRMKeyboard();
    bool isPressed(int key) const;
    bool isDown(int key) const;
    bool isReleased(int key) const;
    bool isUp(int key) const;
    void setExit(int key);
    int getExit() const;
    int getKeyPressed() const;
    int getCharPressed() const;
    ~BRMKeyboard();
};
