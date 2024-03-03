#include "FortSpaghettiTowhookAttachableProjectile.h"
#include "Net/UnrealNetwork.h"

FVector AFortSpaghettiTowhookAttachableProjectile::GetRopeAttachLocation() const {
    return FVector{};
}

void AFortSpaghettiTowhookAttachableProjectile::DestroyProjectile() {
}

void AFortSpaghettiTowhookAttachableProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSpaghettiTowhookAttachableProjectile, OwningVehicle);
}

AFortSpaghettiTowhookAttachableProjectile::AFortSpaghettiTowhookAttachableProjectile() {
    this->RopeAttachSocketName = TEXT("RopeAttach");
    this->CollisionProfileNameOverride = TEXT("FortProjectileHitAllPawns");
    this->OwningVehicle = NULL;
}

