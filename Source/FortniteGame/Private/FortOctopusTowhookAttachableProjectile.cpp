#include "FortOctopusTowhookAttachableProjectile.h"
#include "Net/UnrealNetwork.h"

FVector AFortOctopusTowhookAttachableProjectile::GetRopeAttachLocation() const {
    return FVector{};
}

void AFortOctopusTowhookAttachableProjectile::DestroyProjectile() {
}

void AFortOctopusTowhookAttachableProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortOctopusTowhookAttachableProjectile, OwningVehicle);
}

AFortOctopusTowhookAttachableProjectile::AFortOctopusTowhookAttachableProjectile() {
    RopeAttachSocketName = TEXT("RopeAttach");
    CollisionProfileNameOverride = TEXT("FortProjectileHitAllPawns");
    OwningVehicle = NULL;
}

