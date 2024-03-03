#include "FortPlayerPawn.h"
#include "Particles/ParticleSystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortPlayerPawn::VerifySkydivingMatchesServer() {
}

void AFortPlayerPawn::UpdatePreviousPositionAndVelocity(float DeltaSeconds, FVector OldLocation, FVector OldVelocity) {
}

void AFortPlayerPawn::UpdateGameStateModifiedGravity(float GravityMultiplier) {
}

void AFortPlayerPawn::UpdateAimbotDetectionStatus() {
}

void AFortPlayerPawn::UnableToPerformAction(bool bPlayMontage, const FGameplayTagContainer& FailedReason) {
}

void AFortPlayerPawn::ToggleGender() {
}

void AFortPlayerPawn::ToggleBodyType() {
}

float AFortPlayerPawn::TimeFromJumpApex() const {
    return 0.0f;
}

void AFortPlayerPawn::SwitchToPreviousPart(const FString& PartName) {
}

void AFortPlayerPawn::SwitchToNextPart(const FString& PartName) {
}

void AFortPlayerPawn::SwapPawnCosmeticItemAndVariant(const FGuid& SwapId, const TArray<FFortSwapItemAndVariantData>& SwapData, bool bAllowActiveHotswap, EFortAppliedSwapItemAndVariantState ForcedSwapState) {
}

bool AFortPlayerPawn::SupportsTetheredMovement() {
    return false;
}

void AFortPlayerPawn::StopItemInteractionAbility(const EItemInteractionStatus ItemInteractionStatus) {
}

void AFortPlayerPawn::StopFacialAnimationStream() {
}

void AFortPlayerPawn::StopCarryingPlayer(bool bFromAbilityCancel) {
}

void AFortPlayerPawn::StartGhostModeExit(const float InGhostModeExitDuration) {
}

void AFortPlayerPawn::StartFloating() {
}

void AFortPlayerPawn::StartedInteractSearch() {
}

bool AFortPlayerPawn::ShouldPlayDeathAnimation() {
    return false;
}

bool AFortPlayerPawn::ShouldDriverHaveReticle() const {
    return false;
}

bool AFortPlayerPawn::ShouldAllowShadowStanceMaterialsForPartType(EFortCustomPartType PartType) const {
    return false;
}

void AFortPlayerPawn::SetWeaponOverrideAnimSet(UFortWeaponAnimSet* WeaponOverrideAnimSet) {
}

void AFortPlayerPawn::SetVehicleOverrideExit(bool bIgnoreLaunch) {
}

void AFortPlayerPawn::SetThrownItemTrajectoryHitResult(const FHitResult& InHitResult) {
}

void AFortPlayerPawn::SetTetherPawn(APawn* InTetherPawn) {
}

void AFortPlayerPawn::SetStasisMode(EFortPawnStasisMode InStasisMode) {
}

void AFortPlayerPawn::SetPreviousVelocity(FVector OldVelocity) {
}

void AFortPlayerPawn::SetPreviousPosition(FVector OldPosition) {
}

void AFortPlayerPawn::SetPossessedProp(ABuildingGameplayActorPlayerPropAttachment* InPossessedProp) {
}

void AFortPlayerPawn::SetPetType(const UAthenaPetItemDefinition* PetToCreate) {
}

void AFortPlayerPawn::SetPendingTetherLaunch(float Amount) {
}

void AFortPlayerPawn::SetPendingSkydiveLaunch(bool bPending) {
}

void AFortPlayerPawn::SetNumActiveBalloons(int32 NewBalloonCount) {
}

void AFortPlayerPawn::SetIsInFrontEndHologram(bool bInFrontEndHologram) {
}

void AFortPlayerPawn::SetInVortex(bool bNewValue, float UpwardLaunchVelocity, float GravityFloorAltitude, float GravityFloorWidth, float GravityFloorGravityScalar, float GravityFloorTerminalVelocity) {
}

void AFortPlayerPawn::SetInSlipperyMovement(bool bIsSlippery) {
}

void AFortPlayerPawn::SetHomeActor(AActor* NewActor) {
}

void AFortPlayerPawn::SetFortPlayerPawnLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) {
}


void AFortPlayerPawn::SetFacialTypeOverride(EFortFacialAnimTypes NewType) {
}

void AFortPlayerPawn::SetEquippedArmoredInterface(TScriptInterface<IFortArmoredInterface> InInterface) {
}

void AFortPlayerPawn::SetCustomMeshHeightAdjustTarget(int32 HeightAdjust, int32 LerpSpeed) {
}

void AFortPlayerPawn::SetClientObservedStatsFromAnotherPawn(AFortPlayerPawn* OtherPawn) {
}

void AFortPlayerPawn::SetBalloonRope(ABuildingGameplayActor* InBalloonRope) {
}

void AFortPlayerPawn::SetActorHiddenInGameWithGameplayEffect(bool bNewHidden, const TSubclassOf<UGameplayEffect>& HidePawnGameplayEffectClass, bool bRemoveAllOfThisTag) {
}

void AFortPlayerPawn::ServerUpdateVehicleInputStateUnreliable_Implementation(FFortAthenaVehicleInputStateUnreliable ReliableInput, float Timestamp) {
}
bool AFortPlayerPawn::ServerUpdateVehicleInputStateUnreliable_Validate(FFortAthenaVehicleInputStateUnreliable ReliableInput, float Timestamp) {
    return true;
}

void AFortPlayerPawn::ServerUpdateVehicleInputStateReliable_Implementation(FFortAthenaVehicleInputStateReliable ReliableInput) {
}
bool AFortPlayerPawn::ServerUpdateVehicleInputStateReliable_Validate(FFortAthenaVehicleInputStateReliable ReliableInput) {
    return true;
}

void AFortPlayerPawn::ServerUnmarkRespawned_Implementation() {
}
bool AFortPlayerPawn::ServerUnmarkRespawned_Validate() {
    return true;
}

void AFortPlayerPawn::ServerToggleGender_Implementation() {
}
bool AFortPlayerPawn::ServerToggleGender_Validate() {
    return true;
}

void AFortPlayerPawn::ServerToggleBodyType_Implementation() {
}
bool AFortPlayerPawn::ServerToggleBodyType_Validate() {
    return true;
}

void AFortPlayerPawn::ServerThrowCarriedPlayer_Implementation() {
}

void AFortPlayerPawn::ServerSetAttachment_Implementation(FRepFortMeshAttachment Attachment) {
}
bool AFortPlayerPawn::ServerSetAttachment_Validate(FRepFortMeshAttachment Attachment) {
    return true;
}

