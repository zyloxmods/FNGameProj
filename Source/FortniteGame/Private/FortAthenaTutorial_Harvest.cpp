#include "FortAthenaTutorial_Harvest.h"

void AFortAthenaTutorial_Harvest::OnBuildingDestroyed() {
}

void AFortAthenaTutorial_Harvest::OnBeginOverlapHarvestTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

AFortAthenaTutorial_Harvest::AFortAthenaTutorial_Harvest() {
    HarvestMarker = NULL;
    DoorTargetAppearDelay = 1;
    DoorTargetVisual = NULL;
    HarvestTriggerBox = NULL;
    BlockerHarvest = NULL;
    BuildingToDestroy = NULL;
}

