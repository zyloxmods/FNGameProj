#include "TrackConnectorMeshConfig.h"

FTrackConnectorMeshConfig::FTrackConnectorMeshConfig() {
    this->InclineSideA = ETrackIncline::NoNeighbor;
    this->InclineSideB = ETrackIncline::NoNeighbor;
    this->Mesh = NULL;
}

