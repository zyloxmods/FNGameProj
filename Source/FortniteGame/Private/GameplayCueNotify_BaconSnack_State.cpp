#include "GameplayCueNotify_BaconSnack_State.h"

AGameplayCueNotify_BaconSnack_State::AGameplayCueNotify_BaconSnack_State() {
    this->PlayerPawn = NULL;
    this->MeshDataIndex = 0;
    this->Mesh = NULL;
    this->StealthMeter = 1;
    this->StealthMeterTime = 1;
    this->CachedAlertStateComp = NULL;
}

