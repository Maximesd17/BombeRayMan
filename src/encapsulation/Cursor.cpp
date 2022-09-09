#include "encapsulation/Cursor.hpp"

BRMCursor::BRMCursor() {}

void BRMCursor::show()
{
    _hidden = false;
    ShowCursor();
}

void BRMCursor::hide()
{
    _hidden = true;
    HideCursor();
}

bool BRMCursor::isHidden() const
{
    return _hidden;
}

void BRMCursor::enable()
{
    _locked = false;
    EnableCursor();
}

void BRMCursor::disable()
{
    _locked = true;
    DisableCursor();
}

bool BRMCursor::isLocked() const
{
    return _locked;
}

bool BRMCursor::isOnScreen() const
{
    return IsCursorOnScreen();
}