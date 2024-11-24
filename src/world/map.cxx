#include "map.hxx"

namespace world {
    constexpr auto Map::chunk_coords_to_idx(ChunkCoords coords) -> int {
        return coords.x + coords.y * SIZE_X + coords.z * SIZE_X * SIZE_Y;
    }
} // namespace world
