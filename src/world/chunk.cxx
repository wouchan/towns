#include "chunk.hxx"

namespace world {
    Chunk::Chunk() {
        for (int z = 0; z < this->SIZE; z += 1) {
            for (int y = 0; y < this->SIZE; y += 1) {
                for (int x = 0; x < this->SIZE; x += 1) {
                    if (y <= 2) {
                        this->blocks[coords_to_idx(InternalCoords { x, y, z })] = Block::Grass;
                    }
                }
            }
        }
    }

    constexpr auto Chunk::coords_to_idx(InternalCoords coords) -> int {
        return coords.x + coords.y * SIZE + coords.z * SIZE * SIZE;
    }
} // namespace world
