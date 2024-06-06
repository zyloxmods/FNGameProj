#include "FortProjectileAthena.h"
#include "Net/UnrealNetwork.h"

void AFortProjectileAthena::ServerNotifyPawnHit_Implementation(FHitResult Hit, int32 Context) {
}
bool AFortProjectileAthena::ServerNotifyPawnHit_Validate(FHitResult Hit, int32 Context) {
    return true;
}

void AFortProjectileAthena::ServerNotifyEndOverlap_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
}
bool AFortProjectileAthena::ServerNotifyEndOverlap_Validate(AActor* OtherActor, UPrimitiveComponent* OtherComp) {
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
    bExplodeOnPawnHit = false;
    bNoCollisionForNonOwningClients = false;
    bIgnoreActorsAttachedToFiringPawn = true;
    bProcessLocalHits = false;
    TimeToWaitForPawnHitBeforeKillOnServer = 1;
    PredictedHitActor = NULL;
    PredictedHitComp = NULL;
}

