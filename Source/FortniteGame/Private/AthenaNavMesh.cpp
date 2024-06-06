#include "AthenaNavMesh.h"

void AAthenaNavMesh::MoveTiles(const FBox& SourceBox, const FIntPoint& TileOffset, const float RotationDeg, const FVector2D& FillerTilePosition) {
}

void AAthenaNavMesh::ComputeOffsetForMoveTiles(const FVector& StartPosition, const FVector& DesiredPosition, FVector& OutEndPosition, FIntPoint& OutTileOffset) {
}

AAthenaNavMesh::AAthenaNavMesh() {
    HotSpotPathfindingMaxSearchNodes = 0;
}

