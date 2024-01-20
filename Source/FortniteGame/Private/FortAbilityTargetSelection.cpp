#include "FortAbilityTargetSelection.h"

FFortAbilityTargetSelection::FFortAbilityTargetSelection() {
    this->Shape = EFortTargetSelectionShape::Sphere;
    this->TestType = EFortTargetSelectionTestType::Overlap;
    this->PrimarySource = EFortAbilityTargetingSource::Camera;
    this->SecondarySource = EFortAbilityTargetingSource::Camera;
    this->bExcludeObstructedByWorld = false;
    this->bShouldAttachedActorsObstructTarget = false;
    this->bCreateHitResultWhenNoTargetsFound = false;
    this->bUseProjectileRotationForDamageZones = false;
    this->TargetSelectionUsage = EFortAbilityTargetSelectionUsage::BothTargetingAndCanHit;
    this->MaxTargets = 0;
}

