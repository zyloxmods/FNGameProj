#include "StormShieldRadiusGrowthData.h"

FStormShieldRadiusGrowthData::FStormShieldRadiusGrowthData() {
    TargetRadius = 1;
    StartingRadius = 1;
    GrowthRate = 1;
    SafeAreaStartRadiusChangeTime = 1;
    SafeAreaFinishRadiusChangeTime = 1;
    State = EMissionStormShieldState::IDLE;
}

