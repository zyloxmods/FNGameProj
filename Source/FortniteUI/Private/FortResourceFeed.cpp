#include "FortResourceFeed.h"




void UFortResourceFeed::HandleWeakpointHitFinished() {
}

bool UFortResourceFeed::HandleTimedOut(float InDeltaTime) {
    return false;
}

void UFortResourceFeed::HandleResourceGainedFinished() {
}

void UFortResourceFeed::HandlePlayerVolumeChanged(AFortVolume* Volume) {
}

void UFortResourceFeed::HandleItemPickedUp(UFortWorldItem* WorldItem, int32 Count) {
}

void UFortResourceFeed::HandleGamePhaseChanged() {
}

void UFortResourceFeed::HandleFadeOutFinished() {
}

void UFortResourceFeed::HandleDamagedResourceBuilding(ABuildingSMActor* InBuildingSMActor, UFortItem* InItem, bool bDestroyed, bool bJustHitWeakspot) {
}

void UFortResourceFeed::HandleDamagedResourceActor(AActor* InActor, UFortItem* InItem, bool bDestroyed, bool bJustHitWeakspot) {
}

UFortResourceFeed::UFortResourceFeed() {
    this->ResourceGainedTime = 1;
    this->CurrentItemDefinition = NULL;
    this->Widget_ResourceCount = NULL;
    this->Widget_ResourceGained = NULL;
    this->Widget_Glow = NULL;
    this->Panel_Animations = NULL;
    this->Image_ResourceIcon = NULL;
    this->Text_ResourceCount = NULL;
    this->Text_ResourceGained = NULL;
}

