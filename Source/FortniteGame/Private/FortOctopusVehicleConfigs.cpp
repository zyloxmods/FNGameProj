#include "FortOctopusVehicleConfigs.h"

UFortOctopusVehicleConfigs::UFortOctopusVehicleConfigs() {
    this->MinBuildingDamage = 50.00f;
    this->MaxBuildingDamage = 160.00f;
    this->MinBuildingDamageSpeedKmh = 35.00f;
    this->MaxBuildingDamageSpeedKmh = 65.00f;
    this->MinBuildingDamageWhileBoosting = 50.00f;
    this->MaxBuildingDamageWhileBoosting = 160.00f;
    this->MinBuildingDamageSpeedWhileBoostingKmh = 35.00f;
    this->MaxBuildingDamageSpeedWhileBoostingKmh = 65.00f;
    this->TowhookNetUpdateTime = 0.50f;
    this->Boyancy = 0.00f;
    this->WaterTraction = 0.25f;
    this->BoostBounceRechargeFalloff = 0.90f;
    this->MinSpeedToLaunchPlayersKmh = 10.00f;
    this->MinYankLaunchForce = 1000.00f;
    this->MaxYankLaunchForce = 10000.00f;
    this->MinYankLaunchVelocityKmh = 5.00f;
    this->MaxYankLaunchVelocityKmh = 20.00f;
    this->MaxSignificanceBudgetForFX = 0;
    this->MaxSignificanceBudgetForAudio = 2;
    this->bDisableFXWhenInsignificant = false;
    this->bDisableAudioTickWhenInsignificant = false;
    this->bGlassIsPenetrable = false;
}

