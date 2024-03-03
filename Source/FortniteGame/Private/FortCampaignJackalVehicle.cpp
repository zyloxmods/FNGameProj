#include "FortCampaignJackalVehicle.h"

void AFortCampaignJackalVehicle::HandleOnPlayerDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

AFortCampaignJackalVehicle::AFortCampaignJackalVehicle() {
    this->bVehicleLeftAnalogStrafing = true;
    this->VehicleLeftAnalogStrafingMultiplier = 1;
    this->MinSpeedToWallRun = 1;
    this->AggroRangeOverride = 1;
}

