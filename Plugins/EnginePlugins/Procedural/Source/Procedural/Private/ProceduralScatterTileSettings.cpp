#include "ProceduralScatterTileSettings.h"

FProceduralScatterTileSettings::FProceduralScatterTileSettings() {
    this->NumUniqueTiles = 0;
    this->TileSize = 1;
    this->TileOverlapPercentage = 1;
    this->MinimumQuadTreeSize = 1;
    this->RandomGenerator = EProceduralScatterTileRandomGenerator::PseudoRandom;
}

