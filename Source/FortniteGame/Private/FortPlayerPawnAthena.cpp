#include "FortPlayerPawnAthena.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "FortPawnComponent_Convert.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortPlayerPawnAthena::TurnOnCollisionAfterSkydiveDelay() {
}

void AFortPlayerPawnAthena::TeleportToSkyDive(float HeightAboveGround) {
}

void AFortPlayerPawnAthena::StopConsumableUseAudio() {
}

void AFortPlayerPawnAthena::StartConsumableUseAudio(USoundBase* Sound) {
}

void AFortPlayerPawnAthena::SetShouldSkipMovementFullSimulation(bool bInShouldSkipMovementFullSimulation) {
}

void AFortPlayerPawnAthena::SetShouldDropItemsOnDeath(bool bInShouldDropItemsOnDeath) {
}

void AFortPlayerPawnAthena::SetMeshHeightAdjustAthena(float HeightAdjust) {
}

void AFortPlayerPawnAthena::SetFallInstigator(AController* NewFallInstigator, FGameplayTagContainer NewFallingDamageTags) {
}

void AFortPlayerPawnAthena::SetDamageCameraShakeClass(TSubclassOf<UCameraShake> NewValue) {
}

bool AFortPlayerPawnAthena::SetCharacterBodyVisibilityForPossession(bool bVisible) {
    return false;
}

void AFortPlayerPawnAthena::SetCapsuleRadiusAthena(float Radius) {
}

void AFortPlayerPawnAthena::SetCapsuleHalfHeightAthena(float HalfHeight) {
}

void AFortPlayerPawnAthena::SetBushEnabled(bool bEnableBush) {
}

void AFortPlayerPawnAthena::ServerSuicide_Implementation(bool bSuppressResurrectionChip, int32 MatchPlacement) {
}
bool AFortPlayerPawnAthena::ServerSuicide_Validate(bool bSuppressResurrectionChip, int32 MatchPlacement) {
    return true;
}

void AFortPlayerPawnAthena::ServerSetInteractingItem_Implementation(AActor* InteractingItem, bool bClearInteraction) {
}
bool AFortPlayerPawnAthena::ServerSetInteractingItem_Validate(AActor* InteractingItem, bool bClearInteraction) {
    return true;
}

void AFortPlayerPawnAthena::ServerCreativeToggleGhost_Implementation(const bool bEnableOnly) {
}
bool AFortPlayerPawnAthena::ServerCreativeToggleGhost_Validate(const bool bEnableOnly) {
    return true;
}





void AFortPlayerPawnAthena::OnRep_ReplayRepAnimMontageInfo() {
}

void AFortPlayerPawnAthena::OnRep_MeshHeightAdjustAthena() {
}

void AFortPlayerPawnAthena::OnRep_CapsuleRadiusAthena() {
}

void AFortPlayerPawnAthena::OnRep_CapsuleHalfHeightAthena() {
}

void AFortPlayerPawnAthena::OnRep_bIsCreativeGhostModeActivated() {
}

void AFortPlayerPawnAthena::OnRep_AttributeProxy() {
}








void AFortPlayerPawnAthena::NetMulticast_SuccessfulBuildingEdit_Implementation() {
}

void AFortPlayerPawnAthena::MeleeCombatBlocked() {
}

void AFortPlayerPawnAthena::MeleeCombatActivated() {
}

bool AFortPlayerPawnAthena::LocalIsTryingToEnterVehicle() {
    return false;
}

void AFortPlayerPawnAthena::LandscapeCheck() {
}

bool AFortPlayerPawnAthena::IsPlayingMinigame() const {
    return false;
}

bool AFortPlayerPawnAthena::IsBackpackEquipped(EBackpackType BackpackType) const {
    return false;
}

float AFortPlayerPawnAthena::GetDefaultReviveFromDBNOTime() {
    return 0.0f;
}

float AFortPlayerPawnAthena::GetCurrentVoiceAmplitude() {
    return 0.0f;
}

UAnimMontage* AFortPlayerPawnAthena::GetAdditiveHitReactsMontage_Implementation() {
    return NULL;
}

void AFortPlayerPawnAthena::GameplayCue_PinkOatmeal_MeatPizza_PossessProp(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortPlayerPawnAthena::GameplayCue_Creative_PossessProp(TEnumAsByte<EGameplayCueEvent::Type> EventType, FGameplayCueParameters Parameters) {
}

void AFortPlayerPawnAthena::GamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortPlayerPawnAthena::ForceReviveFromDBNO() {
}

void AFortPlayerPawnAthena::FastSharedReplication_Implementation(const FSharedRepMovement& SharedRepMovement) {
}

void AFortPlayerPawnAthena::CreativeToggleGhost(const bool bEnableOnly) {
}

bool AFortPlayerPawnAthena::CanPlayerCreateInCurrentVolume(AFortVolume*& OutCurrentVolume) const {
    return false;
}

void AFortPlayerPawnAthena::CancelMeleeCombatSlow() {
}


void AFortPlayerPawnAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerPawnAthena, ItemInteractionActor);
    DOREPLIFETIME(AFortPlayerPawnAthena, DBNORevivalStacking);
    DOREPLIFETIME(AFortPlayerPawnAthena, ServerWorldTimeRevivalTime);
    DOREPLIFETIME(AFortPlayerPawnAthena, ItemSpecialActorID);
    DOREPLIFETIME(AFortPlayerPawnAthena, ItemSpecialActorCategoryTag);
    DOREPLIFETIME(AFortPlayerPawnAthena, CapsuleRadiusAthena);
    DOREPLIFETIME(AFortPlayerPawnAthena, CapsuleHalfHeightAthena);
    DOREPLIFETIME(AFortPlayerPawnAthena, MeshHeightAdjustAthena);
    DOREPLIFETIME(AFortPlayerPawnAthena, AttributeReplicationProxy);
    DOREPLIFETIME(AFortPlayerPawnAthena, ReplayRepAnimMontageInfo);
    DOREPLIFETIME(AFortPlayerPawnAthena, SimulatedProxyActiveGameplayCues);
    DOREPLIFETIME(AFortPlayerPawnAthena, SimulatedProxyMinimalReplicationGameplayCues);
    DOREPLIFETIME(AFortPlayerPawnAthena, FastReplicationMinimalReplicationTags);
    DOREPLIFETIME(AFortPlayerPawnAthena, EncryptedPawnReplayData);
    DOREPLIFETIME(AFortPlayerPawnAthena, bIsCreativeGhostModeActivated);
}

