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
    TracerTemplate = NULL;
    bAllowAutomaticWeaponCatchup = true;
    CurrentNumBullets = 0;
    CurrentDamageStart = EFortAbilityTargetingSource::Camera;
    bShouldDisplayAmmoCounter = true;
    bShouldAimFromMuzzleAtCloseRange = false;
    bAlwaysAimFromMuzzle = false;
    bMaintainAimLocationDuringTargeting = false;
    bUseScopeTargeting = false;
    bUseFirstPersonTargeting = false;
    bPersistentFireFX = false;
    bUseBeamParticles = false;
    bUseImpactFXForProjectiles = false;
    bUseImpactFXForProjectileOverlaps = false;
    bUseImpactDecals = true;
    bUsePersistentBeam = false;
    bIsMuzzleTraceNearWall = false;
    MuzzleTraceNearWallThreshold = 1;
    ScopeImpactEffectDistanceOffset = 1;
    BeamParticleSystem = NULL;
    BeamSourceSocketName = TEXT("Muzzle");
    FortSpawnPropOverride = NULL;
    FortSpawnPropAnimOverride = NULL;
    DecalLifespanMin = 1;
    DecalLifespanMax = 1;
    DecalMaterial = NULL;
    DecalTexture = NULL;
    SurfaceAcceptingDecals.AddDefaulted(5);
    ShellReloadCounter = 0;
    LastTargetingRotAdjustmentWeight = 1;
    ScopePostProcessEnabled = false;
    ScopePostProcessBlendWeight = 1;
    BeamNiagaraSystemInstance = NULL;
    bUseAthenaRecoil = false;
    bUseAthenaPerfectADSAim = false;
    bFirstShotAccuracyCheckVehicleMovement = false;
    FirstShotAccuracyMinWaitTime = 1;
    FireAnimation = NULL;
    FireDownsightsAnimation = NULL;
    FireFromCrouchWalkAnimation = NULL;
    CockingAnimation = NULL;
    WeaponFireMontage = NULL;
    WeaponFireDownsightsMontage = NULL;
    WeaponFireFromCrouchWalkMontage = NULL;
    WeaponCockingMontage = NULL;
    BeamPSC = NULL;
    CrouchWalkSpeedThreshold = 1;
    bEnableRecoilDelay = true;
    OverheatState = EFortWeaponOverheatState::None;
    OverheatedAnimation = NULL;
    WeaponOverheatedAnimation = NULL;
    bCooldownWhileOverheated = true;
    OverheatValue = 1;
    TimeHeatWasLastAdded = 1;
    TimeOverheatedBegan = 1;
    bCacheAimPointOnFire = false;
}

