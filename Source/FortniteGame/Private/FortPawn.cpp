#include "FortPawn.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool AFortPawn::WillFallFromHeightCauseDamage(float FallDistance) const {
    return false;
}

bool AFortPawn::WasDBNOOnDeath() const {
    return false;
}

void AFortPawn::UnlinkAnimLayer(TSubclassOf<UAnimInstance> AnimLayer) {
}

void AFortPawn::TriggerFeedbackEvent(FName EventName, AFortPawn* InstigatorPawn, AFortPawn* Recipient, float OverriddenDelay) {
}

void AFortPawn::StopSpinning() {
}

void AFortPawn::StopPushMomentum() {
}

void AFortPawn::StopBatchedLoopingWeaponActivation() {
}

void AFortPawn::StartSpinning(float Value, bool bFallingOnly, bool bAdjustForInputYawScale) {
}

void AFortPawn::StartPushMomentum(FVector NewPushMomentum, float Duration) {
}

AFortSoundCameraLensEffect* AFortPawn::SpawnSoundLensEffectDirectional(AActor* TrackedActor, FVector HitInfo, float MaxAudibleDistance, EFortSoundIndicatorTypes IndicatorType, const AActor* InstigatingActor, FLinearColor Tint, UTexture* OverrideIcon) {
    return NULL;
}

AFortEmitterCameraLensEffectDirectional* AFortPawn::SpawnPooledCameraLensEffectDirectional(TSubclassOf<AFortEmitterCameraLensEffectDirectional> LensEffectEmitterClass, AActor* DamageDealer, const FHitResult& HitInfo, bool bShouldActivate) {
    return NULL;
}

AFortEmitterCameraLensEffectDirectional* AFortPawn::SpawnCameraLensEffectDirectional(TSubclassOf<AFortEmitterCameraLensEffectDirectional> LensEffectEmitterClass, AActor* DamageDealer, const FHitResult& HitInfo, bool bDeferSpawn) {
    return NULL;
}

AEmitterCameraLensEffectBase* AFortPawn::SpawnCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass) {
    return NULL;
}

bool AFortPawn::ShouldDie_Implementation(float Damage, AController* EventInstigator, AActor* DamageCauser) {
    return false;
}

void AFortPawn::SetSpawnSpot(AActor* InSpawnSpot) {
}

void AFortPawn::SetSignalInStorm(float NewSignalInStormValue) {
}

void AFortPawn::SetShield(float NewShieldValue) {
}

void AFortPawn::SetPawnVisibilityControllerOnly(const bool bNewHidden, const bool bPropagateToWeapon) {
}

void AFortPawn::SetPawnVisibility(const bool bNewHidden, const bool bPropagateToWeapon) {
}

void AFortPawn::SetPawnAndControlRotation(FRotator NewRotation) {
}

void AFortPawn::SetMovementSpeedMultiplier(float NewMovementSpeedVal) {
}

void AFortPawn::SetMaxSignalInStorm(float NewValue) {
}

void AFortPawn::SetMaxShield(float NewValue) {
}

void AFortPawn::SetMaxHealth(float NewHealthVal) {
}

void AFortPawn::SetIsKnockedBack(bool bKnockback) {
}

void AFortPawn::SetHolsterWeapon(bool bHolster, bool bPlayEquipAnim, FName HolsterId, bool bForce) {
}

void AFortPawn::SetHealth(float NewHealthVal) {
}

void AFortPawn::SetGravityMultiplier(float NewGravityVal) {
}

void AFortPawn::SetGravityJumpMultipliers(float NewGravityVal, float NewVehicleGravityVal, float NewJumpZ, float NewJumpHorizontalAcceleration, float NewJumpHorizontalVelocity) {
}

void AFortPawn::SetFNameBasedOnHitDirection(const FVector& HitDirection, FName NameResult, FName NameFront, FName NameBack, FName NameLeft, FName NameRight) {
}

void AFortPawn::SetFallingHeight(float FromHeight) {
}

void AFortPawn::SetControlRecoveryBehavior(EFortControlRecoveryBehavior NewBehavior) {
}

bool AFortPawn::SetCommonWaterFXParams(UFXSystemComponent* FXComponent, const bool bUpdateWaveData, const bool bUpdatePlaneData, const bool bUpdateSurfaceData) {
    return false;
}

void AFortPawn::SetCallout(const FGameplayTag& CalloutTagToSet, float Duration) {
}

