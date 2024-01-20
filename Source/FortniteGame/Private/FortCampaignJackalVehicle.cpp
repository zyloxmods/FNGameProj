#include "FortCampaignJackalVehicle.h"

void AFortCampaignJackalVehicle::HandleOnPlayerDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

AFortCampaignJackalVehicle::AFortCampaignJackalVehicle() {
    this->bVehicleLeftAnalogStrafing = true;
    this->VehicleLeftAnalogStrafingMultiplier = 45.00f;
    this->MinSpeedToWallRun = 10.00f;
    this->AggroRangeOverride = 2048.00f;
}

