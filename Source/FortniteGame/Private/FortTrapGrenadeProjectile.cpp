#include "FortTrapGrenadeProjectile.h"
#include "Net/UnrealNetwork.h"

void AFortTrapGrenadeProjectile::OnRep_DecoTool() {
}

void AFortTrapGrenadeProjectile::InitializeProjectileDecoHelperAndTool() {
}

UFortContextTrapItemDefinition* AFortTrapGrenadeProjectile::GetTrapDefinition() {
    return NULL;
}

void AFortTrapGrenadeProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTrapGrenadeProjectile, ProjectileDecoTool);
}

AFortTrapGrenadeProjectile::AFortTrapGrenadeProjectile() {
    this->ProjectileDecoTool = NULL;
    this->ProjectileDecoHelper = NULL;
    this->TrapDefinition = NULL;
}

