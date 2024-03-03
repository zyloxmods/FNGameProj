#include "FortAdvancedMeleeComponent.h"
#include "Net/UnrealNetwork.h"

void UFortAdvancedMeleeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAdvancedMeleeComponent, FightListHandles);
}

UFortAdvancedMeleeComponent::UFortAdvancedMeleeComponent() {
    this->AttackRangePrimary = 1;
    this->AttackRangeJab = 1;
    this->AttackRangeSpin = 1;
    this->AttackRangeSecondary = 1;
}

