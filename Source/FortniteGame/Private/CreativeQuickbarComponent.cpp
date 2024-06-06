#include "CreativeQuickbarComponent.h"

void UCreativeQuickbarComponent::SetIsQuickbarEquipped(bool bIsEquipped) {
}

void UCreativeQuickbarComponent::ServerAddToQuickBar_Implementation(const TArray<AActor*>& Actors, const int32 DesiredSlotIndex) {
}
bool UCreativeQuickbarComponent::ServerAddToQuickBar_Validate(const TArray<AActor*>& Actors, const int32 DesiredSlotIndex) {
    return true;
}

void UCreativeQuickbarComponent::ServerAddItemToQuickBar_Implementation(const UFortItemDefinition* ItemDefinition, const int32 DesiredSlotIndexconst, FGuid PreviousItemGuid, bool bUseVolumeToSpawn) {
}
bool UCreativeQuickbarComponent::ServerAddItemToQuickBar_Validate(const UFortItemDefinition* ItemDefinition, const int32 DesiredSlotIndexconst, FGuid PreviousItemGuid, bool bUseVolumeToSpawn) {
    return true;
}

void UCreativeQuickbarComponent::PopulateQuickbarSlotFromSelection_Implementation(int32 SlotIndex) {
}

bool UCreativeQuickbarComponent::IsQuickbarActive() const {
    return false;
}

void UCreativeQuickbarComponent::HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon) {
}

void UCreativeQuickbarComponent::HandleQuickbarClutchReleased_Implementation() {
}

void UCreativeQuickbarComponent::HandleQuickbarClutchPressed_Implementation() {
}

void UCreativeQuickbarComponent::HandleMoveToolInteractionStarted(UObjectInteractionBehavior* InteractionMode) {
}

void UCreativeQuickbarComponent::HandleMoveToolInteractionEnded() {
}

void UCreativeQuickbarComponent::HandleInputMethodChanged(ECommonInputType CurrentInputType) {
}

void UCreativeQuickbarComponent::HandleCreativeQuickbarReleased_Implementation(int32 SlotIndex) {
}

void UCreativeQuickbarComponent::HandleCreativeQuickbarPressed_Implementation(int32 SlotIndex) {
}

void UCreativeQuickbarComponent::ExecuteDelayedAddItemToQuickbar(const UFortItemDefinition* ItemDefinition, const int32 DesiredSlotIndex, bool bUseVolumeToSpawn) {
}

void UCreativeQuickbarComponent::ExecuteDelayedAddItemToMoveTool(const UFortItemDefinition* ItemDefinition, bool bUseVolume) {
}

void UCreativeQuickbarComponent::ClientAddToQuickBarComplete_Implementation(const int32 SlotPutIn, FGuid ItemGuid, const UFortItemDefinition* Playset, bool UseDelayedAddToQuickbar, bool bUseVolumeToSpawn) {
}

void UCreativeQuickbarComponent::ActivateQuickbarSlot_Implementation(int32 SlotIndex) {
}

UCreativeQuickbarComponent::UCreativeQuickbarComponent() {
    bIsCreativeQuickbarActive = false;
    bIsCreativeQuickbarEquipped = false;
    QuickbarSlotPlaysetItemDefinition = NULL;
    CurrentQuickbarRequestSaveRecord = NULL;
    CreativeQuickbarInputComponent = NULL;
    CreativeQuickbarActiveInputComponent = NULL;
}

