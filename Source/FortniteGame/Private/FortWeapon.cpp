#include "FortWeapon.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "Net/UnrealNetwork.h"

void AFortWeapon::UseWeaponDurability(float DurabilityScale) {
}

void AFortWeapon::UpdateDamageStartLocation() {
}

void AFortWeapon::StopWeaponFireFX() {
}

void AFortWeapon::StopForceFeedback() {
}

void AFortWeapon::SetWeaponVisibility(bool bDesiredVisibility, bool bForceUpdate) {
}

void AFortWeapon::SetShouldDrawNativeReticle(bool bInShouldDrawReticle) {
}

void AFortWeapon::SetFireSoundPitchMultiplier(const float NewPitch) {
}

void AFortWeapon::ServerSetChargeState_Implementation(uint8 NewState) {
}
bool AFortWeapon::ServerSetChargeState_Validate(uint8 NewState) {
    return true;
}

void AFortWeapon::ServerResetShotReport_Implementation() {
}
bool AFortWeapon::ServerResetShotReport_Validate() {
    return true;
}

void AFortWeapon::ServerReleaseWeaponAbility_Implementation(const FGameplayAbilitySpecHandle& SpecHandle) {
}
bool AFortWeapon::ServerReleaseWeaponAbility_Validate(const FGameplayAbilitySpecHandle& SpecHandle) {
    return true;
}

void AFortWeapon::ResetTempWeaponMaterialOverride() {
}

void AFortWeapon::Reload() {
}

void AFortWeapon::PlayWeaponFireFX(bool bSecondaryFire) {
}

void AFortWeapon::PlayReloadFX(EFortReloadFXState ReloadStage) {
}

void AFortWeapon::PlayNativeImpactFX(const FHitResult& HitResult, const FGameplayCueParameters& GameplayCueParameters) {
}

void AFortWeapon::PlayForceFeedback(bool bSecondaryFire, bool bPersistentFire, bool bImpact) {
}


void AFortWeapon::OnWeaponMontageStarted(UAnimMontage* WeaponMontage) {
}

void AFortWeapon::OnWeaponMontageBlendingOut(UAnimMontage* WeaponMontage, bool bInterrupted) {
}






void AFortWeapon::OnRep_ReplicatedWeaponData() {
}

void AFortWeapon::OnRep_ReplicatedCosmeticOverrideWeaponData() {
}

void AFortWeapon::OnRep_ReplicatedAppliedAlterations() {
}

void AFortWeapon::OnRep_PrimaryAbilitySpecHandle() {
}

void AFortWeapon::OnRep_EquippedWeaponDestroyWrapper() {
}

void AFortWeapon::OnRep_ChargeStatusPack() {
}

void AFortWeapon::OnRep_AmmoCount(int32 OldAmmoCount) {
}






void AFortWeapon::OnPawnMontageStarted(UAnimMontage* PawnMontage) {
}

void AFortWeapon::OnPawnMontageBlendingOut(UAnimMontage* PawnMontage, bool bInterrupted) {
}











void AFortWeapon::K2_ConsumeAmmo(int32 Quantity) {
}

bool AFortWeapon::IsSuppressed() const {
    return false;
}

bool AFortWeapon::IsReloading() const {
    return false;
}

bool AFortWeapon::IsProjectileWeapon() const {
    return false;
}

bool AFortWeapon::IsEquipped() const {
    return false;
}

bool AFortWeapon::HasInfiniteAmmo() const {
    return false;
}

float AFortWeapon::GetWeaponRateOfFireModifier() {
    return 0.0f;
}

UFortWeaponAnimSet* AFortWeapon::GetWeaponPawnAnimSet() const {
    return NULL;
}

float AFortWeapon::GetTimeToNextFire() const {
    return 0.0f;
}

bool AFortWeapon::GetSupportsAutoFireAtReticleTargetMode() const {
    return false;
}

FColor AFortWeapon::GetReticleColor() const {
    return FColor{};
}

int32 AFortWeapon::GetRemainingAmmo() const {
    return 0;
}

float AFortWeapon::GetReloadTime() const {
    return 0.0f;
}

float AFortWeapon::GetReloadProgress() const {
    return 0.0f;
}

float AFortWeapon::GetRange() const {
    return 0.0f;
}

float AFortWeapon::GetProjectileSpeed(float ChargePercent) const {
    return 0.0f;
}

bool AFortWeapon::GetPickupInstigatorData(int32& InstigatorHandle, FPickupInstigatorData& InstigatorData) const {
    return false;
}

FTransform AFortWeapon::GetMuzzleSocketTransform() const {
    return FTransform{};
}