void AFortPlayerPawn::ServerSetAimbotDetection_Implementation(bool bEnableDetection) {
}
bool AFortPlayerPawn::ServerSetAimbotDetection_Validate(bool bEnableDetection) {
    return true;
}

void AFortPlayerPawn::ServerSendZiplineState_Implementation(const FZiplinePawnState& InZiplineState) {
}
bool AFortPlayerPawn::ServerSendZiplineState_Validate(const FZiplinePawnState& InZiplineState) {
    return true;
}

void AFortPlayerPawn::ServerSendAimbotDetectionStatus_Implementation(const TArray<uint8>& Payload) {
}
bool AFortPlayerPawn::ServerSendAimbotDetectionStatus_Validate(const TArray<uint8>& Payload) {
    return true;
}

void AFortPlayerPawn::ServerRootMotionInterruptNotifyStopMontage_Implementation(UAnimMontage* MontageToStop) {
}
bool AFortPlayerPawn::ServerRootMotionInterruptNotifyStopMontage_Validate(UAnimMontage* MontageToStop) {
    return true;
}

void AFortPlayerPawn::ServerReviveFromDBNO_Implementation(AController* EventInstigator) {
}
bool AFortPlayerPawn::ServerReviveFromDBNO_Validate(AController* EventInstigator) {
    return true;
}

void AFortPlayerPawn::ServerRespawnFromDBNO_Implementation() {
}
bool AFortPlayerPawn::ServerRespawnFromDBNO_Validate() {
    return true;
}

void AFortPlayerPawn::ServerResetAbilitySystemComponent_Implementation() {
}

void AFortPlayerPawn::ServerPlayUnableToPerformActionMontage_Implementation() {
}
bool AFortPlayerPawn::ServerPlayUnableToPerformActionMontage_Validate() {
    return true;
}

AFortAthenaVehicle* AFortPlayerPawn::ServerOnExitVehicle(ETryExitVehicleBehavior ExitForceBehavior) {
    return NULL;
}

void AFortPlayerPawn::ServerInterrogateDBNOPlayer_Implementation(AFortPlayerPawn* InDBNOHoistee) {
}

void AFortPlayerPawn::ServerHoistDBNOPlayer_Implementation(AFortPlayerPawn* InDBNOHoistee) {
}

void AFortPlayerPawn::ServerHandlePickupInfo_Implementation(AFortPickup* Pickup, FFortPickupRequestInfo Params) {
}
bool AFortPlayerPawn::ServerHandlePickupInfo_Validate(AFortPickup* Pickup, FFortPickupRequestInfo Params) {
    return true;
}

void AFortPlayerPawn::ServerHandlePickup(AFortPickup* Pickup, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound) {
}

void AFortPlayerPawn::ServerEquipLastWeaponOrGadget_Implementation(bool bForce) {
}
bool AFortPlayerPawn::ServerEquipLastWeaponOrGadget_Validate(bool bForce) {
    return true;
}

void AFortPlayerPawn::ServerDropCarriedPlayer_Implementation() {
}

void AFortPlayerPawn::ServerCyclePart_Implementation(EFortCustomPartType Part, bool bNextPart) {
}
bool AFortPlayerPawn::ServerCyclePart_Validate(EFortCustomPartType Part, bool bNextPart) {
    return true;
}

void AFortPlayerPawn::ServerCycleColorSwatch_Implementation(EColorSwatchType SwatchType, bool bNext) {
}
bool AFortPlayerPawn::ServerCycleColorSwatch_Validate(EColorSwatchType SwatchType, bool bNext) {
    return true;
}

void AFortPlayerPawn::ServerCycleAccessoryColorSwatch_Implementation(EFortCustomPartType Part, bool bNext) {
}
bool AFortPlayerPawn::ServerCycleAccessoryColorSwatch_Validate(EFortCustomPartType Part, bool bNext) {
    return true;
}

void AFortPlayerPawn::ServerChoosePart_Implementation(EFortCustomPartType Part, UCustomCharacterPart* ChosenCharacterPart) {
}
bool AFortPlayerPawn::ServerChoosePart_Validate(EFortCustomPartType Part, UCustomCharacterPart* ChosenCharacterPart) {
    return true;
}

void AFortPlayerPawn::ServerChooseGender_Implementation(EFortCustomGender Gender) {
}
bool AFortPlayerPawn::ServerChooseGender_Validate(EFortCustomGender Gender) {
    return true;
}


void AFortPlayerPawn::ReviveFromDBNO(AController* EventInstigator) {
}

void AFortPlayerPawn::RestoreDBNOCollisionAfterDrop() {
}

void AFortPlayerPawn::ResetGameplayAttributes(const bool bIgnoreStatClamp) {
}

void AFortPlayerPawn::ResetClothAndDynamics() {
}

void AFortPlayerPawn::RemoveExpiredIgnoredActorsAndCheckForNextTimer() {
}

void AFortPlayerPawn::RemoveAttachment() {
}

void AFortPlayerPawn::RemoveAbilityAITarget(AFortAIPawn* InTarget) {
}

void AFortPlayerPawn::RandomizeCharacter(const FString& GenderString) {
}

void AFortPlayerPawn::PushFootstepBankOverride(int32 Priority, UFortFootstepAudioBank* InFootstepBankOverride) {
}

void AFortPlayerPawn::PushAnimBPOverride(int32 Priority, TSubclassOf<UAnimInstance> InAnimBPOverride) {
}

void AFortPlayerPawn::PostResIn() {
}

void AFortPlayerPawn::PopFootstepBankOverride(int32 Priority, UFortFootstepAudioBank* InFootstepBankOverride) {
}

void AFortPlayerPawn::PopAnimBPOverride(int32 Priority, TSubclassOf<UAnimInstance> InAnimBPOverride) {
}

void AFortPlayerPawn::PlayGroupEmote(const UFortMontageItemDefinitionBase* EmoteAsset) {
}

void AFortPlayerPawn::PerformSupplementalKillVolumeSweep() {
}

void AFortPlayerPawn::PassengerToPassengerAnimationStopped() {
}

void AFortPlayerPawn::PassengerToDriverAnimationStopped() {
}







void AFortPlayerPawn::OnRep_WaitingForEmoteInteraction() {
}

void AFortPlayerPawn::OnRep_VehicleInputStateUnreliable() {
}

void AFortPlayerPawn::OnRep_VehicleInputStateReliableForReplay() {
}

void AFortPlayerPawn::OnRep_UpdateContextTracker() {
}

void AFortPlayerPawn::OnRep_StoredControlRotation() {
}

