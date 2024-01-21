#include "FortWeaponRanged.h"
#include "Net/UnrealNetwork.h"

bool AFortWeaponRanged::UseScopeTargeting() const {
    return false;
}

bool AFortWeaponRanged::UseReducedAimAssist() const {
    return false;
}

bool AFortWeaponRanged::UseFirstPersonTargeting() const {
    return false;
}

void AFortWeaponRanged::TempHack_PlayOverheatedAnimation() {
}

bool AFortWeaponRanged::ShouldSpawnBulletShellFX() {
    return false;
}

bool AFortWeaponRanged::ShouldDisplayAmmoCounter() const {
    return false;
}

void AFortWeaponRanged::SetHomingTarget(AFortPawn* PlayerPawn) {
}





void AFortWeaponRanged::OnRep_OverheatState(EFortWeaponOverheatState PreviousOverheatState) {
}



bool AFortWeaponRanged::IsUsingScopeOrFirstPersonCamera() const {
    return false;
}

bool AFortWeaponRanged::IsUsingScope() const {
    return false;
}

bool AFortWeaponRanged::IsUsingFirstPersonCamera() const {
    return false;
}

bool AFortWeaponRanged::IsCachedIsProjectileWeapon_Implementation() const {
    return false;
}

void AFortWeaponRanged::InitializeBeamFX(UParticleSystemComponent* InBeamPSC) {
}

float AFortWeaponRanged::GetOverheatingMaxValue() const {
    return 0.0f;
}

float AFortWeaponRanged::GetCurrentOverheatValue() const {
    return 0.0f;
}

float AFortWeaponRanged::GetADSTransitionOutTime() {
    return 0.0f;
}

float AFortWeaponRanged::GetADSTransitionInTime() {
    return 0.0f;
}


void AFortWeaponRanged::EnableCornersReticle(bool bNewEnabled) {
}

void AFortWeaponRanged::EnableAltOuterReticle(bool bNewEnabled) {
}

void AFortWeaponRanged::EnableAltCenterReticle(bool bNewEnabled) {
}

void AFortWeaponRanged::DeactivateBeamFX() {
}

void AFortWeaponRanged::ClearHomingTarget() {
}


void AFortWeaponRanged::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponRanged, OverheatState);
    DOREPLIFETIME(AFortWeaponRanged, OverheatValue);
    DOREPLIFETIME(AFortWeaponRanged, TimeOverheatedBegan);
}

AFortWeaponRanged::AFortWeaponRanged() {
    this->TracerTemplate = NULL;
    this->bAllowAutomaticWeaponCatchup = true;
    this->CurrentNumBullets = 0;
    this->CurrentDamageStart = EFortAbilityTargetingSource::Camera;
    this->ProjectilePitchOffset = 0.00f;
    this->bShouldDisplayAmmoCounter = true;
    this->bShouldAimFromMuzzleAtCloseRange = false;
    this->bAlwaysAimFromMuzzle = false;
    this->bMaintainAimLocationDuringTargeting = false;
    this->bUseScopeTargeting = false;
    this->bUseFirstPersonTargeting = false;
    this->bUseReducedTargetingAimAssist = false;
    this->bPersistentFireFX = false;
    this->bUseBeamParticles = false;
    this->bUseImpactFXForProjectiles = false;
    this->bUseImpactFXForProjectileOverlaps = false;
    this->bUseImpactDecals = true;
    this->bUsePersistentBeam = false;
    this->ScopeImpactEffectDistanceOffset = 1536.00f;
    this->BeamParticleSystem = NULL;
    this->BeamSourceSocketName = TEXT("Muzzle");
    this->DecalLifespanMin = 2.30f;
    this->DecalLifespanMax = 3.20f;
    this->DecalMaterial = NULL;
    this->DecalTexture = NULL;
    this->SurfaceAcceptingDecals.AddDefaulted(5);
    this->ShellReloadCounter = 0;
    this->LastTargetingRotAdjustmentWeight = 1.00f;
    this->bUseAthenaRecoil = false;
    this->bUseAthenaPerfectADSAim = false;
    this->bFirstShotAccuracyCheckVehicleMovement = false;
    this->FirstShotAccuracyMinWaitTime = 0.50f;
    this->FireAnimation = NULL;
    this->FireDownsightsAnimation = NULL;
    this->FireFromCrouchWalkAnimation = NULL;
    this->CockingAnimation = NULL;
    this->WeaponFireMontage = NULL;
    this->WeaponFireDownsightsMontage = NULL;
    this->WeaponFireFromCrouchWalkMontage = NULL;
    this->WeaponCockingMontage = NULL;
    this->BeamPSC = NULL;
    this->CrouchWalkSpeedThreshold = 0.00f;
    this->bEnableRecoilDelay = true;
    this->OverheatState = EFortWeaponOverheatState::None;
    this->OverheatedAnimation = NULL;
    this->WeaponOverheatedAnimation = NULL;
    this->bCooldownWhileOverheated = true;
    this->OverheatValue = 0.00f;
    this->TimeHeatWasLastAdded = 0.00f;
    this->TimeOverheatedBegan = 0.00f;
}

