#include "main.hpp"
#include "raylib.h"

int main(void)
{
    BRMWindow window;
    BRMTime time;
    BRMCamera camera;
    BRMVector3 camVector(0, 10, 10);
    BRMCursor cursor;
    BRMVector3 cubePosition(0, 0, 0);
    BRMVector3 cubeSize(2, 2, 2);

    // Camera camera = {0};
    // Vector3 cubePosition = {0, 0, 0};

    // camera.fovy = 45;
    // camera.position = (Vector3){0, 10, 10};
    // camera.target = (Vector3){0, 0, 0};
    // camera.up = (Vector3){0, 1, 0};
    // camera.projection = CAMERA_PERSPECTIVE;

    time.setMaxFPS(window.getMonitorRefreshRate(window.getCurrentMonitor()));

    camera.setPosition(camVector);
    camera.setFOV(45);
    camera.setMode(CAMERA_PERSPECTIVE);
    camera.setUp(BRMVector3(0, 1, 0));
    camera.setTarget(BRMVector3(0, 0, 0));

    cursor.setType(MOUSE_CURSOR_NOT_ALLOWED);
    while (!window.shouldClose()) {
        BRMDrawer::begin();
        BRMDrawer::clearBackground(RAYWHITE);
        BRMDrawer::begin3D(camera);
        BRMDrawer::cube(cubePosition, cubeSize, RED);
        BRMDrawer::cubeWires(cubePosition, cubeSize, MAROON);
        BRMDrawer::grid(10, 1);
        BRMDrawer::end3D();
        BRMDrawer::fps(BRMVector2(10, 10));
        BRMDrawer::end();
    }
    return 0;
}