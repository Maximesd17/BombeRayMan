#include "encapsulation/Keyboard.hpp"

BRMKeyboard::BRMKeyboard() {}

bool BRMKeyboard::isPressed(int key) const
{
    return IsKeyPressed(key);
}

bool BRMKeyboard::isDown(int key) const
{
    return IsKeyDown(key);
}

bool BRMKeyboard::isReleased(int key) const
{
    return IsKeyReleased(key);
}

bool BRMKeyboard::isUp(int key) const
{
    return IsKeyUp(key);
}

void BRMKeyboard::setExit(int key)
{
    _exitKey = key;
    SetExitKey(_exitKey);
}

int BRMKeyboard::getExit() const
{
    return _exitKey;
}

int BRMKeyboard::getKeyPressed() const
{
    return GetKeyPressed();
}

int BRMKeyboard::getCharPressed() const
{
    return GetCharPressed();
}

BRMKeyboard::~BRMKeyboard() {}