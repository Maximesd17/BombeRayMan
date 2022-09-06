#pragma once

#include "raylib.h"
#include <string>

class BRMWindow
{
private:
    int _width = 800;
    int _height = 450;
    std::string _title = "BombeRayLib";
public:
    BRMWindow();
    BRMWindow(int width, int height, std::string title);
    bool shouldClose() const;
    bool isReady() const;
    bool isFullscreen() const;
    bool isHidden() const;
    bool isMinimized() const;
    bool isMaximized() const;
    bool isFocused() const;
    bool isResized() const;
    void toggleFullscreen() const;
    void maximize() const;
    void minimize() const;
    void restore() const;
    /*void setIcon(Image image) const;*/ //Requires IMAGE
    void setTitle(std::string title);
    void setSize(int width, int height);
    void setMinSize(int width, int height);
    int getWidth() const;
    int getHeight() const;
    int getCurrentMonitor() const;
    int getMonitorWidth(int monitor) const;
    int getMonitorHeight(int monitor) const;
    int getMonitorRefreshRate(int monitor) const;
    std::string getTitle() const;
    ~BRMWindow();
};
