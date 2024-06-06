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
    ItemInteractionActor = NULL;
    CurrentPawnSpeed = 1;
    CurrentPawnSpeedXY = 1;
    OnReviveSound = NULL;
    ReviveFromDBNOTime = 1;
    DBNOStartTime = 1;
    DBNOInvulnerableTime = 1;
    ConvertFromDBNOTime = 1;
    DBNORevivalStacking = 0;
    ServerWorldTimeRevivalTime = 1;
    bWasCrouchedBeforeDBNO = false;
    BecameSpecialActorTime = 1;
    bPlaytestWithNoMouse = false;
    CapsuleRadiusAthena = 1;
    CapsuleHalfHeightAthena = 1;
    MeshHeightAdjustAthena = 1;
    bShouldPawnInstantDie = false;
    bShouldPawnDBNODisplayOnKillFeed = true;
    bShouldPawnDeathDisplayOnKillFeed = true;
    bShouldPawnLeaveEliminationIndicator = true;
    bShouldPawnAwardPoints = true;
    bShouldTriggerDeathAnalytics = true;
    bShouldDropItemsOnDeath = true;
    bShouldSkipMovementFullSimulation = false;
    bEnableRenderCustomDepth = true;
    bEnableGroundInteractionEffects = true;
    CurrentQuickChatIcon = NULL;
    bADSWhileNotOnGround = false;
    DefaultCrouchedFootstepSound = NULL;
    DefaultCrouchSprintFootstepSound = NULL;
    KillerForSpectatorRotation = NULL;
    bDelaySimProxyCollisionInAircraftPhase = true;
    TimeToDelaySkydiveCollision = 1;
    PositionCaptureIntervalForDistanceTraveledAccumulation = 1;
    SkydiveAudioMovementVolumeInterpSpeed = 1;
    SkydiveAudioForwardDotInterpSpeed = 1;
    SkydiveAudioRightDotInterpSpeed = 1;
    ScreenEffectHealthDamage = NULL;
    ScreenEffectShieldDamage = NULL;
    AdditiveHitReactsMontage = NULL;
    bIsPlayerPawnReady = false;
    LastFiredTime = 1;
    PrototypeShootingModel = NULL;
    FallInstigator = NULL;
    LastFloorBeforeFalling = NULL;
    LastFallDistance = 1;
    SkydiveDebugTimer = 1;
    MeleeCombatSlowSpeedMultiplier = 1;
    MeleeCombatSlowDuration = 1;
    InAirAudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("InAirAudioComp"));
    PSC_PlayerWalkLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerWalkLandFX"));
    PSC_PlayerRunLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerRunLandFX"));
    PSC_PlayerSlideLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerSlideLandFX"));
    PSC_HitDamage = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HitDamageFX"));
    SlidingAudioComp = NULL;
    MaxIndicatorVisibilityDistForReplays = 1;
    ConsumableUseAudio = NULL;
    InAirAudioParameterValue = 1;
    InAirAudioFallDistanceThreshold = 1;
    bFXPlayDustOnMovement = true;
    WalkDustActivateSpeed = 1;
    WalkDustResetSpeed = 1;
    RunParticleActivateSpeed = 1;
    SlidingIntensitySound3P = NULL;
    SlidingIntensitySound1P = NULL;
    SlideAudioIntensity = 1;
    LastHealthPostProcessWeight = 1;
    HealthPostProcessStartTime = 1;
    HealthPostProcessMuteTime = 1;
    bIsCreativeGhostModeActivated = false;
    SkinWeightManager = NULL;
    UnicornPawnSampler = NULL;
    DamageForceFeedback = NULL;
    DamageCameraShakeClass = NULL;
    ConvertComponent = CreateDefaultSubobject<UFortPawnComponent_Convert>(TEXT("ConvertComp"));
}