void AFortPawn::SetAimAssistTargetOverride(const USceneComponent* InOverride) {
}

void AFortPawn::ServerTeleportNearLocation_Implementation(FVector ActorLocation) {
}
bool AFortPawn::ServerTeleportNearLocation_Validate(FVector ActorLocation) {
    return true;
}

void AFortPawn::ServerInternalEquipWeapon_Implementation(AFortWeapon* Weap) {
}
bool AFortPawn::ServerInternalEquipWeapon_Validate(AFortWeapon* Weap) {
    return true;
}

void AFortPawn::SafeHolsterWeapon(bool bHolster, bool bPlayEquipAnim, FName HolsterId, bool bForce) {
}

void AFortPawn::ResetFallingHeight() {
}

void AFortPawn::RemoveWeaponTraceIgnoreActor(AActor* ActorToRemove) {
}

void AFortPawn::RemoveNonReplicatedTagToPawn(const FGameplayTag& Tag) {
}

void AFortPawn::RemoveCallout(const FGameplayTag& CalloutTagToRemove) {
}

void AFortPawn::RegisterAdditionalGameplayModifiers(const TArray<UFortGameplayModifierItemDefinition*>& ModifierDefinitions) {
}

void AFortPawn::PrototypeCharacterMovement(TEnumAsByte<EMovementMode> MovementMode, FVector LaunchVelocity) {
}

void AFortPawn::PooledCameraLensEffectCompleted(UParticleSystemComponent* FinishedComponent) {
}

void AFortPawn::PlaySwimmingSound(TEnumAsByte<EFortSwimmingAudioType::Type> SoundType) {
}

void AFortPawn::PlaySound_Implementation(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier) {
}

float AFortPawn::PlayLocalAnimMontage(UAnimMontage* NewAnimMontage, float InPlayRate, FName StartSectionName, bool bNoBlend) {
    return 0.0f;
}

void AFortPawn::PlayFootStepSound(int32 FootDown) {
}

bool AFortPawn::PickUpActor(AActor* PickupTarget, const UFortDecoItemDefinition* PlacementDecoItemDefinition) {
    return false;
}


void AFortPawn::PawnStopFire(uint8 FireModeNum) {
}

void AFortPawn::PawnStartFire(uint8 FireModeNum) {
}




void AFortPawn::OnRep_WeaponActivated() {
}

void AFortPawn::OnRep_VocalChords() {
}

void AFortPawn::OnRep_TeleportCounter() {
}

void AFortPawn::OnRep_StormShieldComponent() {
}

void AFortPawn::OnRep_Sentence() {
}

void AFortPawn::OnRep_ReplicatedWaterBody() {
}

void AFortPawn::OnRep_PushMomentum() {
}

void AFortPawn::OnRep_PawnUniqueID() {
}

void AFortPawn::OnRep_MovingEmoteFollowingOnly() {
}

void AFortPawn::OnRep_MovingEmote() {
}

void AFortPawn::OnRep_LastReplicatedEmoteExecuted() {
}

void AFortPawn::OnRep_LandingFlashCount() {
}

void AFortPawn::OnRep_JumpFlashCount() {
}

void AFortPawn::OnRep_IsKnockedBack() {
}

void AFortPawn::OnRep_IsDBNO() {
}

void AFortPawn::OnRep_EmoteWalkSpeed() {
}

void AFortPawn::OnRep_DamageZoneActiveBitMask() {
}

void AFortPawn::OnRep_CurrentWeapon(AFortWeapon* OldWeapon) {
}

void AFortPawn::OnRep_bWeaponHolstered() {
}


void AFortPawn::OnMontageStarted(UAnimMontage* Montage) {
}

void AFortPawn::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void AFortPawn::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

bool AFortPawn::OnlySpinWhenFalling() const {
    return false;
}






void AFortPawn::OnDeathPlayEffects_Implementation(float Damage, const FGameplayTagContainer& DamageTags, FVector Momentum, const FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext) {
}









void AFortPawn::OnAllMontageInstancesEnded() {
}

void AFortPawn::NetMulticast_InvokeGameplayCuesExecuted_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void AFortPawn::NetMulticast_InvokeGameplayCuesExecuted_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) {
}

void AFortPawn::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void AFortPawn::NetMulticast_InvokeGameplayCueExecuted_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void AFortPawn::NetMulticast_InvokeGameplayCueExecuted_FromSpec_Implementation(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey) {
}

