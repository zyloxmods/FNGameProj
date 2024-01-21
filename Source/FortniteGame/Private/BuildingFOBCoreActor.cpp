#include "BuildingFOBCoreActor.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

void ABuildingFOBCoreActor::OnVulnerableStatusChanged_Implementation(bool bNewTargetableStatus) {
}

void ABuildingFOBCoreActor::OnTargetableStatusChanged_Implementation(bool bNewTargetableStatus) {
}

void ABuildingFOBCoreActor::OnRep_bVulnerable() {
}

void ABuildingFOBCoreActor::OnRep_bTargetable() {
}

void ABuildingFOBCoreActor::OnRep_bActive() {
}

void ABuildingFOBCoreActor::OnActiveStatusChanged_Implementation(bool bNewActiveStatus) {
}

void ABuildingFOBCoreActor::MarkVulnerable() {
}

void ABuildingFOBCoreActor::MarkTargetable() {
}

bool ABuildingFOBCoreActor::IsActorWithinFOBBounds(AActor* Actor) const {
    return false;
}

bool ABuildingFOBCoreActor::IsActive() const {
    return false;
}

FTransform ABuildingFOBCoreActor::GetSimpleDeathFXTransform_Implementation() const {
    return FTransform{};
}

bool ABuildingFOBCoreActor::GetFOBBoundsCenterAndExtents(FVector& OutCenter, FVector& OutExtents) const {
    return false;
}

void ABuildingFOBCoreActor::GetFOBBoundsBoxOverlappedActors(TArray<ABuildingSMActor*>& OverlappedActors, bool bSortByDistanceFromCore) const {
}

void ABuildingFOBCoreActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingFOBCoreActor, bActive);
    DOREPLIFETIME(ABuildingFOBCoreActor, bTargetable);
    DOREPLIFETIME(ABuildingFOBCoreActor, bVulnerable);
    DOREPLIFETIME(ABuildingFOBCoreActor, OwnerNetID);
}

ABuildingFOBCoreActor::ABuildingFOBCoreActor() {
    this->SimpleBoundsBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SimpleBoundsBoxComp0"));
    this->TouchBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("TouchBoxComp0"));
    this->bRegisterAsGlobalGameplayEventListener = false;
    this->bConformTouchBoxToFOBContainmentBox = false;
    this->bActive = false;
    this->bTargetable = false;
    this->bVulnerable = false;
    this->SpawnedFromItemDef = NULL;
    this->SpawnedFromSpawnPad = NULL;
    this->bShowTargetableHUDIndicator = true;
}

