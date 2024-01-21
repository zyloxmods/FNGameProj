#include "FortWeaponAttrSet.h"
#include "Net/UnrealNetwork.h"

void UFortWeaponAttrSet::OnRep_WeaponVerticalRecoil() {
}

void UFortWeaponAttrSet::OnRep_WeaponSpreadReduction() {
}

void UFortWeaponAttrSet::OnRep_WeaponReloadSpeed() {
}

void UFortWeaponAttrSet::OnRep_WeaponRateOfFire() {
}

void UFortWeaponAttrSet::OnRep_WeaponOverheatMultiplier() {
}

void UFortWeaponAttrSet::OnRep_WeaponOverheatMaxMultiplier() {
}

void UFortWeaponAttrSet::OnRep_WeaponOverheatCoolingMultiplier() {
}

void UFortWeaponAttrSet::OnRep_WeaponOverheatCooldownMultiplier() {
}

void UFortWeaponAttrSet::OnRep_WeaponHorizontalRecoil() {
}

void UFortWeaponAttrSet::OnRep_WeaponChanceToNotConsumeAmmo() {
}

void UFortWeaponAttrSet::OnRep_WeaponAmmoClipSize() {
}

void UFortWeaponAttrSet::OnRep_CharacterItemDurabilityDecayModifier() {
}

void UFortWeaponAttrSet::OnRep_AccumulatedWeaponChanceToNotConsumeAmmo() {
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
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponOverheatMultiplier);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponOverheatMaxMultiplier);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponOverheatCoolingMultiplier);
    DOREPLIFETIME(UFortWeaponAttrSet, WeaponOverheatCooldownMultiplier);
    DOREPLIFETIME(UFortWeaponAttrSet, CharacterItemDurabilityDecayModifier);
}

UFortWeaponAttrSet::UFortWeaponAttrSet() {
}

