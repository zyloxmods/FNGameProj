#include "FortProjectileAthena.h"
#include "Net/UnrealNetwork.h"

void AFortProjectileAthena::ServerNotifyPawnHit_Implementation(FHitResult Hit) {
}
bool AFortProjectileAthena::ServerNotifyPawnHit_Validate(FHitResult Hit) {
    return true;
}

void AFortProjectileAthena::OnRep_PawnHitResult() {
}

void AFortProjectileAthena::OnRep_FireStart() {
}

void AFortProjectileAthena::KillAfterNoPawnHit() {
}

void AFortProjectileAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortProjectileAthena, FireStartLoc);
    DOREPLIFETIME(AFortProjectileAthena, PawnHitResult);
}

AFortProjectileAthena::AFortProjectileAthena() {
    this->bExplodeOnPawnHit = false;
    this->bNoCollisionForNonOwningClients = false;
    this->bIgnoreActorsAttachedToFiringPawn = true;
    this->TimeToWaitForPawnHitBeforeKillOnServer = 4.00f;
}

