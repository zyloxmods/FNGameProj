#include "FortBuildingEnergyComponentAttrSet.h"
#include "Net/UnrealNetwork.h"

void UFortBuildingEnergyComponentAttrSet::OnRep_EnergyCost(const FFortGameplayAttributeData& OldValue) {
}

void UFortBuildingEnergyComponentAttrSet::OnRep_EnergyCapacity(const FFortGameplayAttributeData& OldValue) {
}

void UFortBuildingEnergyComponentAttrSet::OnRep_CurrentEnergyLevel(const FFortGameplayAttributeData& OldValue) {
}

void UFortBuildingEnergyComponentAttrSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortBuildingEnergyComponentAttrSet, CurrentEnergyLevel);
    DOREPLIFETIME(UFortBuildingEnergyComponentAttrSet, EnergyCost);
    DOREPLIFETIME(UFortBuildingEnergyComponentAttrSet, EnergyCapacity);
}

UFortBuildingEnergyComponentAttrSet::UFortBuildingEnergyComponentAttrSet() {
}

