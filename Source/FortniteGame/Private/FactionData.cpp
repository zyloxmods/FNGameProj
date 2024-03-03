#include "FactionData.h"

FFactionData::FFactionData() {
    this->bActive = false;
    this->DefaultAttitude = EFortFactionAttitude::Friendly;
    this->bPropagateHostilityToFaction = false;
}

