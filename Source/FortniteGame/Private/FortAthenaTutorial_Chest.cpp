#include "FortAthenaTutorial_Chest.h"

void AFortAthenaTutorial_Chest::OnPlayerEntersTrigger(AActor* OverlappedActor, AActor* OtherActor) {
}

AFortAthenaTutorial_Chest::AFortAthenaTutorial_Chest() {
    this->Chest = NULL;
    this->ChestLookMarker = NULL;
    this->InteractButtonHighlightType = NULL;
    this->TriggerBox = NULL;
    this->ShowEasyInteractIconDelay = 1;
}

