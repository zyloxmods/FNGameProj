#include "FortWeaponRangedItemDefinition.h"
#include "Templates/SubclassOf.h"

bool UFortWeaponRangedItemDefinition::UseOnTouch() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldUsePerfectAimWhenTargetingMinSpread() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldUseNativeWeaponTrace() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldTraceThroughWorld() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldTraceThroughPawns() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldSpawnBulletShellFX() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldShowReticleHitNotifyAtImpactLocation() const {
    return false;
}

TSubclassOf<AFortProjectileBase> UFortWeaponRangedItemDefinition::GetProjectileTemplate() const {
    return NULL;
}

UParticleSystem* UFortWeaponRangedItemDefinition::GetBulletShellFXTemplate() const {
    return NULL;
}

bool UFortWeaponRangedItemDefinition::ForceProjectileTooltip() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::DoNotAllowDoublePump() const {
    return false;
}

UFortWeaponRangedItemDefinition::UFortWeaponRangedItemDefinition() {
    this->bUseNativeWeaponTrace = true;
    this->bTraceThroughPawns = false;
    this->bTraceThroughWorld = false;
    this->bShouldSpawnBulletShellFX = false;
    this->bShouldUsePerfectAimWhenTargetingMinSpread = true;
    this->bDoNotAllowDoublePump = false;
    this->bUseOnTouch = false;
    this->bAllowADSInAir = false;
    this->bShowReticleHitNotifyAtImpactLocation = false;
    this->bForceProjectileTooltip = false;
}

