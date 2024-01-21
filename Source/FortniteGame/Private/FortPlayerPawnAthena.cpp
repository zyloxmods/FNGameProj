#include "FortPlayerPawnAthena.h"
#include "Components/AudioComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerPawnAthena::TeleportToSkyDive(float HeightAboveGround) {
}

void AFortPlayerPawnAthena::StopConsumableUseAudio() {
}

void AFortPlayerPawnAthena::StartConsumableUseAudio(USoundBase* Sound) {
}

void AFortPlayerPawnAthena::SetMeshHeightAdjustAthena(float HeightAdjust) {
}

void AFortPlayerPawnAthena::SetFallInstigator(AController* NewFallInstigator, FGameplayTagContainer NewFallingDamageTags) {
}

void AFortPlayerPawnAthena::SetCharacterPartGroupingVisibility(EBodyPartVisibilityGrouping BodyPartVisibilityGrouping, bool bNewVisibility) {
}

void AFortPlayerPawnAthena::SetCapsuleRadiusAthena(float Radius) {
}

void AFortPlayerPawnAthena::SetCapsuleHalfHeightAthena(float HalfHeight) {
}

void AFortPlayerPawnAthena::SetBushEnabled(bool bEnableBush) {
}

void AFortPlayerPawnAthena::ServerSetInteractingItem_Implementation(AActor* InteractingItem, bool bClearInteraction) {
}
bool AFortPlayerPawnAthena::ServerSetInteractingItem_Validate(AActor* InteractingItem, bool bClearInteraction) {
    return true;
}




void AFortPlayerPawnAthena::OnRep_ReplicatedAnimMontage() {
}

void AFortPlayerPawnAthena::OnRep_ReplayRepAnimMontageInfo() {
}

void AFortPlayerPawnAthena::OnRep_RepAnimMontageStartSection() {
}

void AFortPlayerPawnAthena::OnRep_NetMovementPrioritized() {
}

void AFortPlayerPawnAthena::OnRep_MeshHeightAdjustAthena() {
}

void AFortPlayerPawnAthena::OnRep_IsInWaterVolume() {
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

void AFortPlayerPawnAthena::GamePhaseStepChanged(EAthenaGamePhaseStep GamePhase) {
}

void AFortPlayerPawnAthena::ForceReviveFromDBNO() {
}

void AFortPlayerPawnAthena::FastSharedReplication_Implementation(const FSharedRepMovement& SharedRepMovement) {
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
    DOREPLIFETIME(AFortPlayerPawnAthena, ItemSpecialActorID);
    DOREPLIFETIME(AFortPlayerPawnAthena, ItemSpecialActorCategoryTag);
    DOREPLIFETIME(AFortPlayerPawnAthena, bNetMovementPrioritized);
    DOREPLIFETIME(AFortPlayerPawnAthena, CapsuleRadiusAthena);
    DOREPLIFETIME(AFortPlayerPawnAthena, CapsuleHalfHeightAthena);
    DOREPLIFETIME(AFortPlayerPawnAthena, MeshHeightAdjustAthena);
    DOREPLIFETIME(AFortPlayerPawnAthena, AttributeReplicationProxy);
    DOREPLIFETIME(AFortPlayerPawnAthena, RepAnimMontageInfo);
    DOREPLIFETIME(AFortPlayerPawnAthena, RepAnimMontageStartSection);
    DOREPLIFETIME(AFortPlayerPawnAthena, ReplayRepAnimMontageInfo);
    DOREPLIFETIME(AFortPlayerPawnAthena, SimulatedProxyGameplayCues);
    DOREPLIFETIME(AFortPlayerPawnAthena, LandingMontagePair);
    DOREPLIFETIME(AFortPlayerPawnAthena, bIsInWaterVolume);
    DOREPLIFETIME(AFortPlayerPawnAthena, EncryptedPawnReplayData);
    DOREPLIFETIME(AFortPlayerPawnAthena, bIsCreativeGhostModeActivated);
}

AFortPlayerPawnAthena::AFortPlayerPawnAthena() {
    this->ItemInteractionActor = NULL;
    this->CurrentPawnSpeed = 0.00f;
    this->CurrentPawnSpeedXY = 0.00f;
    this->OnReviveSound = NULL;
    this->ReviveFromDBNOTime = 10.00f;
    this->DBNOStartTime = 0.00f;
    this->DBNOInvulnerableTime = 2.00f;
    this->DBNORevivalStacking = 0;
    this->bWasCrouchedBeforeDBNO = false;
    this->BecameSpecialActorTime = 0.00f;
    this->bPlaytestWithNoMouse = false;
    this->bNetMovementPrioritized = false;
    this->CapsuleRadiusAthena = 0.00f;
    this->CapsuleHalfHeightAthena = 0.00f;
    this->MeshHeightAdjustAthena = 0.00f;
    this->RepAnimMontageStartSection = 0;
    this->CurrentQuickChatIcon = NULL;
    this->bADSWhileNotOnGround = false;
    this->DefaultCrouchedFootstepSound = NULL;
    this->DefaultCrouchSprintFootstepSound = NULL;
    this->MinimumTimeBetweenSteps = 0.10f;
    this->LastStepTime = 0.00f;
    this->KillerForSpectatorRotation = NULL;
    this->bIsInWaterVolume = false;
    this->bIsPlayerPawnReady = false;
    this->LastFiredTime = -1.00f;
    this->PrototypeShootingModel = NULL;
    this->FallInstigator = NULL;
    this->LastFloorBeforeFalling = NULL;
    this->LastFallDistance = 0.00f;
    this->MeleeCombatSlowSpeedMultiplier = 0.80f;
    this->MeleeCombatSlowDuration = 0.50f;
    this->InAirAudioComp = CreateDefaultSubobject<UAudioComponent>(TEXT("InAirAudioComp"));
    this->PSC_PlayerWalkLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerWalkLandFX"));
    this->PSC_PlayerRunLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerRunLandFX"));
    this->PSC_PlayerSlideLand = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerSlideLandFX"));
    this->PSC_PlayerInWater = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PlayerInWaterFX"));
    this->SlidingAudioComp = NULL;
    this->MaxIndicatorVisibilityDistForReplays = 20000.00f;
    this->ConsumableUseAudio = NULL;
    this->InAirAudioScalar = 0.00f;
    this->InAirAudioInterpSpeed = 1.00f;
    this->InAirAudioPawnSpeedMin = 400.00f;
    this->InAirAudioPawnSpeedMax = 900.00f;
    this->bFXPlayDustOnMovement = true;
    this->WalkDustActivateSpeed = 320.00f;
    this->WalkDustResetSpeed = 310.00f;
    this->RunParticleActivateSpeed = 480.00f;
    this->SlidingIntensitySound3P = NULL;
    this->SlidingIntensitySound1P = NULL;
    this->SlideAudioIntensity = 0.00f;
    this->LastHealthPostProcessWeight = 0.00f;
    this->HealthPostProcessStartTime = 0.00f;
    this->HealthPostProcessMuteTime = 10.00f;
    this->FortSignificanceManager = NULL;
    this->bIsCreativeGhostModeActivated = false;
}

