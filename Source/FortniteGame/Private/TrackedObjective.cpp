#include "TrackedObjective.h"

FTrackedObjective::FTrackedObjective() {
    TrackedIndex = 0;
    TeamIndex = 0;
    OldTeamIndex = 0;
    IndicatorPresetIndex = 0;
    ProgressPercentage = 1;
    TrackedState = 0;
    TrackedStateOwnerTeam = 0;
    OldTrackedState = 0;
    ObjectiveType = 0;
    bIsInteractionAllowed = false;
    bOldIsInteractionAllowed = false;
}