void AFortPlayerPawn::OnRep_StartedInteractSearch() {
}

void AFortPlayerPawn::OnRep_ReplicatedSkyTube() {
}

void AFortPlayerPawn::OnRep_ReplicatedIsInVortex() {
}

void AFortPlayerPawn::OnRep_ReplicatedIsInSlipperyMovement() {
}

void AFortPlayerPawn::OnRep_ReplicatedInGliderRedeploy() {
}

void AFortPlayerPawn::OnRep_ReplicatedAnimMontage() {
}

void AFortPlayerPawn::OnRep_RepAnimMontageStartSection() {
}

void AFortPlayerPawn::OnRep_PossessedProp() {
}

void AFortPlayerPawn::OnRep_ParachuteLockedOpen() {
}

void AFortPlayerPawn::OnRep_NetMovementPrioritized(bool bOldNetMovementPrioritized) {
}

void AFortPlayerPawn::OnRep_LockGroupEmoteLeaderRotation() {
}

void AFortPlayerPawn::OnRep_IsTargeting() {
}

void AFortPlayerPawn::OnRep_IsSlopeSliding() {
}

void AFortPlayerPawn::OnRep_IsSkydivingFromBus() {
}

void AFortPlayerPawn::OnRep_IsSkydiving(bool bPreviousState) {
}

void AFortPlayerPawn::OnRep_IsParachuteOpen(bool bPreviousState) {
}

void AFortPlayerPawn::OnRep_IsParachuteForcedOpen() {
}

void AFortPlayerPawn::OnRep_IsInWaterVolume() {
}

void AFortPlayerPawn::OnRep_IsInsideSafeZone() {
}

void AFortPlayerPawn::OnRep_IsInAnyStorm() {
}

void AFortPlayerPawn::OnRep_IsEmoteLeader() {
}

void AFortPlayerPawn::OnRep_InVehicle() {
}

void AFortPlayerPawn::OnRep_GroupEmoteLookTarget() {
}

void AFortPlayerPawn::OnRep_GliderOverride() {
}

void AFortPlayerPawn::OnRep_FootstepBankOverride() {
}

void AFortPlayerPawn::OnRep_FacialTypeOverride() {
}

void AFortPlayerPawn::OnRep_DBNOHoisterData(const FFortDBNOCarryHoisterData& PreviousDBNOHoisterData) {
}

void AFortPlayerPawn::OnRep_DBNOHoistee() {
}

void AFortPlayerPawn::OnRep_CustomMeshHeightAdjustTarget() {
}

void AFortPlayerPawn::OnRep_ControlledRCPawn() {
}

void AFortPlayerPawn::OnRep_CharPartAnimMontageInfo() {
}

void AFortPlayerPawn::OnRep_bHasStartedFloating() {
}

void AFortPlayerPawn::OnRep_BaseCosmeticLoadout() {
}

void AFortPlayerPawn::OnRep_AttachmentMesh() {
}

void AFortPlayerPawn::OnRep_AppliedSwaps() {
}

void AFortPlayerPawn::OnRep_AnimBPOverride() {
}

void AFortPlayerPawn::OnRep_AccelerationZPack() {
}

void AFortPlayerPawn::OnRep_AccelerationPack() {
}










void AFortPlayerPawn::OnEndParachuteMovement_Implementation() {
}


void AFortPlayerPawn::OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AFortPlayerPawn::OnBeginParachuteMovement_Implementation() {
}


void AFortPlayerPawn::MulticastUpdateVehicleInputStateReliable_Implementation(FFortAthenaVehicleInputStateReliable ReliableInput) {
}

void AFortPlayerPawn::MulticastSetWeaponOverrideAnimSet_Implementation(UFortWeaponAnimSet* WeaponOverrideAnimSet) {
}

void AFortPlayerPawn::MulticastClearWeaponOverrideAnimSet_Implementation() {
}

void AFortPlayerPawn::MarkSafe(TSubclassOf<UGameplayEffect> GEtoApply) {
}

void AFortPlayerPawn::ManualReviveFromDBNO(TSubclassOf<UGameplayEffect> ReviveGameplayEffectsOverride) {
}

void AFortPlayerPawn::LocalThrowCarriedPlayer() {
}

bool AFortPlayerPawn::LocalIsTryingToGetPickup() {
    return false;
}

void AFortPlayerPawn::ListCharacterParts(const FString& GenderAndOrPartString) const {
}

bool AFortPlayerPawn::IsZiplining() const {
    return false;
}

bool AFortPlayerPawn::IsWaterSprintBoosting() const {
    return false;
}

bool AFortPlayerPawn::IsUsingUmbrella() const {
    return false;
}

bool AFortPlayerPawn::IsUsingPersonalVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsTethered() const {
    return false;
}

bool AFortPlayerPawn::IsSprinting() const {
    return false;
}

bool AFortPlayerPawn::IsSkydivingFromLaunchPad() const {
    return false;
}

bool AFortPlayerPawn::IsSkydivingFromBus() const {
    return false;
}

bool AFortPlayerPawn::IsSkydiving() const {
    return false;
}

bool AFortPlayerPawn::IsPassivelySkydiving() const {
    return false;
}

bool AFortPlayerPawn::IsPassengerInVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsParachuteOpen() const {
    return false;
}

bool AFortPlayerPawn::IsParachuteLockedOpen() const {
    return false;
}

bool AFortPlayerPawn::IsParachuteForcedOpen() const {
    return false;
}

bool AFortPlayerPawn::IsOperatingTurret() const {
    return false;
}

bool AFortPlayerPawn::IsNiagaraSimpleWaterSim() const {
    return false;
}

bool AFortPlayerPawn::IsNiagaraProceduralWaterSim() const {
    return false;
}

bool AFortPlayerPawn::IsItemAndVariantSwapActiveById(const FGuid& SwapId) const {
    return false;
}

bool AFortPlayerPawn::IsInVortex() const {
    return false;
}

bool AFortPlayerPawn::IsInVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsInSlipperyMovement() const {
    return false;
}

bool AFortPlayerPawn::IsInSkyTube() const {
    return false;
}

bool AFortPlayerPawn::IsInInteractBlockingVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsInFrontEndHologram() const {
    return false;
}

bool AFortPlayerPawn::IsInFloatingMovement() const {
    return false;
}

bool AFortPlayerPawn::IsInCharacterCustomization() const {
    return false;
}

bool AFortPlayerPawn::IsEmoteBlockedByMovement() const {
    return false;
}

bool AFortPlayerPawn::IsDrivingVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsDrivingInteractBlockingVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsCharacterCustomizationLoadingCompleted() const {
    return false;
}

