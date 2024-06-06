#include "FortMeatballVehicle.h"
#include "FortAthenaVehicleFuelComponent.h"
#include "Net/UnrealNetwork.h"

void AFortMeatballVehicle::UpdateSnowAndDirtParams(float NormalizedForwardSpeed) {
}

void AFortMeatballVehicle::StopTurnRumble() {
}

void AFortMeatballVehicle::StopLandRumble() {
}

void AFortMeatballVehicle::StopDriverCameraShake() {
}


void AFortMeatballVehicle::OnRep_IsUsingNewFuelSystemState() {
}





void AFortMeatballVehicle::LandShakeEnd() {
}

FQuat AFortMeatballVehicle::GetSeatRotation() const {
    return FQuat{};
}

FVector AFortMeatballVehicle::GetSeatOffset() const {
    return FVector{};
}

float AFortMeatballVehicle::GetBoostCharge() const {
    return 0.0f;
}

void AFortMeatballVehicle::CachePSCPointers(UParticleSystemComponent* InCacheBoostReadyLFx, UParticleSystemComponent* InCacheBoostReadyRFx, UParticleSystemComponent* InCacheDirtCascade, UNiagaraComponent* InCacheSnowLandscapeComponent) {
}

void AFortMeatballVehicle::CacheAudioPointers(UFortVehicleAudioVoice* InAudioEngineUp, UFortVehicleAudioVoice* InAudioEngineDown, UFortVehicleAudioVoice* InAudioWakeTurn, UFortVehicleAudioVoice* InAudioWakeSpeed, UFortVehicleAudioVoice* InAudioScrape) {
}

void AFortMeatballVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMeatballVehicle, IsUsingNewFuelSystemState);
}

AFortMeatballVehicle::AFortMeatballVehicle() {
    WaterSkiSeatIndex = 0;
    FxNormalizationMaxSpeedKmh = 1;
    CacheAudioEngineUp = NULL;
    CacheAudioEngineDown = NULL;
    CacheAudioWakeTurn = NULL;
    CacheAudioWakeSpeed = NULL;
    CacheAudioScrape = NULL;
    BoostMID = NULL;
    CacheBoostReadyLFx = NULL;
    CacheBoostReadyRFx = NULL;
    CacheDirtCascade = NULL;
    CacheSnowInteractionComponent = NULL;
    DrivingPlayerController = NULL;
    LandCameraShake = NULL;
    LandCameraShakeClass = NULL;
    DriverCameraShake = NULL;
    DriverCameraShakeClass = NULL;
    LandRumbleIntensity = 1;
    LandForceFeedbackHandle = 0;
    TurnRumbleIntensity = 1;
    TurnForceFeedbackHandle = 0;
    CurrentSnowAltitude = 1;
    bHasSnow = false;
    bBoostReadyFxOn = false;
    bLargeRumble = true;
    bTurnRumbleActive = false;
    bWaterDropsOnScreen = false;
    FortMeatballVehicleConfigsClass = NULL;
    FortSpaghettiVehicleClass = NULL;
    BoostingCamera = NULL;
    IsUsingNewFuelSystemState = 0;
    FortMeatballVehicleConfigs = NULL;
    WaterLineStartPontoonIndex = 0;
    WaterLineEndPontoonIndex = 0;
    bBoostFailed = false;
    FuelComponent = CreateDefaultSubobject<UFortAthenaVehicleFuelComponent>(TEXT("FuelComponent"));
}

