#include "FortAthenaMutator_ContextTutorial.h"

void AFortAthenaMutator_ContextTutorial::HandleGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

AFortAthenaMutator_ContextTutorial::AFortAthenaMutator_ContextTutorial() {
    this->bEnableTutorials = true;
    this->bContextTutorialMinimumLevelOverride = 0;
    this->MessageSound = NULL;
    this->ConcurrentActiveContextualTutorials = 0;
    this->CooldownTimeBetweenContextualTutorialTips = 1;
    this->InCombatGraceTime = 1;
    this->RayCastDistanceForNearbyEnemyCentimeter = 1;
    this->WorldMarkerPadding = 1;
    this->WorldMarkerSockerName = TEXT("ST_Marker");
    this->bEnableWorldMarker = true;
    this->bEnableHighlight = true;
}

