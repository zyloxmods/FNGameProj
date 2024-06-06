#include "FortTrackPreview.h"

void AFortTrackPreview::InitializeTrackPreview(UStaticMeshComponent* InTrackMeshComp) {
}

AFortTrackPreview::AFortTrackPreview() {
    TrackPieceMeshesByType[0] = NULL;
    TrackPieceMeshesByType[1] = NULL;
    TrackPieceMeshesByType[2] = NULL;
    TrackPieceMeshesByType[3] = NULL;
    TrackPieceMeshesByType[4] = NULL;
    CellSize = 1;
    TrackMeshComp = NULL;
}

