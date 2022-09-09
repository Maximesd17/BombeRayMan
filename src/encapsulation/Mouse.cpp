#include "encapsulation/Mouse.hpp"

BRMMouse::BRMMouse() {}

bool BRMMouse::isButtonPressed(int button) const
{
    return IsMouseButtonPressed(button);
}

bool BRMMouse::isButtonDown(int button) const
{
    return IsMouseButtonDown(button);
}

bool BRMMouse::isButtonReleased(int button) const
{
    return IsMouseButtonReleased(button);
}

bool BRMMouse::isButtonUp(int button) const
{
    return IsMouseButtonUp(button);
}

int BRMMouse::getX() const
{
    return GetMouseX();
}

int BRMMouse::getY() const
{
    return GetMouseY();
}

BRMVector2 BRMMouse::getPosition() const
{
    Vector2 posV2 = GetMousePosition();
    BRMVector2 position(posV2.x, posV2.y);

    return position;
}

BRMVector2 BRMMouse::getDelta() const
{
    Vector2 posV2 = GetMouseDelta();
    BRMVector2 position(posV2.x, posV2.y);

    return position;
}

void BRMMouse::setPosition(int x, int y) const
{
    SetMousePosition(x, y);
}

void BRMMouse::setOffset(int offX, int offY) const
{
    SetMouseOffset(offX, offY);
}

void BRMMouse::setScale(float scaleX, float scaleY) const
{
    SetMouseScale(scaleX, scaleY);
}

BRMVector2 BRMMouse::getWheelMoveV() const
{
    Vector2 moveV2 = GetMouseWheelMoveV();
    BRMVector2 wheelMove(moveV2.x, moveV2.y);

    return wheelMove;
}

float BRMMouse::getWheelMove() const
{
    return GetMouseWheelMove();
}

/*
**  @param cursor   Macro from Raylib "MOUSE_CURSOR_xxx"
*/
void BRMMouse::setCursor(int cursor) const
{
    SetMouseCursor(cursor);
}