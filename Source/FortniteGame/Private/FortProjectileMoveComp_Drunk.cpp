#include "FortProjectileMoveComp_Drunk.h"
#include "Net/UnrealNetwork.h"

void UFortProjectileMoveComp_Drunk::SetDrunkConfig(const FProjectileMovementDrunkConfig& NewConfig) {
}

void UFortProjectileMoveComp_Drunk::OnRep_RandSeed() {
}

void UFortProjectileMoveComp_Drunk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortProjectileMoveComp_Drunk, RandSeed);
}

UFortProjectileMoveComp_Drunk::UFortProjectileMoveComp_Drunk() {
    DrunkTravelTime = 1;
    bDrunkDirectionChange = false;
    RandSeed = 0;
    DrunkDirectionChangeTimer = 1;
    DrunkHomingDirectionChangeTimer = 1;
    DrunkBlendOutMaxRange = 1;
    bDoingTimeBasedBlendOut = false;
    CachedBlendAlpha = 1;
}

