#include "PickupInstigatorData.h"

FPickupInstigatorData::FPickupInstigatorData() {
    TeamIndex = 0;
    TargetAttitude = ETeamAttitude::Friendly;
    AccentColorParam = 1;
    ScoreValue = 0;
    OverridePickupClass = NULL;
}

