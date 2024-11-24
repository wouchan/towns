#pragma once

#include <array>

#include "chunk.hxx"
#include "coords.hxx"

namespace world {
    class Map {
      private:
        static constexpr int SIZE_X { 16 };
        static constexpr int SIZE_Y { 2 };
        static constexpr int SIZE_Z { 16 };

        std::array<Chunk, SIZE_X * SIZE_Y * SIZE_Z> chunks {};

      public:
        Map() = default;

      private:
        static constexpr auto chunk_coords_to_idx(ChunkCoords coords) -> int;
    };
} // namespace world
