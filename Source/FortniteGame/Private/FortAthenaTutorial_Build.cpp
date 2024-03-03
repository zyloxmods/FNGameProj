#include "FortAthenaTutorial_Build.h"

void AFortAthenaTutorial_Build::OnPlayerEntersChestTrigger(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFortAthenaTutorial_Build::OnBeginOverlapChestTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFortAthenaTutorial_Build::HandleOnItemCountChanged(UFortItemDefinition* Definition, int32 Delta) {
}

AFortAthenaTutorial_Build::AFortAthenaTutorial_Build() {
    this->Chest = NULL;
    this->ChestObjectiveMarker = NULL;
    this->ChestLookMarker = NULL;
    this->BuildMarker = NULL;
    this->BuildMarker2 = NULL;
    this->ChestTriggerBox = NULL;
    this->ChestDirectionArrows = NULL;
    this->SecurityTape_Build = NULL;
    this->Building_BlockingVolume = NULL;
    this->StairsBuildingItemDef = NULL;
    this->WoodItemDef = NULL;
    this->SecondStairsNoBuildZone = NULL;
    this->TriggerBox = NULL;
}

