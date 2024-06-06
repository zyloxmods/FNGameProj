#include "InfiltrationCarryObjectSpawnPoint.h"
#include "Net/UnrealNetwork.h"





void AInfiltrationCarryObjectSpawnPoint::OnRep_CurrentState(ESpawnPointState OldState) {
}

void AInfiltrationCarryObjectSpawnPoint::OnHeldObjectThrownLanded() {
}

void AInfiltrationCarryObjectSpawnPoint::OnHeldObjectThrown() {
}

void AInfiltrationCarryObjectSpawnPoint::OnHeldObjectPlaced() {
}

void AInfiltrationCarryObjectSpawnPoint::OnHeldObjectPickedUp() {
}

void AInfiltrationCarryObjectSpawnPoint::OnHeldObjectDropped() {
}

void AInfiltrationCarryObjectSpawnPoint::OnHeldObjectDestroy() {
}

void AInfiltrationCarryObjectSpawnPoint::OnEnterWater(AFortWaterBodyActor* WaterBody, UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody) {
}

AActor* AInfiltrationCarryObjectSpawnPoint::GetIntelActor() const {
    return NULL;
}





void AInfiltrationCarryObjectSpawnPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInfiltrationCarryObjectSpawnPoint, CurrentState);
    DOREPLIFETIME(AInfiltrationCarryObjectSpawnPoint, CachedIntelActor);
}

AInfiltrationCarryObjectSpawnPoint::AInfiltrationCarryObjectSpawnPoint() {
    CurrentState = ESpawnPointState::Inactive;
    CachedSceneComponent = NULL;
    CachedIntelActor = NULL;
    IntelClassToSpawn = NULL;
}

