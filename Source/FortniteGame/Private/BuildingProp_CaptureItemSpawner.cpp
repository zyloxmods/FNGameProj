#include "BuildingProp_CaptureItemSpawner.h"

void ABuildingProp_CaptureItemSpawner::UnregisterSpecialActor() {
}

void ABuildingProp_CaptureItemSpawner::SendCaptureItemFeedbackEvent(const FGameplayFeedbackEventParams& EventParams, UFortItemDefinition* ItemDefinition, int32 Quantity) {
}

void ABuildingProp_CaptureItemSpawner::ResetItemRefCount() {
}

int32 ABuildingProp_CaptureItemSpawner::RemoveItemRef() {
    return 0;
}

void ABuildingProp_CaptureItemSpawner::RegisterSpecialActor(UFortWorldItemDefinition* ItemDefinition) {
}

void ABuildingProp_CaptureItemSpawner::NetMulticast_NotifyFeedbackEvent_Implementation(const FGameplayFeedbackEventParams& EventParams, const FFortItemQuantityPair& ItemEntry) {
}


bool ABuildingProp_CaptureItemSpawner::CanTakeFlag(AFortPawn* InteractingPawn) const {
    return false;
}

int32 ABuildingProp_CaptureItemSpawner::AddItemRef() {
    return 0;
}

ABuildingProp_CaptureItemSpawner::ABuildingProp_CaptureItemSpawner() {
    ItemRefCount = 0;
    bPickupWasClaimed = false;
    bShowCaptureEvents = false;
}

