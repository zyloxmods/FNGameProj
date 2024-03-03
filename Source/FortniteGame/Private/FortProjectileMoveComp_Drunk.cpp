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
    this->DrunkTravelTime = 1;
    this->bDrunkDirectionChange = false;
    this->RandSeed = 0;
    this->DrunkDirectionChangeTimer = 1;
    this->DrunkHomingDirectionChangeTimer = 1;
    this->DrunkBlendOutMaxRange = 1;
    this->bDoingTimeBasedBlendOut = false;
    this->CachedBlendAlpha = 1;
}

