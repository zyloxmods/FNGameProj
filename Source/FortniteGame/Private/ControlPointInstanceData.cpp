#include "ControlPointInstanceData.h"

FControlPointInstanceData::FControlPointInstanceData() {
    ControlPoint = NULL;
    ControlPointState = EControlPointState::None;
    SpawnDataIdx = 0;
    SpawnTime = 1;
    EnableTime = 1;
    DisableTime = 1;
    PrevOwningTeam = 0;
    CachedOwningTeamInfo = NULL;
    PointAccrualTime = 1;
    PointsRemainder = 1;
    BonusPointAccrualTime = 1;
    BonusPointsRemainder = 1;
    CachedPointAccrualValue = 1;
    CachedBonusPointAccrualValue = 1;
    bPointFinished = false;
    CachedSafeZonePhaseWhenToSpawn = 0;
    bIgnoreForOrderMessaging = false;
    bAlwaysInPlay = false;
    TimeOfShutdown = 1;
}

