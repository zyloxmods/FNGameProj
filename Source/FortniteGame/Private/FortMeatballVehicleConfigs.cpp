#include "FortMeatballVehicleConfigs.h"

UFortMeatballVehicleConfigs::UFortMeatballVehicleConfigs() {
    this->WaterSteerRollFactor = 1;
    this->InnerTurnPontoonOffsetMultiplier = 1;
    this->OuterTurnPontoonOffsetMultiplier = 1;
    this->MinForwardSpeedToBankOnTurn = 1;
    this->BoostMinPushForce = 1;
    this->BoostTopSpeedForceMultiplier = 1;
    this->BoostTopSpeedMultiplier = 1;
    this->MaxPontoonOffsetPerSecond = 1;
    this->LandTopSpeedMultiplier = 1;
    this->LandPushForceMultiplier = 1;
    this->MinPushPontoonsForWaterDriving = 0;
    this->MaxWaterPitchAngle = 1;
    this->MinForwardSpeedToPitch = 1;
    this->MinForwardSpeedForMaxPitch = 1;
    this->MaxForwardSpeedForMaxPitch = 1;
    this->MaxFowrardSpeedPitchFactor = 1;
    this->BoostMaxForwardSpeedPitchFactor = 1;
    this->FrontLateralFrictionFactor = 1;
    this->RearLateralFrictionFactor = 1;
    this->LandFrontLateralFrictionFactor = 1;
    this->LandRearLateralFrictionFactor = 1;
    this->SeatOffsetScaleX = 1;
    this->SeatOffsetScaleY = 1;
    this->SeatYawAngleMax = 1;
    this->SeatPitchAngleMax = 1;
    this->BoostSteeringMultiplier = 1;
    this->BoostSteeringMultiplierRampTime = 1;
    this->LandSteeringMultiplier = 1;
    this->LandMinSpeedSteeringAngle = 1;
    this->LandMaxSpeedSteeringAngle = 1;
    this->DragCoefficientNoAccel = 1;
    this->DragCoefficient2NoAccel = 1;
    this->MinSteerAlphaForWaterFriction = 1;
    this->TurnInPlaceYawStiff = 1;
    this->TurnInPlaceYawDamp = 1;
    this->MaxSteerRollAngle = 1;
    this->MaxTurnInPlaceYawAngle = 1;
    this->UprightSpringSteerStrength = 1;
    this->TurnInPlaceYawStrength = 1;
    this->MaxSpeedForTurnInPlaceKmH = 1;
    this->BlendOutExtraSpeedTurnInPlaceKmH = 1;
    this->MaxPitchForCameraInPlaceSteer = 1;
}

