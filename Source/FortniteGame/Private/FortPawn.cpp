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
    bUseBaseChanged = false;
    bIgnoreNextFallingDamage = false;
    bIsDying = false;
    bPlayedDying = false;
    bIsHiddenForDeath = false;
    bIsKnockedback = false;
    bIsStaggered = false;
    bCanCapsuleBeUsedForTargeting = false;
    bUseLineTestForDamageZoneBoneDetection = false;
    bMovingEmote = false;
    bMovingEmoteForwardOnly = false;
    bMovingEmoteFollowingOnly = false;
    bMovingEmoteSkipLandingFX = false;
    bIsInvulnerable = false;
    bSpotted = false;
    bRegisterWithAISight = true;
    bRegisterWithAimAssist = true;
    bPrimaryInputHeld = false;
    bSecondaryInputHeld = false;
    bPrimaryInputQueued = false;
    bWeaponActivated = false;
    bSkipAnalogJump = false;
    FootstepTraceTypeQuery = TraceTypeQuery1;
    FootstepSurfaceType = EFortFootstepSurfaceType::Default;
    FootstepIconOverride = NULL;
    UroShiftBucket = EUpdateRateShiftBucket::ShiftBucket0;
    bUpdateMeshComponentUpdateFlagOnServer = true;
    bUROCanTieToLODs = true;
    bPostProcessNavLocation = false;
    bHealthSynced = false;
    bWeaponHolstered = false;
    bSkipReticleColorTrace = false;
    bTreatAsPawnForHitMarkers = true;
    bDisplayPawnHitMarkersForChildActors = false;
    bUsesStats = true;
    bAllowBuildingActorTeleport = true;
    bIsDBNO = false;
    bWasDBNOOnDeath = false;
    bCachedIsInAthena = false;
    CurrentMovementStyle = EFortMovementStyle::Running;
    ControlRecoveryBehavior = EFortControlRecoveryBehavior::DefaultControl;
    TeleportCounter = 0;
    SlidingFriction = 1;
    SlidingBrakingDeceleration = 1;
    StormShieldComponent = NULL;
    PushSize = EFortPawnPushSize::FFPS_Normal;
    PawnUniqueID = 0;
    CurrentWeapon = NULL;
    PreviousWeapon = NULL;
    PreviousAbilityWeaponNameForTelemetry = TEXT("None");
    WeaponHandSocketName = TEXT("RightHand");
    SpawnSpot = NULL;
    SpawnImmunityTime = 1;
    CurrentWaterBody = NULL;
    bShouldSupportSurfaceSwimming = false;
    ReplicatedWaterBody = NULL;
    bIsStunned = false;
    AdditiveCringeCount = 0;
    AdditiveCringeDuration = 1;
    bSupportsDamageNumbersAtHitLocation = false;
    LocalSpin = 1;
    DeathHitSocket = NULL;
    TeamBeaconMaxDist = 1;
    LastTakeHitTimeTimeout = 1;
    LastDamagedTime = 1;
    CurrentlyAttachedWeapon = NULL;
    CachedNavFloor = NULL;
    MaxFootstepDistance = 1;
    DBNOLandingSound = NULL;
    DefaultFootstepSound = NULL;
    DefaultFastFootstepSound = NULL;
    DefaultLandingSound = NULL;
    DefaultHardLandingSound = NULL;
    DefaultJumpSound = NULL;
    DefaultHitNotifyAudioBank = NULL;
    DefaultSwimmingAudioBank = NULL;
    LineTestForDamageZoneBoneDetectionRadius = 1;
    DamageZoneActiveBitMask = 255;
    TargettingZOffset = 1;
    JumpFlashCountPacked = 0;
    LandingFlashCountPacked = 0;
    FrontEndEmoteAudioAttenuation = NULL;
    InGameEmoteAudioAttenuation = NULL;
    InGameEmoteSoundEffectSoundPresetChain = NULL;
    EmoteCount = 0;
    LastEmoteTime = 1;
    LastEmoteEndTime = 1;
    LastEmoteItemDef = NULL;
    LastReplicatedEmoteExecuted = NULL;
    bFireBlockedByEmoteCooldown = false;
    EmoteToFireCooldownTime = 1;
    EmoteWalkSpeed = 1;
    FootstepBank = NULL;
    HealthRegenDelayGameplayEffect = NULL;
    HealthRegenGameplayEffect = NULL;
    ShieldRegenDelayGameplayEffect = NULL;
    ShieldRegenGameplayEffect = NULL;
    CurrentWeaponAnimLayerOverlayClass = NULL;
    WeaponHolsterCounter = 0;
    StaySpottedTime = 1;
    DefaultFeedback = NULL;
    DefaultSoundTrackingVisual = NULL;
    VocalChords.AddDefaulted(1);
    bIsDisconnectedPawn = false;
    MaxHealthApplicationGameplayEffect = NULL;
    HealthSet = NULL;
    ControlResistanceSet = NULL;
    DamageSet = NULL;
    MovementSet = NULL;
    AdvancedMovementSet = NULL;
    AbilitySystemComponent = NULL;
    DisplayName = FText::FromString(TEXT("Unnamed Pawn"));
    DamageDoneLastAtTime = 1;
    TotalPlayerDamageDealt = 1;
    HealthBarIndicator = NULL;
    HealthBarWidth = 1;
    HealthBarHeightMultiplier = 1;
    ClientNonRenderedAnimUpdateRate = 0;
    MaxEvalRateForInterpolation = 0;
    AnimUpdateRateVisibleMaxDistanceFactor.AddDefaulted(2);
    PegasusTimelineCollector = NULL;
    AILODComponent = NULL;
}

