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
    this->BoostParam = 1;
    this->MovementParam = 1;
    this->RumbleIntensity = 1;
    this->bBoostCameraActive = false;
    this->bLocalPlayerADS = false;
    this->DriverCameraShake = NULL;
    this->PassengerCameraShake = NULL;
    this->LocalPlayerPawn = NULL;
    this->CurrentMaxSpringCompression = 1;
    this->SpringCompressionRefireTime = 1;
    this->SparksRightParam = 1;
    this->MovementAmountParam = 1;
    this->MinPropSpeedWhenShooting = 1;
    this->PSC_TrailTopLeft = NULL;
    this->PSC_TrailTopRight = NULL;
    this->PSC_TrailBottomLeft = NULL;
    this->PSC_TrailBottomRight = NULL;
    this->FortFerretVehicleConfigsClass = NULL;
    this->BoostMeterSM = NULL;
    this->PropellerSM = NULL;
    this->BoostMID = NULL;
    this->FuelGaugeMID = NULL;
    this->PlaneSpeedFX = NULL;
    this->FortAudioMovementClose = NULL;
    this->FortAudioMovementDistant = NULL;
    this->FortAudioWindFirstPerson = NULL;
    this->FortAudioDive = NULL;
    this->FortAudioTaxi = NULL;
    this->FortAudioSpark = NULL;
    this->FortFerretVehicleConfigs = NULL;
    this->RightGunMuzzle = CreateDefaultSubobject<USceneComponent>(TEXT("RightGunMuzzle"));
    this->LeftGunMuzzle = CreateDefaultSubobject<USceneComponent>(TEXT("LeftGunMuzzle"));
    this->MaxHealthToDestroyPropWhileBoosting = 1;
    this->MaxHealthToDestroyPropWithDirectHit = 1;
    this->MaxHealthToDestroyProp = 1;
}

