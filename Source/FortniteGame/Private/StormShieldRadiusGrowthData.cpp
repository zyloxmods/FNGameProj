#include "StormShieldRadiusGrowthData.h"

FStormShieldRadiusGrowthData::FStormShieldRadiusGrowthData() {
    this->TargetRadius = 0.00f;
    this->StartingRadius = 0.00f;
    this->GrowthRate = 0.00f;
    this->SafeAreaStartRadiusChangeTime = 0.00f;
    this->SafeAreaFinishRadiusChangeTime = 0.00f;
    this->State = EMissionStormShieldState::IDLE;
}