void AFortPawn::NetMulticast_InvokeGameplayCueExecuted_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) {
}

void AFortPawn::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters) {
}

void AFortPawn::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Implementation(const FGameplayEffectSpecForRPC& Spec, FPredictionKey PredictionKey) {
}

void AFortPawn::NetMulticast_InvokeGameplayCueAdded_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters) {
}

void AFortPawn::NetMulticast_InvokeGameplayCueAdded_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext) {
}

void AFortPawn::NetMulticast_Athena_BatchedDamageCues_Implementation(FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData) {
}

void AFortPawn::MulticastUnlinkAnimLayer_Implementation(TSubclassOf<UAnimInstance> AnimLayer) {
}

void AFortPawn::MulticastLinkAnimLayer_Implementation(TSubclassOf<UAnimInstance> AnimLayer) {
}

void AFortPawn::MovingEmoteStopped() {
}

void AFortPawn::MaxHealthStateChanged(bool bIsMaxHealth) {
}

void AFortPawn::LogChugSplashEvent() {
}

void AFortPawn::LinkAnimLayer(TSubclassOf<UAnimInstance> AnimLayer) {
}

void AFortPawn::LaunchCharacterJump(FVector LaunchVelocity, bool bXYOverride, bool bZOverride, bool bIgnoreFallDamage, bool bPlayFeedbackEvent) {
}

void AFortPawn::KillDisconnectedPawn() {
}

bool AFortPawn::IsWeaponHolstered() const {
    return false;
}

bool AFortPawn::IsSurfaceSwimming() const {
    return false;
}

bool AFortPawn::IsStaggered() const {
    return false;
}

bool AFortPawn::IsSpinning() const {
    return false;
}

bool AFortPawn::IsInsideHidingProp(const bool bIncludeTransition) const {
    return false;
}

bool AFortPawn::IsFrontalHit(const FVector& HitDirection) const {
    return false;
}

bool AFortPawn::IsDead() const {
    return false;
}

bool AFortPawn::IsDBNO() const {
    return false;
}

bool AFortPawn::IsAllowChainStun() const {
    return false;
}

bool AFortPawn::IsActionInputIgnored() const {
    return false;
}

void AFortPawn::InitializeDeathHitSocket(FVector WorldLocation, FVector WorldNormal) {
}

void AFortPawn::HideBodyOnDeath() {
}

bool AFortPawn::HasCurrentMontage() const {
    return false;
}

void AFortPawn::HandleIsHiddenForDeath() {
}

void AFortPawn::HandleIsDying() {
}

float AFortPawn::GetWaterImmersionDepth() const {
    return 0.0f;
}

FTransform AFortPawn::GetTargetingTransform(EFortAbilityTargetingSource Source, UFortGameplayAbility* SourceAbility) const {
    return FTransform{};
}

void AFortPawn::GetSphericalHitDirection(const FVector& HitDirection, float& Azimuth, float& Elevation) const {
}

float AFortPawn::GetSignalInStorm() const {
    return 0.0f;
}

float AFortPawn::GetShieldPercent() const {
    return 0.0f;
}

float AFortPawn::GetShieldOrHealthPercent() {
    return 0.0f;
}

float AFortPawn::GetShield() const {
    return 0.0f;
}

UMaterialInstanceDynamic* AFortPawn::GetPawnMID(int32 ElementIndex) {
    return NULL;
}

AActor* AFortPawn::GetMyMovementBaseActor() {
    return NULL;
}

FVector AFortPawn::GetMovementPredictionPosition(float PredictionDeltaTime) const {
    return FVector{};
}

float AFortPawn::GetMeleeReticleStrikeAngle(bool bPrimaryInput) const {
    return 0.0f;
}

int32 AFortPawn::GetMeleeComboCounter() const {
    return 0;
}

float AFortPawn::GetMaxSignalInStorm() const {
    return 0.0f;
}

float AFortPawn::GetMaxShield() const {
    return 0.0f;
}

float AFortPawn::GetMaxHealth() const {
    return 0.0f;
}

float AFortPawn::GetMaxDistanceWithoutFallDamage() const {
    return 0.0f;
}

float AFortPawn::GetMaxControlResistance() const {
    return 0.0f;
}

APlayerController* AFortPawn::GetLocalViewingPlayerController() const {
    return NULL;
}

