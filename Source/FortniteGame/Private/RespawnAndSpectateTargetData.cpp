#include "RespawnAndSpectateTargetData.h"

FRespawnAndSpectateTargetData::FRespawnAndSpectateTargetData() {
    bEnabled = false;
    bPrevAvailableOnClient = false;
    bPrevEnabledOnClient = false;
    bShouldBeSelectedByDefault = false;
    bHiddenAndAutoSelectedFallback = false;
    PostDeathDisableTime = 1;
    ID = 0;
    DisplayPriority = 0;
    Team = 0;
    RespawnTargetActor = NULL;
    CameraActor = NULL;
}

