#include "encapsulation/Drawer.hpp"

BRMDrawer::BRMDrawer() {}

void BRMDrawer::clearBackground(Color color)
{
    ClearBackground(color);
}

void BRMDrawer::begin()
{
    BeginDrawing();
}

void BRMDrawer::end()
{
    EndDrawing();
}

void BRMDrawer::begin3D(BRMCamera const camera)
{
    BeginMode3D(*camera.getCamera());
}

void BRMDrawer::end3D()
{
    EndMode3D();
}

void BRMDrawer::grid(int slices, int spacing)
{
    DrawGrid(slices, spacing);
}

void BRMDrawer::rectangle(BRMVector2 position, BRMVector2 size, Color color)
{
    DrawRectangle(position.getX(), position.getY(), size.getX(), size.getY(), color);
}

void BRMDrawer::cube(BRMVector3 position, BRMVector3 size, Color color)
{
    DrawCubeV(position.getBase(), size.getBase(), color);
}

void BRMDrawer::cubeWires(BRMVector3 position, BRMVector3 size, Color color)
{
    DrawCubeWiresV(position.getBase(), size.getBase(), color);
}

void BRMDrawer::sphere(BRMVector3 position, float radius, Color color)
{
    DrawSphere(position.getBase(), radius, color);
}

void BRMDrawer::fps(BRMVector2 position)
{
    DrawFPS(position.getX(), position.getY());
}

void BRMDrawer::text(std::string text, BRMVector2 position, int size, Color color)
{
    DrawText(text.data(), position.getX(), position.getY(), size, color);
}

BRMDrawer::~BRMDrawer() { this->end(); }