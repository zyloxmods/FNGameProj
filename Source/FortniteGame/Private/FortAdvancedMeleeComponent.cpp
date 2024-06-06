#include "FortAdvancedMeleeComponent.h"
#include "Net/UnrealNetwork.h"

void UFortAdvancedMeleeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAdvancedMeleeComponent, FightListHandles);
}

UFortAdvancedMeleeComponent::UFortAdvancedMeleeComponent() {
    AttackRangePrimary = 1;
    AttackRangeJab = 1;
    AttackRangeSpin = 1;
    AttackRangeSecondary = 1;
}

