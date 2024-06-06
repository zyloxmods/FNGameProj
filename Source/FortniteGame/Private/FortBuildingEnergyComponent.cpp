#include "FortBuildingEnergyComponent.h"
#include "Net/UnrealNetwork.h"

void UFortBuildingEnergyComponent::UpdateRegenRateAttr(float NewRegenRate) {
}

void UFortBuildingEnergyComponent::UpdateEnergyRechargeDelayAttr(float NewEnergyRechargeDelay) {
}

void UFortBuildingEnergyComponent::UpdateEnergyCostAttr(float NewEnergyCost) {
}

void UFortBuildingEnergyComponent::UpdateEnergyCapacityAttr(float NewEnergyCapacity) {
}

void UFortBuildingEnergyComponent::UpdateCurrentEnergyLevelAttr(float NewEnergyLevel) {
}

void UFortBuildingEnergyComponent::OnRep_EnergyAttrSet() {
}


void UFortBuildingEnergyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortBuildingEnergyComponent, EnergyComponentAttrSet);
}

UFortBuildingEnergyComponent::UFortBuildingEnergyComponent() {
    EnergyComponentAttrSet = NULL;
    EnergyComponentRechargeAbility = NULL;
}

