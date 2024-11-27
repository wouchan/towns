#include "app.hxx"

App::App()
    : window { std::make_unique<raylib::Window>(SCREEN_WIDTH, SCREEN_HEIGHT, "Towns") },
      camera { Camera3D { .position = Vector3 { 3, 2, 4 },
                          .target = Vector3 { 0, 0, 0 },
                          .up = Vector3 { 0, 1, 0 },
                          .fovy = 75,
                          .projection = CameraProjection::CAMERA_PERSPECTIVE } } {}

auto App::run() -> void {
    while (!window->ShouldClose()) {
        window->BeginDrawing();
        window->ClearBackground(raylib::Color::RayWhite());
        camera.BeginMode();

        DrawCube(Vector3 { 0, 0, 0 }, 1, 1, 1, raylib::Color::Green());
        DrawCubeWires(Vector3 { 0, 0, 0 }, 1, 1, 1, raylib::Color::Black());

        camera.EndMode();
        window->EndDrawing();
    }
}
