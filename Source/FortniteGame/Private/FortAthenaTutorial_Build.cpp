#include "FortAthenaTutorial_Build.h"

void AFortAthenaTutorial_Build::OnPlayerEntersChestTrigger(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFortAthenaTutorial_Build::OnBeginOverlapChestTriggerBox(AActor* OverlappedActor, AActor* OtherActor) {
}

void AFortAthenaTutorial_Build::HandleOnItemCountChanged(UFortItemDefinition* Definition, int32 Delta) {
}

AFortAthenaTutorial_Build::AFortAthenaTutorial_Build() {
    Chest = NULL;
    ChestObjectiveMarker = NULL;
    ChestLookMarker = NULL;
    BuildMarker = NULL;
    BuildMarker2 = NULL;
    ChestTriggerBox = NULL;
    ChestDirectionArrows = NULL;
    SecurityTape_Build = NULL;
    Building_BlockingVolume = NULL;
    StairsBuildingItemDef = NULL;
    WoodItemDef = NULL;
    SecondStairsNoBuildZone = NULL;
    TriggerBox = NULL;
}

