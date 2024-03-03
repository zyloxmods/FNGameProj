#include "FortAthenaTutorial_Harvest.h"

void AFortAthenaTutorial_Harvest::OnBuildingDestroyed() {
}

void AFortAthenaTutorial_Harvest::OnBeginOverlapHarvestTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

AFortAthenaTutorial_Harvest::AFortAthenaTutorial_Harvest() {
    this->HarvestMarker = NULL;
    this->DoorTargetAppearDelay = 1;
    this->DoorTargetVisual = NULL;
    this->HarvestTriggerBox = NULL;
    this->BlockerHarvest = NULL;
    this->BuildingToDestroy = NULL;
}

