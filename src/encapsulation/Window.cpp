#include "encapsulation/Window.hpp"

BRMWindow::BRMWindow()
{
    InitWindow(_width, _height, _title.data());
}

BRMWindow::BRMWindow(int widht, int height, std::string title)
{
    _width = widht;
    height = height;

    if (!title.empty())
        _title = title;
    InitWindow(_width, _height, _title.data());
}

bool BRMWindow::shouldClose() const
{
    return WindowShouldClose();
}

bool BRMWindow::isReady() const
{
    return IsWindowReady();
}

bool BRMWindow::isFullscreen() const
{
    return IsWindowFullscreen();
}

bool BRMWindow::isHidden() const
{
    return IsWindowHidden();
}

bool BRMWindow::isMinimized() const
{
    return IsWindowMinimized();
}

bool BRMWindow::isMaximized() const
{
    return IsWindowMaximized();
}

bool BRMWindow::isFocused() const
{
    return IsWindowFocused();
}

bool BRMWindow::isResized() const
{
    return isResized();
}

void BRMWindow::toggleFullscreen() const
{
    ToggleFullscreen();
}

void BRMWindow::maximize() const
{
    MaximizeWindow();
}

void BRMWindow::minimize() const
{
    MinimizeWindow();
}

void BRMWindow::restore() const
{
    RestoreWindow();
}

/*void setIcon(Image image) const;*/ //Requires IMAGE

void BRMWindow::setTitle(std::string title)
{
    _title = title;
    SetWindowTitle(_title.data());
}

void BRMWindow::setSize(int width, int height)
{
    _width = width;
    _height = height;
    SetWindowSize(_width, _height);
}

void BRMWindow::setMinSize(int width, int height)
{
    _width = width;
    _height = height;
    SetWindowMinSize(_width, _height);
}

int BRMWindow::getWidth() const
{
    return _width;
}
int BRMWindow::getHeight() const
{
    return _height;
}

int BRMWindow::getCurrentMonitor() const
{
    return GetCurrentMonitor();
}

int BRMWindow::getMonitorWidth(int monitor) const
{
    return GetMonitorWidth(monitor);
}

int BRMWindow::getMonitorHeight(int monitor) const
{
    return GetMonitorHeight(monitor);
}

int BRMWindow::getMonitorRefreshRate(int monitor) const
{
    return GetMonitorRefreshRate(monitor);
}
std::string BRMWindow::getTitle() const
{
    return _title;
}

BRMWindow::~BRMWindow()
{
    CloseWindow();
}