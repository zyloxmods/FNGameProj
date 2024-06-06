#include "FortAthenaFerretVehicle.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"




void AFortAthenaFerretVehicle::SetSkidActive(bool bActive) {
}




bool AFortAthenaFerretVehicle::IsTryingToShoot() const {
    return false;
}

bool AFortAthenaFerretVehicle::IsShooting() const {
    return false;
}

bool AFortAthenaFerretVehicle::IsLocalPlayerRiding() const {
    return false;
}

bool AFortAthenaFerretVehicle::IsBoosting() const {
    return false;
}

void AFortAthenaFerretVehicle::CachePropAndBoostMeterSM(UStaticMeshComponent* InPropSM, UStaticMeshComponent* InBoostSM) {
}

void AFortAthenaFerretVehicle::CachePlaneFX(UParticleSystemComponent* InPlaneSpeedFX) {
}

void AFortAthenaFerretVehicle::CacheParticleComponentPointers(UParticleSystemComponent* InTrailTopLeft, UParticleSystemComponent* InTrailTopRight, UParticleSystemComponent* InTrailBottomLeft, UParticleSystemComponent* InTrailBottomRight) {
}

void AFortAthenaFerretVehicle::CacheAudioVoicePointers(UFortVehicleAudioVoice* InAudioMovementClose, UFortVehicleAudioVoice* InAudioMovementDistant, UFortVehicleAudioVoice* InAudioWindFirstPerson, UFortVehicleAudioVoice* InAudioDive, UFortVehicleAudioVoice* InAudioTaxi, UFortVehicleAudioVoice* InAudioSpark) {
}



void AFortAthenaFerretVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaFerretVehicle, MaxHealthToDestroyPropWhileBoosting);
    DOREPLIFETIME(AFortAthenaFerretVehicle, MaxHealthToDestroyPropWithDirectHit);
    DOREPLIFETIME(AFortAthenaFerretVehicle, MaxHealthToDestroyProp);
}

AFortAthenaFerretVehicle::AFortAthenaFerretVehicle() {
    BoostParam = 1;
    MovementParam = 1;
    RumbleIntensity = 1;
    bBoostCameraActive = false;
    bLocalPlayerADS = false;
    DriverCameraShake = NULL;
    PassengerCameraShake = NULL;
    LocalPlayerPawn = NULL;
    CurrentMaxSpringCompression = 1;
    SpringCompressionRefireTime = 1;
    SparksRightParam = 1;
    MovementAmountParam = 1;
    MinPropSpeedWhenShooting = 1;
    PSC_TrailTopLeft = NULL;
    PSC_TrailTopRight = NULL;
    PSC_TrailBottomLeft = NULL;
    PSC_TrailBottomRight = NULL;
    FortFerretVehicleConfigsClass = NULL;
    BoostMeterSM = NULL;
    PropellerSM = NULL;
    BoostMID = NULL;
    FuelGaugeMID = NULL;
    PlaneSpeedFX = NULL;
    FortAudioMovementClose = NULL;
    FortAudioMovementDistant = NULL;
    FortAudioWindFirstPerson = NULL;
    FortAudioDive = NULL;
    FortAudioTaxi = NULL;
    FortAudioSpark = NULL;
    FortFerretVehicleConfigs = NULL;
    RightGunMuzzle = CreateDefaultSubobject<USceneComponent>(TEXT("RightGunMuzzle"));
    LeftGunMuzzle = CreateDefaultSubobject<USceneComponent>(TEXT("LeftGunMuzzle"));
    MaxHealthToDestroyPropWhileBoosting = 1;
    MaxHealthToDestroyPropWithDirectHit = 1;
    MaxHealthToDestroyProp = 1;
}

