#include "FortWeaponRanged.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool AFortWeaponRanged::UseScopeTargeting() const {
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

bool AFortWeaponRanged::ShouldPlayShellFX() const {
    return false;
}

bool AFortWeaponRanged::ShouldPlayReloadFX() const {
    return false;
}

bool AFortWeaponRanged::ShouldPlayPersistentFireFX() const {
    return false;
}

bool AFortWeaponRanged::ShouldDisplayAmmoCounter() const {
    return false;
}

void AFortWeaponRanged::SetShellReloadCounter(int32 InputShellReloadCounter) {
}

void AFortWeaponRanged::SetHomingTarget(AFortPawn* PlayerPawn) {
}

void AFortWeaponRanged::SetDecalColorStart(FLinearColor InputDecalColorStart) {
}

void AFortWeaponRanged::SetDecalColorEnd(FLinearColor InputDecalColorEnd) {
}

UParticleSystem* AFortWeaponRanged::SetBeamParticleSystem(UParticleSystem* InputBeamParticleSystem) {
    return NULL;
}

UNiagaraSystem* AFortWeaponRanged::SetBeamNiagaraSystem(UNiagaraSystem* InputBeamNiagaraSystem) {
    return NULL;
}

void AFortWeaponRanged::ServerSetMuzzleTraceNearWall_Implementation(bool bIsNearWall) {
}
bool AFortWeaponRanged::ServerSetMuzzleTraceNearWall_Validate(bool bIsNearWall) {
    return true;
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

bool AFortWeaponRanged::IsOverheated() const {
    return false;
}

bool AFortWeaponRanged::IsCachedIsProjectileWeapon_Implementation() const {
    return false;
}

void AFortWeaponRanged::InitializeBeamFX(UParticleSystemComponent* InBeamPSC) {
}

bool AFortWeaponRanged::GetUseBeamParticles() const {
    return false;
}

void AFortWeaponRanged::GetUniqueMuzzleSocketNames(TArray<FName>& Names) const {
}

TSubclassOf<AFortTracerBase> AFortWeaponRanged::GetTracerTemplate() const {
    return NULL;
}

int32 AFortWeaponRanged::GetShellReloadCounter() const {
    return 0;
}

TArray<FWeightedBlendable> AFortWeaponRanged::GetScopePostProcessMaterial() const {
    return TArray<FWeightedBlendable>();
}


EFortWeaponOverheatState AFortWeaponRanged::GetOverheatState() const {
    return EFortWeaponOverheatState::None;
}

float AFortWeaponRanged::GetOverheatingMaxValue() const {
    return 0.0f;
}

float AFortWeaponRanged::GetCurrentOverheatValue() const {
    return 0.0f;
}

UParticleSystemComponent* AFortWeaponRanged::GetBeamPSC() const {
    return NULL;
}

UParticleSystem* AFortWeaponRanged::GetBeamParticleSystem() const {
    return NULL;
}

UNiagaraSystem* AFortWeaponRanged::GetBeamNiagaraSystem() const {
    return NULL;
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

bool AFortWeaponRanged::DoesWeaponOverheat() const {
    return false;
}

void AFortWeaponRanged::DeactivateBeamFX() {
}

void AFortWeaponRanged::ClientFixupOverheatValue_Implementation(const float InOverheatValue) {
}

void AFortWeaponRanged::ClearHomingTarget() {
}


void AFortWeaponRanged::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponRanged, bIsMuzzleTraceNearWall);
    DOREPLIFETIME(AFortWeaponRanged, OverheatState);
    DOREPLIFETIME(AFortWeaponRanged, TimeOverheatedBegan);
}

AFortWeaponRanged::AFortWeaponRanged() {
    this->TracerTemplate = NULL;
    this->bAllowAutomaticWeaponCatchup = true;
    this->CurrentNumBullets = 0;
    this->CurrentDamageStart = EFortAbilityTargetingSource::Camera;
    this->bShouldDisplayAmmoCounter = true;
    this->bShouldAimFromMuzzleAtCloseRange = false;
    this->bAlwaysAimFromMuzzle = false;
    this->bMaintainAimLocationDuringTargeting = false;
    this->bUseScopeTargeting = false;
    this->bUseFirstPersonTargeting = false;
    this->bPersistentFireFX = false;
    this->bUseBeamParticles = false;
    this->bUseImpactFXForProjectiles = false;
    this->bUseImpactFXForProjectileOverlaps = false;
    this->bUseImpactDecals = true;
    this->bUsePersistentBeam = false;
    this->bIsMuzzleTraceNearWall = false;
    this->MuzzleTraceNearWallThreshold = 1;
    this->ScopeImpactEffectDistanceOffset = 1;
    this->BeamParticleSystem = NULL;
    this->BeamSourceSocketName = TEXT("Muzzle");
    this->FortSpawnPropOverride = NULL;
    this->FortSpawnPropAnimOverride = NULL;
    this->DecalLifespanMin = 1;
    this->DecalLifespanMax = 1;
    this->DecalMaterial = NULL;
    this->DecalTexture = NULL;
    this->SurfaceAcceptingDecals.AddDefaulted(5);
    this->ShellReloadCounter = 0;
    this->LastTargetingRotAdjustmentWeight = 1;
    this->ScopePostProcessEnabled = false;
    this->ScopePostProcessBlendWeight = 1;
    this->BeamNiagaraSystemInstance = NULL;
    this->bUseAthenaRecoil = false;
    this->bUseAthenaPerfectADSAim = false;
    this->bFirstShotAccuracyCheckVehicleMovement = false;
    this->FirstShotAccuracyMinWaitTime = 1;
    this->FireAnimation = NULL;
    this->FireDownsightsAnimation = NULL;
    this->FireFromCrouchWalkAnimation = NULL;
    this->CockingAnimation = NULL;
    this->WeaponFireMontage = NULL;
    this->WeaponFireDownsightsMontage = NULL;
    this->WeaponFireFromCrouchWalkMontage = NULL;
    this->WeaponCockingMontage = NULL;
    this->BeamPSC = NULL;
    this->CrouchWalkSpeedThreshold = 1;
    this->bEnableRecoilDelay = true;
    this->OverheatState = EFortWeaponOverheatState::None;
    this->OverheatedAnimation = NULL;
    this->WeaponOverheatedAnimation = NULL;
    this->bCooldownWhileOverheated = true;
    this->OverheatValue = 1;
    this->TimeHeatWasLastAdded = 1;
    this->TimeOverheatedBegan = 1;
    this->bCacheAimPointOnFire = false;
}

