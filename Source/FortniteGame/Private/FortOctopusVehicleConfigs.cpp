#include "FortOctopusVehicleConfigs.h"

UFortOctopusVehicleConfigs::UFortOctopusVehicleConfigs() {
    this->MinBuildingDamage = 1;
    this->MaxBuildingDamage = 1;
    this->MinBuildingDamageSpeedKmh = 1;
    this->MaxBuildingDamageSpeedKmh = 1;
    this->MinBuildingDamageWhileBoosting = 1;
    this->MaxBuildingDamageWhileBoosting = 1;
    this->MinBuildingDamageSpeedWhileBoostingKmh = 1;
    this->MaxBuildingDamageSpeedWhileBoostingKmh = 1;
    this->TowhookNetUpdateTime = 1;
    this->WaterTraction = 1;
    this->BoostBounceRechargeFalloff = 1;
    this->MinSpeedToLaunchPlayersKmh = 1;
    this->MinYankLaunchForce = 1;
    this->MaxYankLaunchForce = 1;
    this->MinYankLaunchVelocityKmh = 1;
    this->MaxYankLaunchVelocityKmh = 1;
    this->MaxSignificanceBudgetForFX = 0;
    this->MaxSignificanceBudgetForAudio = 0;
    this->bDisableFXWhenInsignificant = false;
    this->bDisableAudioTickWhenInsignificant = false;
    this->bGlassIsPenetrable = false;
}

