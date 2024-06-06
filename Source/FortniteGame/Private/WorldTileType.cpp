#include "WorldTileType.h"

UWorldTileType::UWorldTileType() {
    TileID = TEXT("Default Name");
    TileWeight = 0;
    North = EFortTileEdgeType::Undefined;
    East = EFortTileEdgeType::Undefined;
    South = EFortTileEdgeType::Undefined;
    West = EFortTileEdgeType::Undefined;
}