float AFortPawn::GetLocalSpin() const {
    return 0.0f;
}

float AFortPawn::GetKnockbackThreshold() const {
    return 0.0f;
}

float AFortPawn::GetKnockbackMultiplier() const {
    return 0.0f;
}

FName AFortPawn::GetIgnoreFallDamageComponentTag() const {
    return NAME_None;
}

float AFortPawn::GetHealthPercent() const {
    return 0.0f;
}

float AFortPawn::GetHealth() const {
    return 0.0f;
}

UAudioComponent* AFortPawn::GetFirstValidEmoteAudioComponent() const {
    return NULL;
}

UFortAIEncounterInfo* AFortPawn::GetEncounterInfo() const {
    return NULL;
}

USkeletalMeshComponent* AFortPawn::GetEmotePropAttachMesh() {
    return NULL;
}

UAudioComponent* AFortPawn::GetEmoteAudioComponent(FName SoundId) const {
    return NULL;
}

FRotator AFortPawn::GetDefaultTargetingRotation() const {
    return FRotator{};
}

FVector AFortPawn::GetDefaultTargetingOrigin() const {
    return FVector{};
}

EFortDamageZone AFortPawn::GetDamageZone(const FHitResult& InHitResult) const {
    return EFortDamageZone::Light;
}

AFortWaterBodyActor* AFortPawn::GetCurrentWaterBody() const {
    return NULL;
}

FText AFortPawn::GetCurrentSentenceSpeechText() const {
    return FText::GetEmpty();
}

float AFortPawn::GetCurrentMontageSectionTimeLeft() {
    return 0.0f;
}

float AFortPawn::GetControlResistance() const {
    return 0.0f;
}

EFortControlRecoveryBehavior AFortPawn::GetControlRecoveryBehavior() const {
    return EFortControlRecoveryBehavior::DefaultControl;
}

USkeletalMeshComponent* AFortPawn::GetAssetSkeletalMeshComponentAttachment(FName SocketName) {
    return NULL;
}

