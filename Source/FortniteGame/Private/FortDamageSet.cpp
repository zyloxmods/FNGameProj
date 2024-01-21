#include "FortDamageSet.h"
#include "Net/UnrealNetwork.h"

void UFortDamageSet::OnRep_ZoneCritMultiplier() {
}

void UFortDamageSet::OnRep_WeaponSkill() {
}

void UFortDamageSet::OnRep_StunTime() {
}

void UFortDamageSet::OnRep_ShieldDamageScale() {
}

void UFortDamageSet::OnRep_OutgoingBaseImpactDamage() {
}

void UFortDamageSet::OnRep_OutgoingBaseEnvironmentalDamage() {
}

void UFortDamageSet::OnRep_OutgoingBaseDamage() {
}

void UFortDamageSet::OnRep_OutgoingBaseAbilityDamageMultiplier() {
}

void UFortDamageSet::OnRep_OutgoingAbilityDamage() {
}

void UFortDamageSet::OnRep_KnockbackZAngle() {
}

void UFortDamageSet::OnRep_KnockbackMagnitude() {
}

void UFortDamageSet::OnRep_HealthDamageScale() {
}

void UFortDamageSet::OnRep_DiceCritMultiplier() {
}

void UFortDamageSet::OnRep_DiceCritChance() {
}

void UFortDamageSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortDamageSet, OutgoingBaseDamage);
    DOREPLIFETIME(UFortDamageSet, OutgoingBaseEnvironmentalDamage);
    DOREPLIFETIME(UFortDamageSet, OutgoingBaseImpactDamage);
    DOREPLIFETIME(UFortDamageSet, OutgoingAbilityDamage);
    DOREPLIFETIME(UFortDamageSet, OutgoingBaseAbilityDamageMultiplier);
    DOREPLIFETIME(UFortDamageSet, ZoneCritMultiplier);
    DOREPLIFETIME(UFortDamageSet, DiceCritChance);
    DOREPLIFETIME(UFortDamageSet, DiceCritMultiplier);
    DOREPLIFETIME(UFortDamageSet, KnockbackMagnitude);
    DOREPLIFETIME(UFortDamageSet, KnockbackZAngle);
    DOREPLIFETIME(UFortDamageSet, StunTime);
    DOREPLIFETIME(UFortDamageSet, WeaponSkill);
    DOREPLIFETIME(UFortDamageSet, ShieldDamageScale);
    DOREPLIFETIME(UFortDamageSet, HealthDamageScale);
}

UFortDamageSet::UFortDamageSet() {
}

