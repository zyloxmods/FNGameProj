#include "FortWeaponAttrSet.h"
#include "Net/UnrealNetwork.h"

void UFortWeaponAttrSet::OnRep_WeaponVerticalRecoil(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponSpreadReduction(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponReloadSpeed(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponRateOfFire(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponOverheatMultiplier(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponOverheatMaxMultiplier(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponOverheatCoolingMultiplier(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponOverheatCooldownMultiplier(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponHorizontalRecoil(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponChargeRate(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponChanceToNotConsumeAmmo(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_WeaponAmmoClipSize(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_CharacterItemDurabilityDecayModifier(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::OnRep_AccumulatedWeaponChanceToNotConsumeAmmo(const FFortGameplayAttributeData& OldValue) {
}

void UFortWeaponAttrSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponChanceToNotConsumeAmmo);
    DOREPLIFETIME(UFortWeaponAttrSet, AccumulatedWeaponChanceToNotConsumeAmmo);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponRateOfFire);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponHorizontalRecoil);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponVerticalRecoil);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponSpreadReduction);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponReloadSpeed);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponAmmoClipSize);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponChargeRate);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponOverheatMultiplier);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponOverheatMaxMultiplier);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponOverheatCoolingMultiplier);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponOverheatCooldownMultiplier);
    DOREPLIFETIME(UFortWeaponAttrSet, CharacterItemDurabilityDecayModifier);
}

UFortWeaponAttrSet::UFortWeaponAttrSet() {
}

