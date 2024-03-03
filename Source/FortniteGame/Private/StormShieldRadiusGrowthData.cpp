#include "StormShieldRadiusGrowthData.h"

FStormShieldRadiusGrowthData::FStormShieldRadiusGrowthData() {
    this->TargetRadius = 1;
    this->StartingRadius = 1;
    this->GrowthRate = 1;
    this->SafeAreaStartRadiusChangeTime = 1;
    this->SafeAreaFinishRadiusChangeTime = 1;
    this->State = EMissionStormShieldState::IDLE;
}

