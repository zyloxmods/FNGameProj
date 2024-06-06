#include "BuildingProp_LockDevice.h"
#include "Net/UnrealNetwork.h"

void ABuildingProp_LockDevice::UnlockObject(AController* ControllerInstigator) {
}

void ABuildingProp_LockDevice::ToggleOpenState(AController* ControllerInstigator) {
}

void ABuildingProp_LockDevice::ToggleLockedState(AController* ControllerInstigator) {
}

void ABuildingProp_LockDevice::SetHighLightToLockableActor(ABuildingActor* BuildingActor, bool bEnable) {
}

void ABuildingProp_LockDevice::Open(AController* ControllerInstigator) {
}

void ABuildingProp_LockDevice::OnRep_LockableObject() {
}

void ABuildingProp_LockDevice::OnRep_CurrentLockState() {
}

void ABuildingProp_LockDevice::LockObject(AController* ControllerInstigator) {
}

void ABuildingProp_LockDevice::HandleMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState NewMinigameState) {
}

void ABuildingProp_LockDevice::HandleMinigameStarted() {
}

void ABuildingProp_LockDevice::HandleMinigameEnded() {
}

void ABuildingProp_LockDevice::HandleLockableObjectDestruction(AActor* ActorDestroyed) {
}

AActor* ABuildingProp_LockDevice::FindLockableActor() {
    return NULL;
}

void ABuildingProp_LockDevice::Close(AController* ControllerInstigator) {
}

void ABuildingProp_LockDevice::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingProp_LockDevice, LockableObject);
    DOREPLIFETIME(ABuildingProp_LockDevice, CurrentLockState);
}

ABuildingProp_LockDevice::ABuildingProp_LockDevice() {
    SearchAreaSize = 1;
    LockableObject = NULL;
    CurrentLockState = ELockState::INVALID;
}

