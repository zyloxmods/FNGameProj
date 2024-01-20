#include "FortWeap_WannaGun.h"
#include "Net/UnrealNetwork.h"

void AFortWeap_WannaGun::OnRep_LastHitActorClass() {
}

void AFortWeap_WannaGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeap_WannaGun, LastHitActorScale);
    DOREPLIFETIME(AFortWeap_WannaGun, LastHitActorRotation);
    DOREPLIFETIME(AFortWeap_WannaGun, LastHitActorClass);
}

AFortWeap_WannaGun::AFortWeap_WannaGun() {
    this->LastHitActorClass = NULL;
}