FVector AFortWeapon::GetMuzzleLocation_Implementation() const {
    return FVector{};
}

float AFortWeapon::GetMeleeAttackPlayRate() {
    return 0.0f;
}

int32 AFortWeapon::GetMagazineAmmoCount() const {
    return 0;
}

int32 AFortWeapon::GetLocalRemainingAmmo() const {
    return 0;
}

int32 AFortWeapon::GetLocalMagazineAmmoCount() const {
    return 0;
}

FGuid AFortWeapon::GetInventoryGUID() const {
    return FGuid{};
}

TArray<FWeaponHudData> AFortWeapon::GetHudKeyActionData() const {
    return TArray<FWeaponHudData>();
}

float AFortWeapon::GetFiringRate() const {
    return 0.0f;
}

FVector AFortWeapon::GetDamageStartLocation(FVector& AimDir) const {
    return FVector{};
}

float AFortWeapon::GetCurrentMaxChargePercent() const {
    return 0.0f;
}

TEnumAsByte<EFortWeaponCoreAnimation::Type> AFortWeapon::GetCoreAnimation() const {
    return EFortWeaponCoreAnimation::Melee;
}

float AFortWeapon::GetChargeToMinPercent() const {
    return 0.0f;
}

float AFortWeapon::GetChargePercent() const {
    return 0.0f;
}

int32 AFortWeapon::GetBulletsPerClip() const {
    return 0;
}

int32 AFortWeapon::GetAmmoCostPerFire(float ChargePercentage) const {
    return 0;
}

TArray<UFortAlterationItemDefinition*> AFortWeapon::GetAlterations() const {
    return TArray<UFortAlterationItemDefinition*>();
}

void AFortWeapon::GameplayCue_Weapons_Activation(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortWeapon::GameplayCue_Impact(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

FColor AFortWeapon::DetermineReticleColor() {
    return FColor{};
}

void AFortWeapon::ClientReportShotFlags_Implementation(uint32 ShotFlags, int32 ShotIndex) {
}

void AFortWeapon::ClientGivenTo_Implementation(APawn* P) {
}

void AFortWeapon::CheckPendingFire() {
}

void AFortWeapon::CancelActiveAbility() {
}

void AFortWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeapon, bIsEquippingWeapon);
    DOREPLIFETIME(AFortWeapon, bIsReloadingWeapon);
    DOREPLIFETIME(AFortWeapon, bIsChargingWeapon);
    DOREPLIFETIME(AFortWeapon, WeaponData);
    DOREPLIFETIME(AFortWeapon, CosmeticOverrideWeaponData);
    DOREPLIFETIME(AFortWeapon, EquippedWeaponDestroyWrapperRepCounter);
    DOREPLIFETIME(AFortWeapon, ItemEntryGuid);
    DOREPLIFETIME(AFortWeapon, WeaponLevel);
    DOREPLIFETIME(AFortWeapon, AmmoCount);
    DOREPLIFETIME(AFortWeapon, ChargeStatusPack);
    DOREPLIFETIME(AFortWeapon, ActiveAbility);
    DOREPLIFETIME(AFortWeapon, PrimaryAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, SecondaryAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, ReloadAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, ImpactAbilitySpecHandle);
    DOREPLIFETIME(AFortWeapon, AppliedAlterations);
}

