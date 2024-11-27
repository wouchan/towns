#include <raylib-cpp.hpp>

#define RAYGUI_IMPLEMENTATION
#include <raygui.h>
#undef RAYGUI_IMPLEMENTATION

#include "app/app.hxx"

int main() { App().run(); }
