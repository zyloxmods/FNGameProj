#include "FortAthenaTutorial_Chest.h"

void AFortAthenaTutorial_Chest::OnPlayerEntersTrigger(AActor* OverlappedActor, AActor* OtherActor) {
}

AFortAthenaTutorial_Chest::AFortAthenaTutorial_Chest() {
    Chest = NULL;
    ChestLookMarker = NULL;
    InteractButtonHighlightType = NULL;
    TriggerBox = NULL;
    ShowEasyInteractIconDelay = 1;
}

