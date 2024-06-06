#include "FortAbilityTargetSelection.h"

FFortAbilityTargetSelection::FFortAbilityTargetSelection() {
    Shape = EFortTargetSelectionShape::Sphere;
    TestType = EFortTargetSelectionTestType::Overlap;
    PrimarySource = EFortAbilityTargetingSource::Camera;
    SecondarySource = EFortAbilityTargetingSource::Camera;
    bAlignShapeEdgeToSourceLocation = false;
    bExcludeObstructedByWorld = false;
    bShouldAttachedActorsObstructTarget = false;
    bCreateHitResultWhenNoTargetsFound = false;
    bUseProjectileRotationForDamageZones = false;
    TargetSelectionUsage = EFortAbilityTargetSelectionUsage::BothTargetingAndCanHit;
    MaxTargets = 0;
}

