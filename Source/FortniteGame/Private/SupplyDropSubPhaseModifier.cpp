#include "SupplyDropSubPhaseModifier.h"

FSupplyDropSubPhaseModifier::FSupplyDropSubPhaseModifier() {
    this->GamePhase = EAthenaGamePhase::None;
    this->SubPhaseIndex = 0;
    this->SpawnInPreviousZonePercentChance = 1;
}