AFortWeapon::AFortWeapon() {
    this->bIsEquippingWeapon = false;
    this->bIsReloadingWeapon = false;
    this->bIsChargingWeapon = false;
    this->WeaponData = NULL;
    this->CosmeticOverrideWeaponData = NULL;
    this->bImpactFXAttachedToHitActor = false;
    this->HitNotifyAudioBank = NULL;
    this->bRemoveAbilitiesWhenRemovedFromInventory = true;
    this->EquippedWeaponDestroyWrapperRepCounter = 0;
    this->PersistentFXStartTime = 0.00f;
    this->MinimumTimeForPersistentFX = 0.00f;
    this->bDontReduceWorkOnWeapon = false;
    this->bShouldDrawNativeReticle = true;
    this->ReticleImage = NULL;
    this->AutoFireReticleImage = NULL;
    this->HitNotifyReticleImage = NULL;
    this->HitNotifyLocationReticleImage = NULL;
    this->HitNotifyDisplayDuration = 0.00f;
    this->ReticleCenterImage = NULL;
    this->ReticleCenterPerfectAimImage = NULL;
    this->ReticleInvalidTargetImage = NULL;
    this->MuzzleBlockedReticleImage = NULL;
    this->ReticleAltCenterImage = NULL;
    this->ReticleOuterImage = NULL;
    this->ReticleAltOuterImage = NULL;
    this->ReticleDefaultPrimaryStrikeAngle = 0.00f;
    this->ReticleDefaultSecondaryStrikeAngle = 0.00f;
    this->bSupportsAutofireAtReticleTarget = true;
    this->CameraBase3PClass = NULL;
    this->CameraTargeting3PClass = NULL;
    this->CameraBase1PClass = NULL;
    this->CameraTargeting1PClass = NULL;
    this->DestroyedSound = NULL;
    this->OutOfAmmoSound = NULL;
    this->ReloadSounds[0] = NULL;
    this->ReloadSounds[1] = NULL;
    this->ReloadSounds[2] = NULL;
    this->PrimaryFireSound1P = NULL;
    this->PrimaryFireSound[0] = NULL;
    this->PrimaryFireSound[1] = NULL;
    this->PrimaryFireSound[2] = NULL;
    this->PrimaryFireStopSound1P = NULL;
    this->PrimaryFireStopSound[0] = NULL;
    this->PrimaryFireStopSound[1] = NULL;
    this->PrimaryFireStopSound[2] = NULL;
    this->SecondaryFireSound[0] = NULL;
    this->SecondaryFireSound[1] = NULL;
    this->SecondaryFireSound[2] = NULL;
    this->SecondaryFireStopSound[0] = NULL;
    this->SecondaryFireStopSound[1] = NULL;
    this->SecondaryFireStopSound[2] = NULL;
    this->TargetingStartSound = NULL;
    this->TargetingEndSound = NULL;
    this->PrimaryFireSoundFadeOutTime = 0.25f;
    this->ImpactPhysicalSurfaceSounds[0] = NULL;
    this->ImpactPhysicalSurfaceSounds[1] = NULL;
    this->ImpactPhysicalSurfaceSounds[2] = NULL;
    this->ImpactPhysicalSurfaceSounds[3] = NULL;
    this->ImpactPhysicalSurfaceSounds[4] = NULL;
    this->ImpactPhysicalSurfaceSounds[5] = NULL;
    this->ImpactPhysicalSurfaceSounds[6] = NULL;
    this->ImpactPhysicalSurfaceSounds[7] = NULL;
    this->ImpactPhysicalSurfaceSounds[8] = NULL;
    this->ImpactPhysicalSurfaceSounds[9] = NULL;
    this->ImpactPhysicalSurfaceSounds[10] = NULL;
    this->ImpactPhysicalSurfaceSounds[11] = NULL;
    this->ImpactPhysicalSurfaceSounds[12] = NULL;
    this->ImpactPhysicalSurfaceSounds[13] = NULL;
    this->ImpactPhysicalSurfaceSounds[14] = NULL;
    this->ImpactPhysicalSurfaceSounds[15] = NULL;
    this->ImpactPhysicalSurfaceSounds[16] = NULL;
    this->ImpactPhysicalSurfaceSounds[17] = NULL;
    this->ImpactPhysicalSurfaceSounds[18] = NULL;
    this->ImpactPhysicalSurfaceSounds[19] = NULL;
    this->ImpactPhysicalSurfaceSounds[20] = NULL;
    this->ImpactPhysicalSurfaceSounds[21] = NULL;
    this->ImpactPhysicalSurfaceSounds[22] = NULL;
    this->ImpactPhysicalSurfaceSounds[23] = NULL;
    this->ImpactPhysicalSurfaceSounds[24] = NULL;
    this->ImpactPhysicalSurfaceSounds[25] = NULL;
    this->ImpactPhysicalSurfaceEffects[0] = NULL;
    this->ImpactPhysicalSurfaceEffects[1] = NULL;
    this->ImpactPhysicalSurfaceEffects[2] = NULL;
    this->ImpactPhysicalSurfaceEffects[3] = NULL;
    this->ImpactPhysicalSurfaceEffects[4] = NULL;
    this->ImpactPhysicalSurfaceEffects[5] = NULL;
    this->ImpactPhysicalSurfaceEffects[6] = NULL;
    this->ImpactPhysicalSurfaceEffects[7] = NULL;
    this->ImpactPhysicalSurfaceEffects[8] = NULL;
    this->ImpactPhysicalSurfaceEffects[9] = NULL;
    this->ImpactPhysicalSurfaceEffects[10] = NULL;
    this->ImpactPhysicalSurfaceEffects[11] = NULL;
    this->ImpactPhysicalSurfaceEffects[12] = NULL;
    this->ImpactPhysicalSurfaceEffects[13] = NULL;
    this->ImpactPhysicalSurfaceEffects[14] = NULL;
    this->ImpactPhysicalSurfaceEffects[15] = NULL;
    this->ImpactPhysicalSurfaceEffects[16] = NULL;
    this->ImpactPhysicalSurfaceEffects[17] = NULL;
    this->ImpactPhysicalSurfaceEffects[18] = NULL;
    this->ImpactPhysicalSurfaceEffects[19] = NULL;
    this->ImpactPhysicalSurfaceEffects[20] = NULL;
    this->ImpactPhysicalSurfaceEffects[21] = NULL;
    this->ImpactPhysicalSurfaceEffects[22] = NULL;
    this->ImpactPhysicalSurfaceEffects[23] = NULL;
    this->ImpactPhysicalSurfaceEffects[24] = NULL;
    this->ImpactPhysicalSurfaceEffects[25] = NULL;
    this->ImpactCameraShake = NULL;
    this->PrimaryForceFeedbackEffect = NULL;
    this->SecondaryForceFeedbackEffect = NULL;
    this->PrimaryImpactForceFeedbackEffect = NULL;
    this->SecondaryImpactForceFeedbackEffect = NULL;
    this->FireAudioChannels[0] = NULL;
    this->FireAudioChannels[1] = NULL;
    this->FireAudioChannels[2] = NULL;
    this->FireAudioChannels[3] = NULL;
    this->ReloadAudioChannels[0] = NULL;
    this->ReloadAudioChannels[1] = NULL;
    this->ReloadAudioChannels[2] = NULL;
    this->TargetingAudioChannels[0] = NULL;
    this->TargetingAudioChannels[1] = NULL;
    this->CurrentGunFireIndex = 0;
    this->WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponentBudgeted>(TEXT("WeaponMesh0"));
    this->FireAudioChannelWantsToPlay[0] = 1;
    this->FireAudioChannelWantsToPlay[1] = 1;
    this->FireAudioChannelWantsToPlay[2] = 1;
    this->FireAudioChannelWantsToPlay[3] = 1;
    this->WrapSectionMask = 1;
    this->bUsingSecondaryFireAudio = false;
    this->LastFireTime = -10.00f;
    this->bIsPlayingFireFX = false;
    this->bFireFXTriggered = false;
    this->TimerIntervalAdjustment = 0.00f;
    this->InputQueueTimePercent = 0.20f;
    this->bAllowTargeting = false;
    this->bIsTargeting = false;
    this->LastTargetingTransitionTime = 0.00f;
    this->bTraceThroughPawns = false;
    this->bTraceThroughWorld = false;
    this->TraceThroughPawnsLimit = 16;
    this->TraceThroughBuildingsLimit = 16;
    this->bUseProjectileTrace = false;
    this->LastReloadTime = 0.00f;
    this->LastSuccessfulReloadTime = 0.00f;
    this->CurrentReloadDuration = 0.00f;
    this->WeaponLevel = -1;
    this->AmmoCount = 0;
    this->BurstFireCounter = 0;
    this->ChargeTime = 0.00f;
    this->CurrentShotLogIndex = -1;
    this->bInitializedWeaponItem = false;
    this->bUpdateLocalAmmoCount = false;
    this->bPendingDestroyDueToDurabilityOrStackCount = false;
    this->bCompletedAppliedAlterationsLoad = false;
    this->bCompletedWeaponLoad = false;
    this->bReplicatedAppliedAlterationsWithNoInstigator = false;
    this->ChargeStatusPack = 0;
    this->ActiveAbility = NULL;
    this->AppliedItemWrap = NULL;
    this->CachedFXManager = NULL;
    this->CachedSignificanceManager = NULL;
    this->MuzzleSocketName = TEXT("Muzzle");
    this->MuzzleFalloffSocketName = TEXT("MuzzleFalloff");
    this->MaxWeaponSwitchNetworkWaitTime = 0.10f;
    this->LastFireAbilityTime = 0.00f;
    this->EquipAnimation = NULL;
    this->ReloadAnimation = NULL;
    this->PrimaryAbilityAnimation = NULL;
    this->WeaponEquipMontage = NULL;
    this->WeaponReloadMontage = NULL;
    this->WeaponPrimaryAbilityMontage = NULL;
    this->PoseOffsetAnimSequence = NULL;
    this->PoseOffsetAnimSequenceFemaleOverride = NULL;
    this->WeaponChargeAnimSequence = NULL;
    this->WeaponCoreAnimation = EFortWeaponCoreAnimation::Melee;
    this->WeaponPawnAnimSet = NULL;
    this->UnableToPerformActionMontageOverride = NULL;
    this->ItemWrapModifier = NULL;
    this->LockOnTargetCandidate = NULL;
    this->bIgnoreTryToFireSlotCooldownRestriction = false;
    this->bFireConsumableAnalyticEvent = true;
}

