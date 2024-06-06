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
    bDestroyBuildingSMActorOnForceExit = true;
    bDestroyOnLastExit = false;
    VTDMode = 0;
    OverrideItemWrap = NULL;
    bForcedToAlwaysSpawn = false;
    bAllowInteractBetweenFortVolumes = true;
    EmoteMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EmoteMesh"));
    SpawnPropOnEmoteScalar = 1;
    EmoteFoleyAudioComponent = CreateDefaultSubobject<UFortSkeletalAudioComponent>(TEXT("EmoteFoleyAudioComponent"));
    SeatSwitchCooldown = 1;
    VehicleSeatComponent = CreateDefaultSubobject<UFortVehicleSeatComponent>(TEXT("VehicleSeatComponent"));
    OverrideAbilitySystemComponent = NULL;
    DriverAnimClass = NULL;
    PassengerAnimClass = NULL;
    OstrichSet = NULL;
    StartupAbilitySet = NULL;
    CameraModeClass = NULL;
    PassengerCameraModeClass = NULL;
    MinBoostDuration = 1;
    MaxBoostDuration = 1;
    FullyChargedJumpTime = 1;
    MinHoldDuration = 1;
    DriverExitLaunchScale = 1;
    PassengerExitLaunchScale = 1;
    ExtraInteractTraceRange = 1;
    MinDistForInteract = 1;
    DashMovementLockDuration = 1;
    SeatTransitionDuration = 1;
    ClearMoveIgnoreActorsDelay = 1;
    HealthIndicatorVerticalOffset = 1;
    SplashDamageMinPercent = 1;
    SplashDamageFalloffRange = 1;
    JumpPressTime = 1;
    bDidChargeJump = false;
    OstrichAnimInstance = NULL;
    IndicatorAudibleDistance = 1;
    IndicatorIcon = NULL;
}

