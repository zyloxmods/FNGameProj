#include "WorldTileType.h"

UWorldTileType::UWorldTileType() {
    this->TileID = TEXT("Default Name");
    this->TileWeight = 1;
    this->North = EFortTileEdgeType::Undefined;
    this->East = EFortTileEdgeType::Undefined;
    this->South = EFortTileEdgeType::Undefined;
    this->West = EFortTileEdgeType::Undefined;
}

