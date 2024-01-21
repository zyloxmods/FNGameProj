#include "FortHealthSet.h"
#include "Net/UnrealNetwork.h"

void UFortHealthSet::OnRep_Shield() {
}

void UFortHealthSet::OnRep_MaxHealth() {
}

void UFortHealthSet::OnRep_Health() {
}

void UFortHealthSet::OnRep_CurrentShield() {
}

void UFortHealthSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortHealthSet, Health);
    DOREPLIFETIME(UFortHealthSet, MaxHealth);
    DOREPLIFETIME(UFortHealthSet, CurrentShield);
    DOREPLIFETIME(UFortHealthSet, Shield);
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