AFortPlayerPawnAthena::AFortPlayerPawnAthena() {
    this->ItemInteractionActor = NULL;
    this->CurrentPawnSpeed = 1;
    this->CurrentPawnSpeedXY = 1;
    this->OnReviveSound = NULL;
    this->ReviveFromDBNOTime = 1;
    this->DBNOStartTime = 1;
    this->DBNOInvulnerableTime = 1;
    this->ConvertFromDBNOTime = 1;
    this->DBNORevivalStacking = 0;
    this->ServerWorldTimeRevivalTime = 1;
    this->bWasCrouchedBeforeDBNO = false;
    this->BecameSpecialActorTime = 1;
    this->bPlaytestWithNoMouse = false;
    this->CapsuleRadiusAthena = 1;
    this->CapsuleHalfHeightAthena = 1;
    this->MeshHeightAdjustAthena = 1;
    this->bShouldPawnInstantDie = false;
    this->bShouldPawnDBNODisplayOnKillFeed = true;
    this->bShouldPawnDeathDisplayOnKillFeed = true;
    this->bShouldPawnLeaveEliminationIndicator = true;
    this->bShouldPawnAwardPoints = true;
    this->bShouldTriggerDeathAnalytics = true;
    this->bShouldDropItemsOnDeath = true;
    this->bShouldSkipMovementFullSimulation = false;
    this->bEnableRenderCustomDepth = true;
    this->bEnableGroundInteractionEffects = true;
    this->CurrentQuickChatIcon = NULL;
    this->bADSWhileNotOnGround = false;
    this->DefaultCrouchedFootstepSound = NULL;
    this->DefaultCrouchSprintFootstepSound = NULL;
    this->KillerForSpectatorRotation = NULL;
    this->bDelaySimProxyCollisionInAircraftPhase = true;
    this->TimeToDelaySkydiveCollision = 1;
    this->PositionCaptureIntervalForDistanceTraveledAccumulation = 1;
    this->SkydiveAudioMovementVolumeInterpSpeed = 1;
    this->SkydiveAudioForwardDotInterpSpeed = 1;
    this->SkydiveAudioRightDotInterpSpeed = 1;
    this->ScreenEffectHealthDamage = NULL;
    this->ScreenEffectShieldDamage = NULL;
    this->AdditiveHitReactsMontage = NULL;
    this->bIsPlayerPawnReady = false;
    this->LastFiredTime = 1;
    this->PrototypeShootingModel = NULL;
    this->FallInstigator = NULL;
    this->LastFloorBeforeFalling = NULL;
    this->LastFallDistance = 1;
    this->SkydiveDebugTimer = 1;
    this->MeleeCombatSlowSpeedMultiplier = 1;
    this->MeleeCombatSlowDuration = 1;
    this->InAirAudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("InAirAudioComp"));
    this->PSC_PlayerWalkLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerWalkLandFX"));
    this->PSC_PlayerRunLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerRunLandFX"));
    this->PSC_PlayerSlideLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerSlideLandFX"));
    this->PSC_HitDamage = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HitDamageFX"));
    this->SlidingAudioComp = NULL;
    this->MaxIndicatorVisibilityDistForReplays = 1;
    this->ConsumableUseAudio = NULL;
    this->InAirAudioParameterValue = 1;
    this->InAirAudioFallDistanceThreshold = 1;
    this->bFXPlayDustOnMovement = true;
    this->WalkDustActivateSpeed = 1;
    this->WalkDustResetSpeed = 1;
    this->RunParticleActivateSpeed = 1;
    this->SlidingIntensitySound3P = NULL;
    this->SlidingIntensitySound1P = NULL;
    this->SlideAudioIntensity = 1;
    this->LastHealthPostProcessWeight = 1;
    this->HealthPostProcessStartTime = 1;
    this->HealthPostProcessMuteTime = 1;
    this->bIsCreativeGhostModeActivated = false;
    this->SkinWeightManager = NULL;
    this->UnicornPawnSampler = NULL;
    this->DamageForceFeedback = NULL;
    this->DamageCameraShakeClass = NULL;
    this->ConvertComponent = CreateDefaultSubobject<UFortPawnComponent_Convert>(TEXT("ConvertComp"));
}

