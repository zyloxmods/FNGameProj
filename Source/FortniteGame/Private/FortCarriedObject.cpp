#include "FortCarriedObject.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

void AFortCarriedObject::ReturnToSpawnPoint() {
}

void AFortCarriedObject::OnRep_HolderInfo(FCarriedObjectAttachmentInfo& PreviousInfo) {
}

AActor* AFortCarriedObject::GetHoldingActor() const {
    return NULL;
}

void AFortCarriedObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCarriedObject, HolderInfo);
    DOREPLIFETIME(AFortCarriedObject, Team);
    DOREPLIFETIME(AFortCarriedObject, SpawnPointActor);
}

AFortCarriedObject::AFortCarriedObject() {
    this->ProjectileComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp0"));
    this->bPickupOnTouch = false;
    this->Team = 0;
    this->SpawnPointActor = NULL;
}

