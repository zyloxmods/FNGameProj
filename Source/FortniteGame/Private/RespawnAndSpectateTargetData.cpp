#include "RespawnAndSpectateTargetData.h"

FRespawnAndSpectateTargetData::FRespawnAndSpectateTargetData() {
    this->bEnabled = false;
    this->bPrevAvailableOnClient = false;
    this->bPrevEnabledOnClient = false;
    this->bShouldBeSelectedByDefault = false;
    this->bHiddenAndAutoSelectedFallback = false;
    this->PostDeathDisableTime = 1;
    this->ID = 0;
    this->DisplayPriority = 0;
    this->Team = 0;
    this->RespawnTargetActor = NULL;
    this->CameraActor = NULL;
}