void AFortPawn::GameplayCue_InstantDeath(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortPawn::GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortPawn::GameplayCue(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortPawn::ForceKill(FGameplayTag DeathReason, AController* KillerController, AActor* KillerActor) {
}

AFortWeapon* AFortPawn::EquipWeaponDefinition(const UFortWeaponItemDefinition* WeaponData, FGuid ItemEntryGuid) {
    return NULL;
}

bool AFortPawn::EquipBestWeapon() {
    return false;
}

void AFortPawn::EmoteStopped(UFortItemDefinition* MontageItemDef) {
}

void AFortPawn::EmoteStarted(UFortItemDefinition* MontageItemDef) {
}

void AFortPawn::DoFatalDamage(UAbilitySystemComponent* KillerAbilitySystemComponent) {
}

void AFortPawn::DetachAssetFromSocket(FName SocketName) {
}

void AFortPawn::ClientInternalEquipWeapon_Implementation(AFortWeapon* Weap) {
}

bool AFortPawn::CanSpawnSoundVisuals() const {
    return false;
}

void AFortPawn::BroadcastUnlinkAnimLayer_Implementation(TSubclassOf<UAnimInstance> AnimLayer) {
}

void AFortPawn::BroadcastLinkAnimLayer_Implementation(TSubclassOf<UAnimInstance> AnimLayer) {
}

void AFortPawn::AttachAssetToSocket(const FAssetAttachment& InAttachment) {
}

void AFortPawn::ApplyKnockback(float KnockbackMagnitude, float KnockbackZAngle, FVector ImpulseDir) {
}

void AFortPawn::AnimMontage_LocalSetNextSectionName(UAnimMontage* AnimMontage, FName SectionName, FName NextSectionName) {
}

bool AFortPawn::AnimMontage_LocalJumpToSectionName(FName SectionName) {
    return false;
}

int32 AFortPawn::AnimMontage_LocalJumpToRandomSection() {
    return 0;
}

void AFortPawn::AlignRotationToHitDirection(const FVector& HitDirection) {
}

void AFortPawn::AddWeaponTraceIgnoreActor(AActor* ActorToIgnore) {
}

void AFortPawn::AddNonReplicatedTagToPawn(const FGameplayTag& Tag) {
}

void AFortPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPawn, bIgnoreNextFallingDamage);
    DOREPLIFETIME(AFortPawn, bIsDying);
    DOREPLIFETIME(AFortPawn, bIsHiddenForDeath);
    DOREPLIFETIME(AFortPawn, bIsKnockedback);
    DOREPLIFETIME(AFortPawn, bIsStaggered);
    DOREPLIFETIME(AFortPawn, bMovingEmote);
    DOREPLIFETIME(AFortPawn, bMovingEmoteForwardOnly);
    DOREPLIFETIME(AFortPawn, bMovingEmoteFollowingOnly);
    DOREPLIFETIME(AFortPawn, bMovingEmoteSkipLandingFX);
    DOREPLIFETIME(AFortPawn, bIsInvulnerable);
    DOREPLIFETIME(AFortPawn, bSpotted);
    DOREPLIFETIME(AFortPawn, bWeaponActivated);
    DOREPLIFETIME(AFortPawn, bWeaponHolstered);
    DOREPLIFETIME(AFortPawn, bIsDBNO);
    DOREPLIFETIME(AFortPawn, bWasDBNOOnDeath);
    DOREPLIFETIME(AFortPawn, CurrentMovementStyle);
    DOREPLIFETIME(AFortPawn, TeleportCounter);
    DOREPLIFETIME(AFortPawn, StormShieldComponent);
    DOREPLIFETIME(AFortPawn, PawnUniqueID);
    DOREPLIFETIME(AFortPawn, CurrentWeapon);
    DOREPLIFETIME(AFortPawn, SpawnImmunityTime);
    DOREPLIFETIME(AFortPawn, ReplicatedWaterBody);
    DOREPLIFETIME(AFortPawn, bIsStunned);
    DOREPLIFETIME(AFortPawn, PushMomentum);
    DOREPLIFETIME(AFortPawn, LocalSpin);
    DOREPLIFETIME(AFortPawn, DamageZoneActiveBitMask);
    DOREPLIFETIME(AFortPawn, JumpFlashCountPacked);
    DOREPLIFETIME(AFortPawn, LandingFlashCountPacked);
    DOREPLIFETIME(AFortPawn, LastReplicatedEmoteExecuted);
    DOREPLIFETIME(AFortPawn, EmoteWalkSpeed);
    DOREPLIFETIME(AFortPawn, AdditionalModifierDefinitions);
    DOREPLIFETIME(AFortPawn, VocalChords);
    DOREPLIFETIME(AFortPawn, DisplayName);
    DOREPLIFETIME(AFortPawn, CurrentCalloutTag);
    DOREPLIFETIME(AFortPawn, CurrentSentence);
    DOREPLIFETIME(AFortPawn, ClientAILODSettings);
}

