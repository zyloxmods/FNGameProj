#include "FortTrackPreview.h"

void AFortTrackPreview::InitializeTrackPreview(UStaticMeshComponent* InTrackMeshComp) {
}

AFortTrackPreview::AFortTrackPreview() {
    this->TrackPieceMeshesByType[0] = NULL;
    this->TrackPieceMeshesByType[1] = NULL;
    this->TrackPieceMeshesByType[2] = NULL;
    this->TrackPieceMeshesByType[3] = NULL;
    this->TrackPieceMeshesByType[4] = NULL;
    this->CellSize = 512.00f;
    this->TrackMeshComp = NULL;
}