bool AFortPlayerPawn::IsActivelyStrafingInAir() const {
    return false;
}

bool AFortPlayerPawn::IsActivelySkydivingUpInVortex() const {
    return false;
}

bool AFortPlayerPawn::IsActivelySkydiving() const {
    return false;
}

void AFortPlayerPawn::InvokeWaterJumpSplash(const FVector& SplashPosition, float SplashScale) {
}

void AFortPlayerPawn::InvokeWaterHandSplashAttached(USceneComponent* AttachParent, FName AttachSocketName) {
}

void AFortPlayerPawn::InvokeWaterHandSplash(const FVector& SplashPosition) {
}

bool AFortPlayerPawn::HasStartedFloating() const {
    return false;
}

bool AFortPlayerPawn::HasRespawnedInAir() const {
    return false;
}

bool AFortPlayerPawn::HasRecentlyExitedZiplineFromJumping() const {
    return false;
}

bool AFortPlayerPawn::HasControlledRCPawn() const {
    return false;
}

void AFortPlayerPawn::HandleInStasis() {
}

TScriptInterface<IFortVehicleInterface> AFortPlayerPawn::GetVehicleUInterface() const {
    return NULL;
}

uint8 AFortPlayerPawn::GetVehicleSeatIndex() const {
    return 0;
}

bool AFortPlayerPawn::GetVehicleOverrideExit() {
    return false;
}

AActor* AFortPlayerPawn::GetVehicleActor() const {
    return NULL;
}

AFortAthenaVehicle* AFortPlayerPawn::GetVehicle() const {
    return NULL;
}

FHitResult AFortPlayerPawn::GetThrownItemTrajectoryHitResult() const {
    return FHitResult{};
}

APawn* AFortPlayerPawn::GetTetherPawn() const {
    return NULL;
}

EFortPawnStasisMode AFortPlayerPawn::GetStasisMode() const {
    return EFortPawnStasisMode::None;
}

float AFortPlayerPawn::GetStamina() const {
    return 0.0f;
}

FVector AFortPlayerPawn::GetSlopeSlidingNormal() const {
    return FVector{};
}

void AFortPlayerPawn::GetSlopeSlidingAngles(float& LocalPitch, float& LocalRoll) const {
}

USkeletalMeshComponent* AFortPlayerPawn::GetSkeletalMeshForPartType(EFortCustomPartType PartType) const {
    return NULL;
}

USkeletalMeshComponent* AFortPlayerPawn::GetSkeletalMeshForCharmType(TEnumAsByte<EFortCustomCharmType::Type> CharmType) const {
    return NULL;
}

float AFortPlayerPawn::GetSimulatedAttributeValue(const FGameplayAttribute& Attribute, const float DefaultValue) const {
    return 0.0f;
}

FVector AFortPlayerPawn::GetPreviousVelocity() {
    return FVector{};
}

FVector AFortPlayerPawn::GetPreviousPosition() {
    return FVector{};
}

ABuildingGameplayActorPlayerPropAttachment* AFortPlayerPawn::GetPossessedProp() const {
    return NULL;
}

bool AFortPlayerPawn::GetPendingSkydiveLaunch() const {
    return false;
}

float AFortPlayerPawn::GetPawnSignificance() const {
    return 0.0f;
}

int32 AFortPlayerPawn::GetPawnLOD() const {
    return 0;
}

int32 AFortPlayerPawn::GetNumActiveBalloons() const {
    return 0;
}

float AFortPlayerPawn::GetMaxStamina() const {
    return 0.0f;
}

void AFortPlayerPawn::GetLastWaterSurfaceInfo(FVector& OutWaterSurfacePosition, FVector& OutWaterSurfaceNormal) {
}

bool AFortPlayerPawn::GetIsSlopeSliding() const {
    return false;
}

bool AFortPlayerPawn::GetIsHoldingObject() const {
    return false;
}

AActor* AFortPlayerPawn::GetHomeActor() const {
    return NULL;
}

FText AFortPlayerPawn::GetGliderDisplayName() const {
    return FText::GetEmpty();
}

void AFortPlayerPawn::GetGender(bool& IsMale, bool& IsFemale) const {
}

UAnimMontage* AFortPlayerPawn::GetFrontendAnimMontageIdleOverride() const {
    return NULL;
}

int32 AFortPlayerPawn::GetExtraLives() const {
    return 0;
}

EFortPawnDisplayContext AFortPlayerPawn::GetDisplayContext() const {
    return EFortPawnDisplayContext::BattleRoyale;
}

AFortPlayerPawn* AFortPlayerPawn::GetDBNOHoister() const {
    return NULL;
}

AFortPlayerPawn* AFortPlayerPawn::GetDBNOHoistee() const {
    return NULL;
}

AFortSkyTube* AFortPlayerPawn::GetCurrentSkyTube() const {
    return NULL;
}

AFortPlayerPawn* AFortPlayerPawn::GetControllingPawn() const {
    return NULL;
}

TSoftObjectPtr<UFXSystemAsset> AFortPlayerPawn::GetContrailParticleSystemSoftRef() {
    return NULL;
}

TArray<UActorComponent*> AFortPlayerPawn::GetComponentsByClassOnAllPartModifiers(TSubclassOf<UActorComponent> ComponentClass) const {
    return TArray<UActorComponent*>();
}

TArray<UActorComponent*> AFortPlayerPawn::GetComponentsByClassForPartType(TSubclassOf<UActorComponent> ComponentClass, EFortCustomPartType PartType) const {
    return TArray<UActorComponent*>();
}

int32 AFortPlayerPawn::GetClientObservedStatValue(const FName StatName, int32 DefaultValue) {
    return 0;
}

EFortCustomGender AFortPlayerPawn::GetCharacterGender() const {
    return EFortCustomGender::Invalid;
}

AFortPlayerCharm* AFortPlayerPawn::GetCharacterCharmActorForCharmType(TEnumAsByte<EFortCustomCharmType::Type> CharmType) const {
    return NULL;
}

TEnumAsByte<EFortCustomBodyType::Type> AFortPlayerPawn::GetCharacterBodyType() const {
    return EFortCustomBodyType::NONE;
}

float AFortPlayerPawn::GetBaseAimPitchQuantized() const {
    return 0.0f;
}

UFXSystemComponent* AFortPlayerPawn::GetActivePlayerWaterBoostComponent() const {
    return NULL;
}

UFXSystemComponent* AFortPlayerPawn::GetActivePlayerSwimmingComponent() const {
    return NULL;
}

