#pragma once

#include "raylib.h"
#include "Vector3.hpp"

#include <memory>

class BRMCamera
{
private:
    std::unique_ptr<Camera> _camera;
    int _mode;
    float _fov;
    BRMVector3 _position;
    BRMVector3 _up;
    BRMVector3 _target;
public:
    BRMCamera();
    BRMCamera(const BRMCamera &);
    void setPosition(BRMVector3 position);
    void setMode(int mode);
    void setFOV(float fov);
    void setUp(BRMVector3 up);
    void setTarget(BRMVector3 target);
    Camera *getCamera() const;
    int getMode() const;
    float getFOV() const;
    BRMVector3 getPosition() const;
    BRMVector3 getUp() const;
    BRMVector3 getTarget() const;
    void update() const;
    ~BRMCamera();
};
