#include "ControlPointInstanceData.h"

FControlPointInstanceData::FControlPointInstanceData() {
    this->ControlPoint = NULL;
    this->ControlPointState = EControlPointState::None;
    this->SpawnDataIdx = 0;
    this->SpawnTime = 1;
    this->EnableTime = 1;
    this->DisableTime = 1;
    this->PrevOwningTeam = 0;
    this->CachedOwningTeamInfo = NULL;
    this->PointAccrualTime = 1;
    this->PointsRemainder = 1;
    this->BonusPointAccrualTime = 1;
    this->BonusPointsRemainder = 1;
    this->CachedPointAccrualValue = 1;
    this->CachedBonusPointAccrualValue = 1;
    this->bPointFinished = false;
    this->CachedSafeZonePhaseWhenToSpawn = 0;
    this->bIgnoreForOrderMessaging = false;
    this->bAlwaysInPlay = false;
    this->TimeOfShutdown = 1;
}

