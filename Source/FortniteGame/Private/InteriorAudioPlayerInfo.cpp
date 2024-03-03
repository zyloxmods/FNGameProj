#include "InteriorAudioPlayerInfo.h"

FInteriorAudioPlayerInfo::FInteriorAudioPlayerInfo() {
    this->CurrentAmbientBank = NULL;
    this->PreviousAmbientBank = NULL;
    this->CenterCellActor = NULL;
    this->Quadrant = EInteriorAudioQuadrant::None;
}

