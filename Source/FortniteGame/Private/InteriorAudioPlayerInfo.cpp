#include "InteriorAudioPlayerInfo.h"

FInteriorAudioPlayerInfo::FInteriorAudioPlayerInfo() {
    CurrentAmbientBank = NULL;
    PreviousAmbientBank = NULL;
    CenterCellActor = NULL;
    Quadrant = EInteriorAudioQuadrant::None;
}

