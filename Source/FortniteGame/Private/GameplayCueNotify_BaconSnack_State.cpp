#include "GameplayCueNotify_BaconSnack_State.h"

AGameplayCueNotify_BaconSnack_State::AGameplayCueNotify_BaconSnack_State() {
    PlayerPawn = NULL;
    MeshDataIndex = 0;
    Mesh = NULL;
    StealthMeter = 1;
    StealthMeterTime = 1;
    CachedAlertStateComp = NULL;
}

