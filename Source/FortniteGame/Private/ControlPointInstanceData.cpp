#include "ControlPointInstanceData.h"

FControlPointInstanceData::FControlPointInstanceData() {
    this->ControlPoint = NULL;
    this->ControlPointState = EControlPointState::None;
    this->SpawnDataIdx = 0;
    this->SpawnTime = 0.00f;
    this->EnableTime = 0.00f;
    this->DisableTime = 0.00f;
    this->PrevOwningTeam = 0;
    this->CachedOwningTeamInfo = NULL;
    this->PointAccrualTime = 0.00f;
    this->PointsRemainder = 0.00f;
    this->BonusPointAccrualTime = 0.00f;
    this->BonusPointsRemainder = 0.00f;
    this->CachedPointAccrualValue = 0.00f;
    this->CachedBonusPointAccrualValue = 0.00f;
    this->bPointFinished = false;
    this->CachedSafeZonePhaseWhenToSpawn = 0;
    this->bIgnoreForOrderMessaging = false;
    this->bAlwaysInPlay = false;
    this->TimeOfShutdown = 0.00f;
}

