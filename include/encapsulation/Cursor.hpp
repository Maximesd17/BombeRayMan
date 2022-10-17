#pragma once

#include "raylib.h"

class BRMCursor
{
private:
    bool _hidden = false;
    bool _locked = false;
public:
    BRMCursor();
    void show();
    void hide();
    bool isHidden() const;
    void enable();
    void disable();
    bool isLocked() const;
    bool isOnScreen() const;
    void setType(MouseCursor type) const;
    ~BRMCursor();
};
