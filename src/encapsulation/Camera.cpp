#include "encapsulation/Camera.hpp"

BRMCamera::BRMCamera()
{
    _camera = std::make_unique<Camera>();
}

BRMCamera::BRMCamera(const BRMCamera &camera) {
    _camera = std::make_unique<Camera>(*camera.getCamera());
}

void BRMCamera::setPosition(BRMVector3 position)
{
    _position = position;
    _camera.get()->position.x = _position.getX();
    _camera.get()->position.y = _position.getY();
    _camera.get()->position.z = _position.getZ();
    this->update();
}

void BRMCamera::setMode(int mode)
{
    _mode = mode;
    _camera.get()->projection = _mode;
    this->update();
}

void BRMCamera::setFOV(float fov)
{
    _fov = fov;
    _camera.get()->fovy = _fov;
    this->update();
}

void BRMCamera::setUp(BRMVector3 up)
{
    _up = up;
    _camera.get()->up.x = _up.getX();
    _camera.get()->up.y = _up.getY();
    _camera.get()->up.z = _up.getZ();
    this->update();
}

void BRMCamera::setTarget(BRMVector3 target)
{
    _target = target;
    _camera.get()->target.x = _target.getX();
    _camera.get()->target.y = _target.getY();
    _camera.get()->target.z = _target.getZ();
    this->update();
}

Camera *BRMCamera::getCamera() const
{
    return _camera.get();
}

int BRMCamera::getMode() const
{
    return _mode;
}

float BRMCamera::getFOV() const
{
    return _fov;
}

BRMVector3 BRMCamera::getPosition() const
{
    return _position;
}

BRMVector3 BRMCamera::getUp() const
{
    return _up;
}

BRMVector3 BRMCamera::getTarget() const
{
    return _target;
}

void BRMCamera::update() const
{
    UpdateCamera(_camera.get());
}

BRMCamera::~BRMCamera() {}
