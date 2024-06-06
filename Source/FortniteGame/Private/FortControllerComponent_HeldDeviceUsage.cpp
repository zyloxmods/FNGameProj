#include "FortControllerComponent_HeldDeviceUsage.h"

void UFortControllerComponent_HeldDeviceUsage::ServerUseBattleLabDevice_Implementation(const UFortBattleLabDeviceItemDefinition* DeviceItemDef) {
}
bool UFortControllerComponent_HeldDeviceUsage::ServerUseBattleLabDevice_Validate(const UFortBattleLabDeviceItemDefinition* DeviceItemDef) {
    return true;
}

void UFortControllerComponent_HeldDeviceUsage::QuestUpdate() {
}

void UFortControllerComponent_HeldDeviceUsage::OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon) {
}

void UFortControllerComponent_HeldDeviceUsage::OnHeldObjectThrown() {
}

void UFortControllerComponent_HeldDeviceUsage::OnHeldObjectPlaced() {
}

void UFortControllerComponent_HeldDeviceUsage::OnHeldObjectDropped() {
}

void UFortControllerComponent_HeldDeviceUsage::OnHeldObjectDestroy() {
}

void UFortControllerComponent_HeldDeviceUsage::DestroyDroppedDevice(AActor* DroppedDevice) {
}

UFortControllerComponent_HeldDeviceUsage::UFortControllerComponent_HeldDeviceUsage() {
    LastBattleLabDeviceItemDefinition = NULL;
    LastHeldObjectComponent = NULL;
}

