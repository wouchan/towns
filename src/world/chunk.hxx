#pragma once

#include <array>
#include <optional>

#include "block.hxx"
#include "coords.hxx"

namespace world {
    class Chunk {
      public:
        static constexpr int SIZE { 16 };

      private:
        std::array<std::optional<Block>, SIZE * SIZE * SIZE> blocks {};

      public:
        Chunk();

      private:
        static constexpr auto coords_to_idx(InternalCoords coords) -> int;
    };
} // namespace world
