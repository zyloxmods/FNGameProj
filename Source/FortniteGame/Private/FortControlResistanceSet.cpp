#include "FortControlResistanceSet.h"
#include "Net/UnrealNetwork.h"

void UFortControlResistanceSet::OnRep_MaxControlResistance(const FFortGameplayAttributeData& OldValue) {
}

void UFortControlResistanceSet::OnRep_ControlResistance(const FFortGameplayAttributeData& OldValue) {
}

void UFortControlResistanceSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControlResistanceSet, ControlResistance);
    DOREPLIFETIME(UFortControlResistanceSet, MaxControlResistance);
    DOREPLIFETIME(UFortControlResistanceSet, ControlResistanceRegenRate);
    DOREPLIFETIME(UFortControlResistanceSet, ControlResistanceRegenDelay);
    DOREPLIFETIME(UFortControlResistanceSet, ControlResistanceRegenThreshold);
    DOREPLIFETIME(UFortControlResistanceSet, KnockbackThreshold);
    DOREPLIFETIME(UFortControlResistanceSet, KnockbackMultiplier);
    DOREPLIFETIME(UFortControlResistanceSet, ImpactDamageResistance);
    DOREPLIFETIME(UFortControlResistanceSet, ImpactDamageMultiplier);
}

UFortControlResistanceSet::UFortControlResistanceSet() {
}

