#include "TrackedObjective.h"

FTrackedObjective::FTrackedObjective() {
    this->TrackedIndex = 0;
    this->TeamIndex = 0;
    this->OldTeamIndex = 0;
    this->IndicatorPresetIndex = 0;
    this->ProgressPercentage = 1;
    this->TrackedState = 0;
    this->TrackedStateOwnerTeam = 0;
    this->OldTrackedState = 0;
    this->ObjectiveType = 0;
    this->bIsInteractionAllowed = false;
    this->bOldIsInteractionAllowed = false;
}

