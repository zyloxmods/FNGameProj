#include "PickupInstigatorData.h"

FPickupInstigatorData::FPickupInstigatorData() {
    this->TeamIndex = 0;
    this->TargetAttitude = ETeamAttitude::Friendly;
    this->AccentColorParam = 1;
    this->ScoreValue = 0;
    this->OverridePickupClass = NULL;
}

