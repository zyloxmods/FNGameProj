#include "FortPlayerPawn.h"
#include "Components/PostProcessComponent.h"
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

void AFortPlayerPawn::UnlockCameraAfterVehicleSeatTransition() {
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

void AFortPlayerPawn::StopItemInteractionAbility(const EItemInteractionStatus ItemInteractionStatus) {
}

void AFortPlayerPawn::StopFacialFromSnippet() {
}

void AFortPlayerPawn::StartGhostModeExit(const float InGhostModeExitDuration) {
}

void AFortPlayerPawn::StartedInteractSearch() {
}

bool AFortPlayerPawn::ShouldPlayDeathAnimation() {
    return false;
}

bool AFortPlayerPawn::ShouldDriverHaveReticle() const {
    return false;
}

void AFortPlayerPawn::SetVehicleOverrideExit(bool bIgnoreLaunch) {
}

void AFortPlayerPawn::SetStasisMode(EFortPawnStasisMode InStasisMode) {
}

void AFortPlayerPawn::SetPreviousVelocity(FVector OldVelocity) {
}

void AFortPlayerPawn::SetPreviousPosition(FVector OldPosition) {
}

void AFortPlayerPawn::SetPetType(const UAthenaPetItemDefinition* PetToCreate) {
}

void AFortPlayerPawn::SetPendingSkydiveLaunch(bool bPending) {
}

void AFortPlayerPawn::SetNumActiveBalloons(int32 NewBalloonCount) {
}

void AFortPlayerPawn::SetInVortex(bool bNewValue, float UpwardLaunchVelocity, float GravityFloorAltitude, float GravityFloorWidth, float GravityFloorGravityScalar, float GravityFloorTerminalVelocity) {
}

void AFortPlayerPawn::SetInSlipperyMovement(bool bIsSlippery) {
}

void AFortPlayerPawn::SetHomeActor(AActor* NewActor) {
}


void AFortPlayerPawn::SetEquippedArmoredInterface(TScriptInterface<IFortArmoredInterface> InInterface) const {
}

void AFortPlayerPawn::SetBalloonRope(ABuildingGameplayActor* InBalloonRope) {
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

void AFortPlayerPawn::ServerPlayUnableToPerformActionMontage_Implementation() {
}
bool AFortPlayerPawn::ServerPlayUnableToPerformActionMontage_Validate() {
    return true;
}

AFortAthenaVehicle* AFortPlayerPawn::ServerOnExitVehicle() {
    return NULL;
}

void AFortPlayerPawn::ServerHandlePickupWithSwap_Implementation(AFortPickup* Pickup, FGuid Swap, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound) {
}
bool AFortPlayerPawn::ServerHandlePickupWithSwap_Validate(AFortPickup* Pickup, FGuid Swap, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound) {
    return true;
}

void AFortPlayerPawn::ServerHandlePickupWithRequestedSwap_Implementation(AFortPickup* Pickup, FGuid Swap, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound) {
}
bool AFortPlayerPawn::ServerHandlePickupWithRequestedSwap_Validate(AFortPickup* Pickup, FGuid Swap, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound) {
    return true;
}

void AFortPlayerPawn::ServerHandlePickup_Implementation(AFortPickup* Pickup, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound) {
}
bool AFortPlayerPawn::ServerHandlePickup_Validate(AFortPickup* Pickup, float InFlyTime, const FVector InStartDirection, bool bPlayPickupSound) {
    return true;
}

void AFortPlayerPawn::ServerEquipLastWeaponOrGadget_Implementation(bool bForce) {
}
bool AFortPlayerPawn::ServerEquipLastWeaponOrGadget_Validate(bool bForce) {
    return true;
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

void AFortPlayerPawn::ResetGameplayAttributes(const bool bIgnoreStatClamp) {
}

void AFortPlayerPawn::ResetClothAndDynamics() {
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

void AFortPlayerPawn::PopFootstepBankOverride(int32 Priority, UFortFootstepAudioBank* InFootstepBankOverride) {
}

void AFortPlayerPawn::PopAnimBPOverride(int32 Priority, TSubclassOf<UAnimInstance> InAnimBPOverride) {
}

void AFortPlayerPawn::PerformSupplementalKillVolumeSweep() {
}

void AFortPlayerPawn::PassengerToPassengerAnimationStopped() {
}

void AFortPlayerPawn::PassengerToDriverAnimationStopped() {
}



void AFortPlayerPawn::OnRep_VehicleInputStateUnreliable() {
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

void AFortPlayerPawn::OnRep_ParachuteLockedOpen() {
}

void AFortPlayerPawn::OnRep_ParachuteAttachment() {
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

void AFortPlayerPawn::OnRep_IsOutsideSafeZone() {
}

void AFortPlayerPawn::OnRep_InVehicle() {
}

void AFortPlayerPawn::OnRep_FootstepBankOverride() {
}

void AFortPlayerPawn::OnRep_CosmeticLoadout() {
}

void AFortPlayerPawn::OnRep_ControlledRCPawn() {
}

void AFortPlayerPawn::OnRep_CharPartAnimMontageInfo() {
}

void AFortPlayerPawn::OnRep_AttachmentMesh() {
}

void AFortPlayerPawn::OnRep_AnimBPOverride() {
}

void AFortPlayerPawn::OnRep_AccelerationZPack() {
}

void AFortPlayerPawn::OnRep_AccelerationPack() {
}







void AFortPlayerPawn::OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AFortPlayerPawn::MulticastUpdateVehicleInputStateReliable_Implementation(FFortAthenaVehicleInputStateReliable ReliableInput) {
}

void AFortPlayerPawn::MarkSafe(TSubclassOf<UGameplayEffect> GEtoApply) {
}

void AFortPlayerPawn::ManualReviveFromDBNO() {
}

bool AFortPlayerPawn::LocalIsTryingToGetPickup() {
    return false;
}

void AFortPlayerPawn::ListCharacterParts(const FString& GenderAndOrPartString) const {
}

bool AFortPlayerPawn::IsZiplining() {
    return false;
}

bool AFortPlayerPawn::IsUsingUmbrella() const {
    return false;
}

bool AFortPlayerPawn::IsUsingPersonalVehicle() const {
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

bool AFortPlayerPawn::IsInCharacterCustomization() const {
    return false;
}

bool AFortPlayerPawn::IsDrivingVehicle() const {
    return false;
}

bool AFortPlayerPawn::IsDrivingInteractBlockingVehicle() const {
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

float AFortPlayerPawn::GetSimulatedAttributeValue(const FGameplayAttribute& Attribute, const float DefaultValue) const {
    return 0.0f;
}

FVector AFortPlayerPawn::GetPreviousVelocity() {
    return FVector{};
}

FVector AFortPlayerPawn::GetPreviousPosition() {
    return FVector{};
}

bool AFortPlayerPawn::GetPendingSkydiveLaunch() const {
    return false;
}

int32 AFortPlayerPawn::GetPawnRawBudgetValue() const {
    return 0;
}

int32 AFortPlayerPawn::GetPawnMovementLOD() const {
    return 0;
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

bool AFortPlayerPawn::GetIsSlopeSliding() const {
    return false;
}

AActor* AFortPlayerPawn::GetHomeActor() const {
    return NULL;
}

void AFortPlayerPawn::GetGender(bool& IsMale, bool& IsFemale) const {
}

UAnimMontage* AFortPlayerPawn::GetFrontendAnimMontageIdleOverride() const {
    return NULL;
}

int32 AFortPlayerPawn::GetExtraLives() const {
    return 0;
}

AFortSkyTube* AFortPlayerPawn::GetCurrentSkyTube() const {
    return NULL;
}
/*
TSoftObjectPtr<UFXSystemAsset> AFortPlayerPawn::GetContrailParticleSystemSoftRef() {
    return NULL;
}*/

EFortCustomGender AFortPlayerPawn::GetCharacterGender() const {
    return EFortCustomGender::Invalid;
}

EFortCustomBodyType AFortPlayerPawn::GetCharacterBodyType() const {
    return EFortCustomBodyType::Small;
}

float AFortPlayerPawn::GetBaseAimPitchQuantized() const {
    return 0.0f;
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

void AFortPlayerPawn::EndedInteractSearch() {
}

void AFortPlayerPawn::DriverToPassengerAnimationStopped() {
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

void AFortPlayerPawn::ClientResetAbilitySystemComponent_Implementation() {
}

void AFortPlayerPawn::ClientNotifyAbilityFailed_Implementation(const UGameplayAbility* FailedAbility, const FGameplayTagContainer& FailedReason) {
}

void AFortPlayerPawn::ClientAcknowledgeVehicleInputState_Implementation(float Timestamp) {
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

void AFortPlayerPawn::CancelJumpAbility() {
}

void AFortPlayerPawn::BP_ForceOpenParachute() {
}

void AFortPlayerPawn::BP_ForceLockParachuteOpen(bool bLocked) {
}

void AFortPlayerPawn::BeginZiplining(const AFortAthenaZipline* Zipline, USceneComponent* SocketComponent, FName SocketName, FVector SocketOffset) {
}

void AFortPlayerPawn::BeginSkydiving(bool bFromBus) {
}

void AFortPlayerPawn::BeginHovering() {
}




void AFortPlayerPawn::AITargetDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortPlayerPawn::AddAttachment(USkeletalMesh* Attachment, UAnimBlueprint* InAnimBP) {
}

void AFortPlayerPawn::AddAbilityAITarget(AFortAIPawn* InTarget) {
}

void AFortPlayerPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerPawn, bIsOutsideSafeZone);
    DOREPLIFETIME(AFortPlayerPawn, bIsNearSafeZoneEdge);
    DOREPLIFETIME(AFortPlayerPawn, bIsTargeting);
    DOREPLIFETIME(AFortPlayerPawn, StasisMode);
    DOREPLIFETIME(AFortPlayerPawn, BuildingState);
    DOREPLIFETIME(AFortPlayerPawn, AccelerationZPack);
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
    DOREPLIFETIME(AFortPlayerPawn, VehicleInputStateUnreliable);
    DOREPLIFETIME(AFortPlayerPawn, ZiplineState);
    DOREPLIFETIME(AFortPlayerPawn, bCanPredictJumpApex);
    DOREPLIFETIME(AFortPlayerPawn, VehicleStateRep);
    DOREPLIFETIME(AFortPlayerPawn, CosmeticLoadout);
    DOREPLIFETIME(AFortPlayerPawn, RepCharPartAnimMontageInfo);
    DOREPLIFETIME(AFortPlayerPawn, ClientObservedStats);
    DOREPLIFETIME(AFortPlayerPawn, AnimBPOverride);
    DOREPLIFETIME(AFortPlayerPawn, FootstepBankOverride);
    DOREPLIFETIME(AFortPlayerPawn, PackedReplicatedSlopeAngles);
    DOREPLIFETIME(AFortPlayerPawn, PlayerStatus);
    DOREPLIFETIME(AFortPlayerPawn, AccelerationPack);
    DOREPLIFETIME(AFortPlayerPawn, bParachuteLockedOpen);
    DOREPLIFETIME(AFortPlayerPawn, AttachmentMesh);
    DOREPLIFETIME(AFortPlayerPawn, VortexParams);
    DOREPLIFETIME(AFortPlayerPawn, ReplicatedSkyTube);
    DOREPLIFETIME(AFortPlayerPawn, PetState);
    DOREPLIFETIME(AFortPlayerPawn, ParachuteAttachment);
    DOREPLIFETIME(AFortPlayerPawn, RemoteViewData32);
    DOREPLIFETIME(AFortPlayerPawn, ControlledRCPawn);
    DOREPLIFETIME(AFortPlayerPawn, StoredControlRotation);
}

AFortPlayerPawn::AFortPlayerPawn() {
    this->bIsOutsideSafeZone = false;
    this->bIsNearSafeZoneEdge = false;
    this->bPlayingSafeZoneEffects = false;
    this->bDoSafeZoneCleanup = false;
    this->bIsSprintJump = false;
    this->bPlayingPassengerToPassengerAnimation = false;
    this->bPlayingDriverToPassengerAnimation = false;
    this->bCameraLockedForVehicleSeatTransition = false;
    this->bIsTargeting = false;
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
    this->CachedTeamControllingRC = 0;
    this->BalloonActiveCount = 0;
    this->bParachuteDeployFixedVerticalDistance = true;
    this->bIsSkydiving = false;
    this->bIsParachuteOpen = false;
    this->bLocalIsSkydiving = false;
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
    this->bCharacterPartsCastIndirectShadows = true;
    this->CharacterGender = EFortCustomGender::Invalid;
   // this->CharacterBodyType = EFortCustomBodyType::Medium;
    this->JumpLastActivatedTime = -1.00f;
    this->CrouchMeshOffset = -55.00f;
    this->OutsideSafeZoneBlendSpeed = 2.00f;
    this->CurrentOutsideSafeZonePPVBlend = 0.00f;
    this->TargetOutsideSafeZonePPVBlend = 0.00f;
    this->OutsideSafeZonePPComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("OutsideSafeZonePP0"));
    this->SafeZoneAppliedGE = NULL;
    this->SelfReviveGameplayEffect = NULL;
    this->TeammateReviveGameplayEffect = NULL;
    this->DBNOInteractionCollisionProfile = TEXT("FortTriggerOnlyInteractions");
    this->DBNODeferTime = 3.00f;
    this->DBNOInteractCollisionComponent = NULL;
    this->AggroRangeOverride = 500.00f;
    this->LastBuildingMetadata = NULL;
    this->SprintCancelTime = 0.00f;
    this->bCanPredictJumpApex = false;
    this->UnableToPerformActionMontage = NULL;
    this->UnableToPerformActionSound = NULL;
    this->MoveSoundStimulusBroadcastInterval = 0.50f;
    this->EmoteStartTime = 0.00f;
    this->bPlayingPassengerToDriverAnimation = false;
    this->VehicleSpeedAtTimeOfJump = 0.00f;
    this->BalloonRope = NULL;
    this->SlopeCameraOffsetFrameCounter = 0;
    this->VehicleInputComponent = NULL;
    this->BluePrintPlaceAnimation = NULL;
    this->BluePrintEditAnimation = NULL;
    this->BlueprintPaperMID = NULL;
    this->AccessoryColorSwatchHandler[0] = NULL;
    this->AccessoryColorSwatchHandler[1] = NULL;
    this->AccessoryColorSwatchHandler[2] = NULL;
    this->AccessoryColorSwatchHandler[3] = NULL;
    this->AccessoryColorSwatchHandler[4] = NULL;
    this->AccessoryColorSwatchHandler[5] = NULL;
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
    this->PickupSpeedMultiplier = 1.00f;
    this->MaxIndicatorVisibilityDistForEnemies = 4750.00f;
    this->MaxIndicatorVisibilityDistForAllies = -1.00f;
    this->PackedReplicatedSlopeAngles = 0;
    this->CustomizationAssetLoader = NULL;
    this->SpawnParticles = NULL;
    this->SpawnSound = NULL;
    this->NumSecondsOnGroundBeforeStoppingRagdoll = 5.00f;
    this->bIsLocalPlayer = false;
    this->bDamagedEnemy = false;
    this->PlayerStatus = 0;
    this->AccelerationPack = 0;
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
    this->GliderClass = NULL;
    this->PetState = NULL;
    this->CosmeticPetInstance = NULL;
    this->ParachuteAttachment = NULL;
    this->ParachuteAttachSocket = TEXT("weapon_r");
    this->ParachuteCooldownToOpen = 0.50f;
    this->ParachuteCooldownToClose = 0.50f;
    this->PreDrivingAnimBP = NULL;
    this->ParachuteAudioLoop = NULL;
    this->ParachuteAndSkydiveAudioFadeInTime = 0.50f;
    this->ParachuteAndSkydiveAudioFadeOutTime = 0.20f;
    this->SkydiveAudioLoop = NULL;
    this->SkydivingLoop1P = NULL;
    this->SkydivingLoop3P = NULL;
    this->ParachuteOpenLoop1P = NULL;
    this->ParachuteOpenLoop3P = NULL;
    this->RemoteViewData32 = 0;
    this->LastQuickBarSwitchRequestTime = 0.00f;
    this->CrouchStartTime = 0.00f;
    this->CrouchEndTime = 0.00f;
    this->CrouchLerpTime = 0.25f;
    this->MeleeAbilityCooldown = 0.00f;
    this->GhostModeExitStartTime = 0.00f;
    this->GhostModeExitDuration = 0.00f;
    this->bAllowClientsideBuildingToolEquipPrediction = true;
}