UFXSystemComponent* AFortPlayerPawn::GetActivePlayerJumpSplashInWaterComponent() const {
    return NULL;
}

UFXSystemComponent* AFortPlayerPawn::GetActivePlayerInWaterComponent() const {
    return NULL;
}

UFXSystemComponent* AFortPlayerPawn::GetActivePlayerHandSplashInWaterComponent() const {
    return NULL;
}

FGameplayTagContainer AFortPlayerPawn::GatherMetaTags(const UAthenaCosmeticItemDefinition* CosmeticItem) const {
    return FGameplayTagContainer{};
}

void AFortPlayerPawn::ForceOpenParachuteAndOverrideGlider(const UAthenaGliderItemDefinition* InGliderOverride, bool NewBResetGliderOverrideOnLanding, bool bForceIntoGliderRedeploy) {
}

void AFortPlayerPawn::ForceDetachFromRemoteControlledPawn() {
}

void AFortPlayerPawn::ExitSkyTube(AFortSkyTube* SkyTube, bool& bIsLastTube) {
}

void AFortPlayerPawn::EnterSkyTube(AFortSkyTube* SkyTube, bool& bIsFirstTube) {
}

void AFortPlayerPawn::EndZiplining(bool bFromJump) {
}

void AFortPlayerPawn::EndSkydiving() {
}

void AFortPlayerPawn::EndHovering() {
}

void AFortPlayerPawn::EndGhostModeExit() {
}

void AFortPlayerPawn::EndFloating() {
}

void AFortPlayerPawn::EndedInteractSearch() {
}

void AFortPlayerPawn::DriverToPassengerAnimationStopped() {
}

bool AFortPlayerPawn::DontHandsOnHips() const {
    return false;
}

bool AFortPlayerPawn::DontCrossArms() const {
    return false;
}

void AFortPlayerPawn::DisableFaceRotation(float DurationInSeconds, bool bSetStasis) {
}

void AFortPlayerPawn::DestroyBalloonRope() {
}

void AFortPlayerPawn::DebugDestroyVehicle() {
}

void AFortPlayerPawn::ConstructItemSwapClonedFromLoadout(const FFortAthenaLoadout& Loadout, const UAthenaCosmeticItemDefinition* Item, FFortSwapItemAndVariantData& SwapData) {
}

void AFortPlayerPawn::ClientUnequipCurrentWeaponById_Implementation(FGuid WeaponItemGuid, bool bSetWeaponAttachment) {
}

void AFortPlayerPawn::ClientResetAbilitySystemComponent_Implementation() {
}

void AFortPlayerPawn::ClientNotifyAbilityFailed_Implementation(const UGameplayAbility* FailedAbility, const FGameplayTagContainer& FailedReason) {
}

void AFortPlayerPawn::ClientExecuteGameplayCueOnSpecificPlayer_Implementation(const FGameplayTag GameplayCueTag) {
}

void AFortPlayerPawn::ClientAcknowledgeVehicleInputState_Implementation(float Timestamp) {
}

void AFortPlayerPawn::ClearWeaponOverrideAnimSet() {
}

void AFortPlayerPawn::ClearExistingCosmeticPetInstance() {
}

bool AFortPlayerPawn::CanUseInventoryAsDriver() const {
    return false;
}

bool AFortPlayerPawn::CanShootFromVehicle() const {
    return false;
}

bool AFortPlayerPawn::CanPredictJumpApex() {
    return false;
}

bool AFortPlayerPawn::CanInterrogateFromDBNO(AController* EventInstigator) {
    return false;
}

void AFortPlayerPawn::CancelJumpAbility() {
}

void AFortPlayerPawn::BroadcastSetWeaponOverrideAnimSet_Implementation(UFortWeaponAnimSet* WeaponOverrideAnimSet) {
}

void AFortPlayerPawn::BroadcastClearWeaponOverrideAnimSet_Implementation() {
}

void AFortPlayerPawn::BP_ForceOpenParachute() {
}

void AFortPlayerPawn::BP_ForceLockParachuteOpen(bool bLocked) {
}

void AFortPlayerPawn::BeginZiplining(const AFortAthenaZipline* Zipline, USceneComponent* SocketComponent) {
}

void AFortPlayerPawn::BeginSkydiving(bool bFromBus) {
}

void AFortPlayerPawn::BeginHovering() {
}

void AFortPlayerPawn::AttemptInstantInteractSearch() {
}

void AFortPlayerPawn::ApplyWrapToSaveTheWorldHoverboard() {
}

void AFortPlayerPawn::ApplyCosmeticLoadout() {
}




void AFortPlayerPawn::AITargetDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortPlayerPawn::AddIgnoredActor(AActor* InActorToIgnore, const float InIgnoreDuration) {
}

void AFortPlayerPawn::AddAttachment(USkeletalMesh* Attachment, TSubclassOf<UAnimInstance> InAnimBP) {
}

void AFortPlayerPawn::AddAbilityAITarget(AFortAIPawn* InTarget) {
}

void AFortPlayerPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerPawn, VehicleInputStateReliable);
    DOREPLIFETIME(AFortPlayerPawn, bIsNearSafeZoneEdge);
    DOREPLIFETIME(AFortPlayerPawn, bIsWaterJump);
    DOREPLIFETIME(AFortPlayerPawn, bIsWaterSprintBoost);
    DOREPLIFETIME(AFortPlayerPawn, bIsWaterSprintBoostPending);
    DOREPLIFETIME(AFortPlayerPawn, bIsTargeting);
    DOREPLIFETIME(AFortPlayerPawn, bIsTargetingConsumableThrow);
    DOREPLIFETIME(AFortPlayerPawn, bIsSwappingCharacterParts);
    DOREPLIFETIME(AFortPlayerPawn, StasisMode);
    DOREPLIFETIME(AFortPlayerPawn, BuildingState);
    DOREPLIFETIME(AFortPlayerPawn, AccelerationZPack);
    DOREPLIFETIME(AFortPlayerPawn, bIsInWaterVolume);
    DOREPLIFETIME(AFortPlayerPawn, CachedTeamControllingRC);
    DOREPLIFETIME(AFortPlayerPawn, BalloonActiveCount);
    DOREPLIFETIME(AFortPlayerPawn, bIsSkydiving);
    DOREPLIFETIME(AFortPlayerPawn, bIsParachuteOpen);
    DOREPLIFETIME(AFortPlayerPawn, bIsParachuteForcedOpen);
    DOREPLIFETIME(AFortPlayerPawn, bIsSkydivingFromBus);
    DOREPLIFETIME(AFortPlayerPawn, bIsSkydivingFromLaunchPad);
    DOREPLIFETIME(AFortPlayerPawn, bReplicatedIsInVortex);
    DOREPLIFETIME(AFortPlayerPawn, bReplicatedIsInSlipperyMovement);
    DOREPLIFETIME(AFortPlayerPawn, bIsSlopeSliding);
    DOREPLIFETIME(AFortPlayerPawn, bIsProxySimulationTimedOut);
    DOREPLIFETIME(AFortPlayerPawn, bInGliderRedeploy);
    DOREPLIFETIME(AFortPlayerPawn, bStartedInteractSearch);
    DOREPLIFETIME(AFortPlayerPawn, bIsUsingJetpack);
    DOREPLIFETIME(AFortPlayerPawn, bIsPlayingEmote);
    DOREPLIFETIME(AFortPlayerPawn, bIsRespawning);
    DOREPLIFETIME(AFortPlayerPawn, bIsRespawningInAir);
    DOREPLIFETIME(AFortPlayerPawn, bIsWaitingForEmoteInteraction);
    DOREPLIFETIME(AFortPlayerPawn, bIsEmoteLeader);
    DOREPLIFETIME(AFortPlayerPawn, bShouldSyncAnimationWithEmoteLeader);
    DOREPLIFETIME(AFortPlayerPawn, bShouldJitterAnimationSyncWithEmoteLeader);
    DOREPLIFETIME(AFortPlayerPawn, bDoubleFileEmoteSecondLine);
    DOREPLIFETIME(AFortPlayerPawn, bLockGroupEmoteLeaderRotation);
    DOREPLIFETIME(AFortPlayerPawn, GroupEmoteLookTarget);
    DOREPLIFETIME(AFortPlayerPawn, GroupEmoteLeaderRotationYawOffset);
    DOREPLIFETIME(AFortPlayerPawn, ReplicatedCustomMeshHeightAdjustTarget);
    DOREPLIFETIME(AFortPlayerPawn, VehicleInputStateUnreliable);
    DOREPLIFETIME(AFortPlayerPawn, bIsInAnyStorm);
    DOREPLIFETIME(AFortPlayerPawn, bIsInsideSafeZone);
    DOREPLIFETIME(AFortPlayerPawn, bHasStartedFloating);
    DOREPLIFETIME(AFortPlayerPawn, ZiplineState);
    DOREPLIFETIME(AFortPlayerPawn, bCanPredictJumpApex);
    DOREPLIFETIME(AFortPlayerPawn, VehicleStateRep);
    DOREPLIFETIME(AFortPlayerPawn, InteractingPCRep);
    DOREPLIFETIME(AFortPlayerPawn, PossessedProp);
    DOREPLIFETIME(AFortPlayerPawn, BaseCosmeticLoadout);
    DOREPLIFETIME(AFortPlayerPawn, AppliedSwaps);
    DOREPLIFETIME(AFortPlayerPawn, ServerLoadoutChangeSync);
    DOREPLIFETIME(AFortPlayerPawn, RepCharPartAnimMontageInfo);
    DOREPLIFETIME(AFortPlayerPawn, ClientObservedStats);
    DOREPLIFETIME(AFortPlayerPawn, AnimBPOverride);
    DOREPLIFETIME(AFortPlayerPawn, FootstepBankOverride);
    DOREPLIFETIME(AFortPlayerPawn, DBNOHoisterData);
    DOREPLIFETIME(AFortPlayerPawn, DBNOHoistee);
    DOREPLIFETIME(AFortPlayerPawn, PackedReplicatedSlopeAngles);
    DOREPLIFETIME(AFortPlayerPawn, PlayerStatus);
    DOREPLIFETIME(AFortPlayerPawn, AccelerationPack);
    DOREPLIFETIME(AFortPlayerPawn, RepAnimMontageInfo);
    DOREPLIFETIME(AFortPlayerPawn, RepAnimMontageStartSection);
    DOREPLIFETIME(AFortPlayerPawn, bNetMovementPrioritized);
    DOREPLIFETIME(AFortPlayerPawn, LandingMontagePair);
    DOREPLIFETIME(AFortPlayerPawn, bParachuteLockedOpen);
    DOREPLIFETIME(AFortPlayerPawn, AttachmentMesh);
    DOREPLIFETIME(AFortPlayerPawn, VortexParams);
    DOREPLIFETIME(AFortPlayerPawn, ReplicatedSkyTube);
    DOREPLIFETIME(AFortPlayerPawn, PetState);
    DOREPLIFETIME(AFortPlayerPawn, GliderOverrideStack);
    DOREPLIFETIME(AFortPlayerPawn, RemoteViewData32);
    DOREPLIFETIME(AFortPlayerPawn, ControlledRCPawn);
    DOREPLIFETIME(AFortPlayerPawn, StoredControlRotation);
    DOREPLIFETIME(AFortPlayerPawn, FacialTypeOverride);
}

