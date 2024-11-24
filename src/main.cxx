#include <raylib-cpp.hpp>

#define RAYGUI_IMPLEMENTATION
#include <raygui.h>
#undef RAYGUI_IMPLEMENTATION

int main() {
    constexpr int SCREEN_WIDTH { 800 };
    constexpr int SCREEN_HEIGHT { 450 };

    raylib::Window window { SCREEN_WIDTH, SCREEN_HEIGHT, "Towns" };

    bool showMessageBox { false };

    while (!window.ShouldClose()) {
        window.BeginDrawing();
        window.ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));

        if (GuiButton((Rectangle) { 24, 24, 120, 30 }, "#191#Show Message")) {
            showMessageBox = true;
        }

        if (showMessageBox) {
            const int result { GuiMessageBox(
                (Rectangle) { 85, 70, 250, 100 },
                "#191#Message Box",
                "Hi! This is a message!",
                "Nice;Cool"
            ) };

            if (result >= 0) {
                showMessageBox = false;
            }
        }

        window.EndDrawing();
    }
}
