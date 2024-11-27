#pragma once

#include <memory>

#include <raylib-cpp.hpp>

class App {
  private:
    static constexpr int SCREEN_WIDTH { 800 };
    static constexpr int SCREEN_HEIGHT { 450 };

    std::unique_ptr<raylib::Window> window {};
    raylib::Camera3D camera {};

  public:
    App();

    auto run() -> void;
};
