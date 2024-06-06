#include "FortAthenaMutator_ContextTutorial.h"

void AFortAthenaMutator_ContextTutorial::HandleGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

AFortAthenaMutator_ContextTutorial::AFortAthenaMutator_ContextTutorial() {
    bEnableTutorials = true;
    bContextTutorialMinimumLevelOverride = 0;
    MessageSound = NULL;
    ConcurrentActiveContextualTutorials = 0;
    CooldownTimeBetweenContextualTutorialTips = 1;
    InCombatGraceTime = 1;
    RayCastDistanceForNearbyEnemyCentimeter = 1;
    WorldMarkerPadding = 1;
    WorldMarkerSockerName = TEXT("ST_Marker");
    bEnableWorldMarker = true;
    bEnableHighlight = true;
}

