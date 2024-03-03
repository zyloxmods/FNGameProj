#include "FortDamageSet.h"
#include "Net/UnrealNetwork.h"

void UFortDamageSet::OnRep_ZoneCritMultiplier(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_WeaponSkill(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_StunTime(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_ShieldDamageScale(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_OutgoingBaseImpactDamage(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_OutgoingBaseEnvironmentalDamage(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_OutgoingBaseDamage(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_OutgoingBaseAbilityDamageMultiplier(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_OutgoingAbilityDamage(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_KnockbackZAngle(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_KnockbackMagnitude(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_HealthDamageScale(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_DiceCritMultiplier(const FFortGameplayAttributeData& OldValue) {
}

void UFortDamageSet::OnRep_DiceCritChance(const FFortGameplayAttributeData& OldValue) {
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

