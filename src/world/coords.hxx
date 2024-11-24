#pragma once

namespace world {
    struct WorldCoords;
    struct ChunkCoords;
    struct InternalCoords;

    using Coords = WorldCoords;

    struct WorldCoords {
        int x;
        int y;
        int z;

        auto constexpr to_chunk() -> ChunkCoords;
        auto constexpr to_internal() -> InternalCoords;
    };

    struct ChunkCoords {
        int x;
        int y;
        int z;
    };

    struct InternalCoords {
        int x;
        int y;
        int z;
    };
} // namespace world