AFortPlayerPawn::AFortPlayerPawn() {
    this->bIsNearSafeZoneEdge = false;
    this->bPlayingSafeZoneEffects = false;
    this->bDoSafeZoneCleanup = false;
    this->bIsSwimmingAnimLayerLinked = false;
    this->bIsSprintJump = false;
    this->bHasDisableSprintTag = false;
    this->bDisableSwimSprintCancel = false;
    this->bIsWaterJump = false;
    this->bIsWaterSprintBoost = false;
    this->bIsWaterSprintBoostPending = false;
    this->bPlayingPassengerToPassengerAnimation = false;
    this->bPlayingDriverToPassengerAnimation = false;
    this->bIsTargeting = false;
    this->bIsTargetingConsumableThrow = false;
    this->bIsSwappingCharacterParts = false;
    this->bBalloonMovementActivated = false;
    this->bIsScriptedBot = false;
    this->bBuildHotfix = false;
    this->StasisMode = EFortPawnStasisMode::None;
    this->BuildingState = EFortBuildingState::None;
    this->AccelerationZPack = 0;
    this->ParachuteDirectionalSpeedMultiplierCurve = NULL;
    this->SkydivingDirectionalSpeedMultiplierCurve = NULL;
    this->BallooningDirectionalSpeedMultiplierCurve = NULL;
    this->DirectionalSpeedMultiplierCurve = NULL;
    this->MinimumTimeBetweenSteps = 1;
    this->LastStepTime = 1;
    this->bIsInWaterVolume = false;
    this->bNotifyBlueprintWhenLandscapeTeleporting = true;
    this->CachedTeamControllingRC = 0;
    this->BalloonActiveCount = 0;
    this->bParachuteDeployFixedVerticalDistance = true;
    this->bIsSkydiving = false;
    this->bIsParachuteOpen = false;
    this->bLocalIsSkydiving = false;
    this->bLocalIsParachuteForcedOpen = false;
    this->bIsParachuteForcedOpen = false;
    this->bIsSkydivingFromBus = false;
    this->bIsSkydivingFromLaunchPad = false;
    this->bPendingSkydiveLaunch = false;
    this->bIsInVortex = false;
    this->bReplicatedIsInVortex = false;
    this->bIsInSlipperyMovement = false;
    this->bReplicatedIsInSlipperyMovement = false;
    this->bIsBelowAutoDeployTestHeight = false;
    this->bIsSlopeSliding = false;
    this->bIsProxySimulationTimedOut = false;
    this->bIsPedestalHero = false;
    this->bInGliderRedeploy = false;
    this->bLocalInGliderRedeploy = false;
    this->bBeingRepossessed = false;
    this->bInitAbilitySystemComponentFromPlayerState = true;
    this->bStartedInteractSearch = false;
    this->bPawnLODDirty = false;
    this->bIsUsingJetpack = false;
    this->bIsPlayingEmote = false;
    this->bShowingOverdriveEffect = false;
    this->bIsRespawning = false;
    this->bIsRespawningInAir = false;
    this->bInitializedPostRepPlayerState = false;
    this->bEnableCharacterPartRigidBodyNode = false;
    this->bInitializedCharacterPartRBANSettings = false;
    this->bIsLocalViewTarget = false;
    this->bHasWaterParticleSystem = true;
    this->bIsInFrontEndHologram = false;
    this->bForceMoveRelativeToCameraRotation = false;
    this->bIsWaitingForEmoteInteraction = false;
    this->bIsEmoteLeader = false;
    this->bShouldSyncAnimationWithEmoteLeader = false;
    this->bShouldJitterAnimationSyncWithEmoteLeader = false;
    this->bDoubleFileEmoteSecondLine = false;
    this->bLockGroupEmoteLeaderRotation = false;
    this->GroupEmoteLookTarget = NULL;
    this->GroupEmoteLeaderRotationYawOffset = 1;
    this->GroupEmoteMaximumZDifference = 1;
    this->CurrentMontagerLeader = NULL;
    this->CurrentSyncedMontage = NULL;
    this->bCharacterPartsCastIndirectShadows = true;
    this->CharacterGender = EFortCustomGender::Invalid;
    this->CharacterBodyType = EFortCustomBodyType::NONE;
    this->JumpLastActivatedTime = 1;
    this->CrouchMeshOffset = 1;
    this->CustomMeshHeightAdjust = 1;
    this->CustomMeshHeightAdjustLerpSpeed = 1;
    this->CustomMeshHeightAdjustLerpTarget = 1;
    this->ReplicatedCustomMeshHeightAdjustTarget = 0;
    this->bIsInAnyStorm = false;
    this->bIsInsideSafeZone = false;
    this->SafeZoneAppliedGE = NULL;
    this->SelfReviveGameplayEffect = NULL;
    this->TeammateReviveGameplayEffect = NULL;
    this->DBNOInteractionCollisionProfile = TEXT("FortTriggerOnlyInteractions");
    this->DBNODeferTime = 1;
    this->DBNOInteractCollisionComponent = NULL;
    this->AggroRangeOverride = 1;
    this->SetByCallerReviveSignalInStorm = 1;
    this->LastBuildingMetadata = NULL;
    this->SprintCancelTime = 1;
    this->WaterSprintBoostAllowedTimer = 1;
    this->bHasStartedFloating = false;
    this->ZiplineSocketZOffset = 1;
    this->ClientSwimDiveInputTime = 1;
    this->bCanPredictJumpApex = false;
    this->UnableToPerformActionMontage = NULL;
    this->UnableToPerformActionSound = NULL;
    this->MoveSoundStimulusBroadcastInterval = 1;
    this->EmoteStartTime = 1;
    this->EmoteRandomNum = 1;
    this->bPlayingPassengerToDriverAnimation = false;
    this->VehicleSpeedAtTimeOfJump = 1;
    this->InteractingPCRep = NULL;
    this->TetherComponent = NULL;
    this->PendingTetherLaunch = 1;
    this->TetherJumpLastTime = 1;
    this->bSupportsTetheredMovement = true;
    this->BalloonRope = NULL;
    this->PossessedProp = NULL;
    this->SlopeCameraOffsetFrameCounter = 0;
    this->VehicleInputComponent = NULL;
    this->BluePrintPlaceAnimation = NULL;
    this->BluePrintEditAnimation = NULL;
    this->EmoteInteractionCollisionProfile = TEXT("FortTriggerOnlyInteractions");
    this->EmoteInteractCollisionComponent = NULL;
    this->BlueprintPaperMID = NULL;
    this->AccessoryColorSwatchHandler[0] = NULL;
    this->AccessoryColorSwatchHandler[1] = NULL;
    this->AccessoryColorSwatchHandler[2] = NULL;
    this->AccessoryColorSwatchHandler[3] = NULL;
    this->AccessoryColorSwatchHandler[4] = NULL;
    this->AccessoryColorSwatchHandler[5] = NULL;
    this->Hero = NULL;
    this->DisplayContext = EFortPawnDisplayContext::BattleRoyale;
    this->HACK_CustomPRIComponent = NULL;
    this->CharacterParts[0] = NULL;
    this->CharacterParts[1] = NULL;
    this->CharacterParts[2] = NULL;
    this->CharacterParts[3] = NULL;
    this->CharacterParts[4] = NULL;
    this->CharacterParts[5] = NULL;
    this->CharacterColorSwatches[0] = NULL;
    this->CharacterColorSwatches[1] = NULL;
    this->CharacterPartColorSwatches[0] = NULL;
    this->CharacterPartColorSwatches[1] = NULL;
    this->CharacterPartColorSwatches[2] = NULL;
    this->CharacterPartColorSwatches[3] = NULL;
    this->CharacterPartColorSwatches[4] = NULL;
    this->CharacterPartColorSwatches[5] = NULL;
    this->CharacterCharms[0] = NULL;
    this->CharacterCharms[1] = NULL;
    this->CharacterCharms[2] = NULL;
    this->CharacterCharms[3] = NULL;
    this->CharacterPartSkeletalMeshComponents[0] = NULL;
    this->CharacterPartSkeletalMeshComponents[1] = NULL;
    this->CharacterPartSkeletalMeshComponents[2] = NULL;
    this->CharacterPartSkeletalMeshComponents[3] = NULL;
    this->CharacterPartSkeletalMeshComponents[4] = NULL;
    this->CharacterPartSkeletalMeshComponents[5] = NULL;
    this->CharacterPartSMHiddenRefCount[0] = 0;
    this->CharacterPartSMHiddenRefCount[1] = 0;
    this->CharacterPartSMHiddenRefCount[2] = 0;
    this->CharacterPartSMHiddenRefCount[3] = 0;
    this->CharacterPartSMHiddenRefCount[4] = 0;
    this->CharacterPartSMHiddenRefCount[5] = 0;
    this->ServerLoadoutChangeSync = 0;
    this->bAllowClientLoadoutChangeSync = true;
    this->PreviousCharacterParts[0] = NULL;
    this->PreviousCharacterParts[1] = NULL;
    this->PreviousCharacterParts[2] = NULL;
    this->PreviousCharacterParts[3] = NULL;
    this->PreviousCharacterParts[4] = NULL;
    this->PreviousCharacterParts[5] = NULL;
    this->CharacterPartModifiers[0] = NULL;
    this->CharacterPartModifiers[1] = NULL;
    this->CharacterPartModifiers[2] = NULL;
    this->CharacterPartModifiers[3] = NULL;
    this->CharacterPartModifiers[4] = NULL;
    this->CharacterPartModifiers[5] = NULL;
    this->AnimBPOverride = NULL;
    this->OriginalAnimBP = NULL;
    this->OnCrouchStartSound = NULL;
    this->OnCrouchEndSound = NULL;
    this->FootstepBankOverride = NULL;
    this->OriginalFootstepBank = NULL;
    this->PickupSpeedMultiplier = 1;
    this->MaxIndicatorVisibilityDistForEnemies = 1;
    this->MaxIndicatorVisibilityDistForAllies = 1;
    this->DBNOHoistee = NULL;
    this->DBNOHoisterAnimSet = NULL;
    this->DBNOHoisteeAnimClass = NULL;
    this->ThrowCarriedPlayerStrengthXY = 1;
    this->ThrowCarriedPlayerStrengthZ = 1;
    this->DropCarriedPlayerForwardOffset = 1;
    this->DropCarriedPlayerHeightOffset = 1;
    this->DropCarriedPlayerTraceHeight = 1;
    this->bAllowDBNOCarry = false;
    this->bAllowDBNOCarryEnemies = true;
    this->bIsBeingDBNOCarried = false;
    this->bIsDBNOCarrying = false;
    this->bRequestedThrowCarriedPlayer = false;
    this->PackedReplicatedSlopeAngles = 0;
    this->CustomizationAssetLoader = NULL;
    this->SpawnParticles = NULL;
    this->SpawnSound = NULL;
    this->bIsLocalPlayer = false;
    this->bDamagedEnemy = false;
    this->PlayerStatus = 0;
    this->AccelerationPack = 0;
    this->RepAnimMontageStartSection = 0;
    this->bNetMovementPrioritized = false;
    this->VisibilityComponent = NULL;
    this->BlendablesPostProcessComp = NULL;
    this->bUseControllerRotationYawToRestore = false;
    this->CurrentGliderOpenSound = NULL;
    this->CurrentGliderCloseSound = NULL;
    this->bParachuteLockedOpen = false;
    this->bLocalParachuteLockedOpen = false;
    this->AttachmentMeshComponent = NULL;
    this->BotScriptedBehavior = NULL;
    this->ReplicatedSkyTube = NULL;
    this->CurrentSkyTube = NULL;
    this->UnderwaterDamageComponent = NULL;
    this->GliderClass = NULL;
    this->PetState = NULL;
    this->CosmeticPetInstance = NULL;
    this->ParachuteAttachment = NULL;
    this->bResetGliderOverrideOnLanding = false;
    this->ParachuteCooldownToOpen = 1;
    this->ParachuteCooldownToClose = 1;
    this->PreDrivingAnimBP = NULL;
    this->CurrentVehicleAnimLayerOverlayClass = NULL;
    this->CurrentSwimmingAnimLayerOverlayClass = NULL;
    this->DefaultSwimmingAnimLayerOverlayClass = NULL;
    this->TimeBeforeSwimmingLayerDeactivated = 1;
    this->ParachuteAudioLoop = NULL;
    this->ParachuteAndSkydiveAudioFadeInTime = 1;
    this->ParachuteAndSkydiveAudioFadeOutTime = 1;
    this->SkydiveAudioLoop = NULL;
    this->SoundOnParachuteForcedOpen = NULL;
    this->SkydivingLoop1P = NULL;
    this->SkydivingLoop3P = NULL;
    this->ParachuteOpenLoop1P = NULL;
    this->ParachuteOpenLoop3P = NULL;
    this->SwimmingAudioLoop = NULL;
    this->SwimmingAudioFadeOutTime = 1;
    this->SwimmingAudioInterpSpeed = 1;
    this->SoundOnSwimmingLoop = NULL;
    this->RemoteViewData32 = 0;
    this->LastQuickBarSwitchRequestTime = 1;
    this->CrouchStartTime = 1;
    this->CrouchEndTime = 1;
    this->CrouchLerpTime = 1;
    this->MeleeAbilityCooldown = 1;
    this->bDisallowInterrogation = false;
    this->bDisallowInterrogationOnNPC = false;
    this->FacialTypeOverride = EFortFacialAnimTypes::Default;
    this->GhostModeExitStartTime = 1;
    this->GhostModeExitDuration = 1;
    this->PSC_PlayerInWater = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerInWaterFX"));
    this->PSC_PlayerInWaterSurfaceSwimming = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerInWaterSurfaceSwimmingFX"));
    this->NiagaraPlayerInWaterBasicAsset = NULL;
    this->NiagaraPlayerInWaterSwimmingAsset = NULL;
    this->NiagaraPlayerWaterHandSplashAsset = NULL;
    this->NiagaraPlayerWaterFootSplashAsset = NULL;
    this->NiagaraPlayerWaterLargePlayerSplashAsset = NULL;
    this->NiagaraPlayerWaterBoostAsset = NULL;
    this->NiagaraPlayerStandingInWater = NULL;
    this->NiagaraPlayerSwimmingInWater = NULL;
    this->NiagaraPlayerHandSplashInWater = NULL;
    this->NiagaraPlayerFootSplashInWaterLeft = NULL;
    this->NiagaraPlayerFootSplashInWaterRight = NULL;
    this->NiagaraPlayerJumpSplashInWater = NULL;
    this->NiagaraPlayerWaterBoost = NULL;
    this->bWaterFootSplashActive = false;
    this->bEnableWaterInteractionEffects = true;
}

