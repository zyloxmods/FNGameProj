#include "FortHealthSet.h"
#include "Net/UnrealNetwork.h"

void UFortHealthSet::OnRep_SignalInStorm(const FFortGameplayAttributeData& OldValue) {
}

void UFortHealthSet::OnRep_Shield(const FFortGameplayAttributeData& OldValue) {
}

void UFortHealthSet::OnRep_MaxSignalInStorm(const FFortGameplayAttributeData& OldValue) {
}

void UFortHealthSet::OnRep_MaxHealth(const FFortGameplayAttributeData& OldValue) {
}

void UFortHealthSet::OnRep_Health(const FFortGameplayAttributeData& OldValue) {
}

void UFortHealthSet::OnRep_CurrentShield(const FFortGameplayAttributeData& OldValue) {
}

void UFortHealthSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortHealthSet, Health);
    DOREPLIFETIME(UFortHealthSet, MaxHealth);
    DOREPLIFETIME(UFortHealthSet, CurrentShield);
    DOREPLIFETIME(UFortHealthSet, Shield);
    DOREPLIFETIME(UFortHealthSet, SignalInStorm);
    DOREPLIFETIME(UFortHealthSet, MaxSignalInStorm);
    DOREPLIFETIME(UFortHealthSet, Armor);
    DOREPLIFETIME(UFortHealthSet, DamageResistance);
    DOREPLIFETIME(UFortHealthSet, DamageVulnerability);
    DOREPLIFETIME(UFortHealthSet, ReflectDamageAbsolute);
    DOREPLIFETIME(UFortHealthSet, ReflectDamageFromSource);
    DOREPLIFETIME(UFortHealthSet, HealingSourceBaseMultiplier);
    DOREPLIFETIME(UFortHealthSet, HealingSource);
    DOREPLIFETIME(UFortHealthSet, HealingBonusTarget);
}

UFortHealthSet::UFortHealthSet() {
}