AFortPawn::AFortPawn() {
    this->bUseBaseChanged = false;
    this->bIgnoreNextFallingDamage = false;
    this->bIsDying = false;
    this->bPlayedDying = false;
    this->bIsHiddenForDeath = false;
    this->bIsKnockedback = false;
    this->bIsStaggered = false;
    this->bCanCapsuleBeUsedForTargeting = false;
    this->bUseLineTestForDamageZoneBoneDetection = false;
    this->bMovingEmote = false;
    this->bMovingEmoteForwardOnly = false;
    this->bMovingEmoteFollowingOnly = false;
    this->bMovingEmoteSkipLandingFX = false;
    this->bIsInvulnerable = false;
    this->bSpotted = false;
    this->bRegisterWithAISight = true;
    this->bRegisterWithAimAssist = true;
    this->bPrimaryInputHeld = false;
    this->bSecondaryInputHeld = false;
    this->bPrimaryInputQueued = false;
    this->bWeaponActivated = false;
    this->bSkipAnalogJump = false;
    this->FootstepTraceTypeQuery = TraceTypeQuery1;
    this->FootstepSurfaceType = EFortFootstepSurfaceType::Default;
    this->FootstepIconOverride = NULL;
    this->UroShiftBucket = EUpdateRateShiftBucket::ShiftBucket0;
    this->bUpdateMeshComponentUpdateFlagOnServer = true;
    this->bUROCanTieToLODs = true;
    this->bPostProcessNavLocation = false;
    this->bHealthSynced = false;
    this->bWeaponHolstered = false;
    this->bSkipReticleColorTrace = false;
    this->bTreatAsPawnForHitMarkers = true;
    this->bDisplayPawnHitMarkersForChildActors = false;
    this->bUsesStats = true;
    this->bAllowBuildingActorTeleport = true;
    this->bIsDBNO = false;
    this->bWasDBNOOnDeath = false;
    this->bCachedIsInAthena = false;
    this->CurrentMovementStyle = EFortMovementStyle::Running;
    this->ControlRecoveryBehavior = EFortControlRecoveryBehavior::DefaultControl;
    this->TeleportCounter = 0;
    this->SlidingFriction = 1;
    this->SlidingBrakingDeceleration = 1;
    this->StormShieldComponent = NULL;
    this->PushSize = EFortPawnPushSize::FFPS_Normal;
    this->PawnUniqueID = 0;
    this->CurrentWeapon = NULL;
    this->PreviousWeapon = NULL;
    this->PreviousAbilityWeaponNameForTelemetry = TEXT("None");
    this->WeaponHandSocketName = TEXT("RightHand");
    this->SpawnSpot = NULL;
    this->SpawnImmunityTime = 1;
    this->CurrentWaterBody = NULL;
    this->bShouldSupportSurfaceSwimming = false;
    this->ReplicatedWaterBody = NULL;
    this->bIsStunned = false;
    this->AdditiveCringeCount = 0;
    this->AdditiveCringeDuration = 1;
    this->bSupportsDamageNumbersAtHitLocation = false;
    this->LocalSpin = 1;
    this->DeathHitSocket = NULL;
    this->TeamBeaconMaxDist = 1;
    this->LastTakeHitTimeTimeout = 1;
    this->LastDamagedTime = 1;
    this->CurrentlyAttachedWeapon = NULL;
    this->CachedNavFloor = NULL;
    this->MaxFootstepDistance = 1;
    this->DBNOLandingSound = NULL;
    this->DefaultFootstepSound = NULL;
    this->DefaultFastFootstepSound = NULL;
    this->DefaultLandingSound = NULL;
    this->DefaultHardLandingSound = NULL;
    this->DefaultJumpSound = NULL;
    this->DefaultHitNotifyAudioBank = NULL;
    this->DefaultSwimmingAudioBank = NULL;
    this->LineTestForDamageZoneBoneDetectionRadius = 1;
    this->DamageZoneActiveBitMask = 255;
    this->TargettingZOffset = 1;
    this->JumpFlashCountPacked = 0;
    this->LandingFlashCountPacked = 0;
    this->FrontEndEmoteAudioAttenuation = NULL;
    this->InGameEmoteAudioAttenuation = NULL;
    this->InGameEmoteSoundEffectSoundPresetChain = NULL;
    this->EmoteCount = 0;
    this->LastEmoteTime = 1;
    this->LastEmoteEndTime = 1;
    this->LastEmoteItemDef = NULL;
    this->LastReplicatedEmoteExecuted = NULL;
    this->bFireBlockedByEmoteCooldown = false;
    this->EmoteToFireCooldownTime = 1;
    this->EmoteWalkSpeed = 1;
    this->FootstepBank = NULL;
    this->HealthRegenDelayGameplayEffect = NULL;
    this->HealthRegenGameplayEffect = NULL;
    this->ShieldRegenDelayGameplayEffect = NULL;
    this->ShieldRegenGameplayEffect = NULL;
    this->CurrentWeaponAnimLayerOverlayClass = NULL;
    this->WeaponHolsterCounter = 0;
    this->StaySpottedTime = 1;
    this->DefaultFeedback = NULL;
    this->DefaultSoundTrackingVisual = NULL;
    this->VocalChords.AddDefaulted(1);
    this->bIsDisconnectedPawn = false;
    this->MaxHealthApplicationGameplayEffect = NULL;
    this->HealthSet = NULL;
    this->ControlResistanceSet = NULL;
    this->DamageSet = NULL;
    this->MovementSet = NULL;
    this->AdvancedMovementSet = NULL;
    this->AbilitySystemComponent = NULL;
    this->DisplayName = FText::FromString(TEXT("Unnamed Pawn"));
    this->DamageDoneLastAtTime = 1;
    this->TotalPlayerDamageDealt = 1;
    this->HealthBarIndicator = NULL;
    this->HealthBarWidth = 1;
    this->HealthBarHeightMultiplier = 1;
    this->ClientNonRenderedAnimUpdateRate = 0;
    this->MaxEvalRateForInterpolation = 0;
    this->AnimUpdateRateVisibleMaxDistanceFactor.AddDefaulted(2);
    this->PegasusTimelineCollector = NULL;
    this->AILODComponent = NULL;
}

