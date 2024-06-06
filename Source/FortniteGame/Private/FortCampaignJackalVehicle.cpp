#include "FortCampaignJackalVehicle.h"

void AFortCampaignJackalVehicle::HandleOnPlayerDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

AFortCampaignJackalVehicle::AFortCampaignJackalVehicle() {
    bVehicleLeftAnalogStrafing = true;
    VehicleLeftAnalogStrafingMultiplier = 1;
    MinSpeedToWallRun = 1;
    AggroRangeOverride = 1;
}

