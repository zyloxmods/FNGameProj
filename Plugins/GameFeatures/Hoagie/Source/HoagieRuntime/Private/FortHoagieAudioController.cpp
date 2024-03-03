#include "FortHoagieAudioController.h"

void AFortHoagieAudioController::Update() {
}

void AFortHoagieAudioController::CacheHoagieVehicle(AFortHoagieVehicle* InVehicle) {
}

void AFortHoagieAudioController::CacheAudioComponents(UFortLayeredAudioComponent* InEngine, UFortLayeredAudioComponent* InRotor) {
}

AFortHoagieAudioController::AFortHoagieAudioController() {
    this->bHighQualityOverride = false;
    this->bLocalPlayerInHoagie = false;
    this->bCriticalDamageNative = false;
    this->bRotorHitNative = false;
    this->bIsRotorWashActiveNative = false;
    this->RotorWashRelativeZOffset = 1;
    this->EngineAudio = NULL;
    this->RotorAudio = NULL;
}

