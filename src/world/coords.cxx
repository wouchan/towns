#include "coords.hxx"

#include "chunk.hxx"

namespace world {
    auto constexpr WorldCoords::to_chunk() -> ChunkCoords {
        return ChunkCoords { .x = this->x / Chunk::SIZE,
                             .y = this->y / Chunk::SIZE,
                             .z = this->z / Chunk::SIZE };
    }

    auto constexpr WorldCoords::to_internal() -> InternalCoords {
        return InternalCoords { .x = this->x % Chunk::SIZE,
                                .y = this->y % Chunk::SIZE,
                                .z = this->z % Chunk::SIZE };
    }
} // namespace world
