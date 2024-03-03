#include "FortCharacterVehicle.h"
#include "Components/SkeletalMeshComponent.h"
#include "FortSkeletalAudioComponent.h"
#include "FortVehicleSeatComponent.h"
#include "Net/UnrealNetwork.h"


void AFortCharacterVehicle::StopEmoting() {
}

bool AFortCharacterVehicle::ShouldShowSoundIndicator_Implementation() const {
    return false;
}

void AFortCharacterVehicle::SetAllowInteractionBetweenFortVolumes(bool bInteractBetweenVolumes) {
}


void AFortCharacterVehicle::OnRep_OverrideWrap() {
}

void AFortCharacterVehicle::OnRep_OverrideAbilitySystemComponent() {
}

void AFortCharacterVehicle::OnPawnExitVehicle_Implementation(AFortPlayerPawn* PlayerPawn, FName ExitSocketName) {
}






USkeletalMeshComponent* AFortCharacterVehicle::GetSkeletalMeshComponent() const {
    return NULL;
}

USkeletalMeshComponent* AFortCharacterVehicle::GetMechMesh() const {
    return NULL;
}

bool AFortCharacterVehicle::GetIsChargedJumpActive() const {
    return false;
}

bool AFortCharacterVehicle::GetHasGunner() const {
    return false;
}

USkeletalMeshComponent* AFortCharacterVehicle::GetEmoteMesh() const {
    return NULL;
}

UAbilitySystemComponent* AFortCharacterVehicle::GetAbilitySystemComponent() const {
    return NULL;
}


bool AFortCharacterVehicle::DoesDamageCauserPreventDamageFromBeingNulled_Implementation(AActor* DamageCauser) {
    return false;
}

bool AFortCharacterVehicle::BP_CanInteract_Implementation(AFortPlayerController* FortPC) {
    return false;
}

bool AFortCharacterVehicle::AllowInteractionBetweenFortVolume() const {
    return false;
}

void AFortCharacterVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCharacterVehicle, SoftOverrideItemWrap);
    DOREPLIFETIME(AFortCharacterVehicle, OverrideAbilitySystemComponent);
}

AFortCharacterVehicle::AFortCharacterVehicle() {
    this->bDestroyBuildingSMActorOnForceExit = true;
    this->bDestroyOnLastExit = false;
    this->VTDMode = 0;
    this->OverrideItemWrap = NULL;
    this->bForcedToAlwaysSpawn = false;
    this->bAllowInteractBetweenFortVolumes = true;
    this->EmoteMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EmoteMesh"));
    this->SpawnPropOnEmoteScalar = 1;
    this->EmoteFoleyAudioComponent = CreateDefaultSubobject<UFortSkeletalAudioComponent>(TEXT("EmoteFoleyAudioComponent"));
    this->SeatSwitchCooldown = 1;
    this->VehicleSeatComponent = CreateDefaultSubobject<UFortVehicleSeatComponent>(TEXT("VehicleSeatComponent"));
    this->OverrideAbilitySystemComponent = NULL;
    this->DriverAnimClass = NULL;
    this->PassengerAnimClass = NULL;
    this->OstrichSet = NULL;
    this->StartupAbilitySet = NULL;
    this->CameraModeClass = NULL;
    this->PassengerCameraModeClass = NULL;
    this->MinBoostDuration = 1;
    this->MaxBoostDuration = 1;
    this->FullyChargedJumpTime = 1;
    this->MinHoldDuration = 1;
    this->DriverExitLaunchScale = 1;
    this->PassengerExitLaunchScale = 1;
    this->ExtraInteractTraceRange = 1;
    this->MinDistForInteract = 1;
    this->DashMovementLockDuration = 1;
    this->SeatTransitionDuration = 1;
    this->ClearMoveIgnoreActorsDelay = 1;
    this->HealthIndicatorVerticalOffset = 1;
    this->SplashDamageMinPercent = 1;
    this->SplashDamageFalloffRange = 1;
    this->JumpPressTime = 1;
    this->bDidChargeJump = false;
    this->OstrichAnimInstance = NULL;
    this->IndicatorAudibleDistance = 1;
    this->IndicatorIcon = NULL;
}

