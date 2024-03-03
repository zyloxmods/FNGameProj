#include "FortPhysicsVehicleConfigs.h"

UFortPhysicsVehicleConfigs::UFortPhysicsVehicleConfigs() {
    this->WaterTestFrequency = 1;
    this->MinLinearSpeedRunningVarianceSq = 1;
    this->MinAngularSpeedRunningVarianceSq = 1;
    this->VehicleErrorPerDistanceCentimeters = 1;
    this->VehicleErrorPerDistanceCentimetersPerSecond = 1;
    this->VehicleErrorPerAngleDegrees = 1;
    this->VehicleErrorPerAngleDegreesPerSecond = 1;
    this->VehicleErrorPerUpdate = 1;
    this->VehicleInvalidErrorPerSecondTolerance = 1;
    this->VehicleInvalidErrorMaxSeconds = 1;
    this->VehicleInvalidErrorMinSeconds = 1;
    this->InPlaceRotationStrength = 1;
    this->WheelRadius = 1;
    this->IdleBrakeForce = 1;
    this->TooFastBrakeForce = 1;
    this->BrakeForce = 1;
    this->AutoBrakeSpeed = 1;
    this->WaterDragCoefficient = 1;
    this->WaterDragCoefficient2 = 1;
    this->LateralFriction = 1;
    this->VehicleCameraMaxSteerAlpha = 1;
    this->MaxForwardSpeedToSwapReverseControls = 1;
    this->MinSpeedSteeringAngle = 1;
    this->MaxSpeedSteeringAngle = 1;
    this->bSteerWithFrontWheels = true;
    this->bInvertSteeringWhenReversing = false;
    this->MaxRestSpeed = 1;
    this->ImpactDamageSafeDegrees = 1;
    this->MinSpeedToDamage = 1;
    this->MaxSpeedToDamage = 1;
    this->MinSpeedDamage = 1;
    this->MaxSpeedDamage = 1;
    this->VehicleOnVehicle_ImpactVelocityMultiplier = 1;
    this->MinSpeedDamageNoPlayer = 1;
    this->MaxSpeedDamageNoPlayer = 1;
    this->MinSpeedAIDamage = 1;
    this->MaxSpeedAIDamage = 1;
    this->MinSpeedAIDamageNoPlayer = 1;
    this->MaxSpeedAIDamageNoPlayer = 1;
    this->MinImpactMagnitudeToDealDamageKmH = 1;
    this->MaxImpactDamage = 1;
    this->ImpactDamagePerImpulse = 1;
    this->ImpactReductionPerTransverseVelocity = 1;
    this->MaxImpactDamageReduction = 1;
    this->PlayerImpactDamageMultiplier = 1;
    this->VehicleFlipCooldown = 1;
    this->MinSpringHitNormal = 1;
    this->VehicleCameraGraceZone = 1;
    this->VehicleLeftAnalogSteeringDeadZone = 1;
    this->VehicleCameraLeftAnalogMultiplier = 1;
    this->InWaterTopSpeedMutliplier = 1;
    this->VehicleInPlaceThreshold = 1;
    this->VehicleWeightShiftPitchStrength = 1;
    this->VehicleWeightShiftRollStrength = 1;
    this->VehicleWeightShiftYawStrength = 1;
    this->JumpRateMultiplier = 1;
    this->VehicleDebugStrafeMultiplier = 1;
    this->GravityVelocitySteerForwardThreshold = 1;
    this->GravityVelocitySteerErrorThreshold = 1;
    this->GravitySteerMultiplier = 1;
    this->InWaterPushMultiplier = 1;
    this->MinWheelRotationSpeed = 1;
    this->WheelRotationAcceleration = 1;
    this->WheelRotationDampingPerSecond = 1;
    this->HonkTimeMax = 1;
    this->HonkCooldownMax = 1;
    this->HonkTimePerHonk = 1;
    this->VehicleLookAheadLength = 1;
    this->VehicleLookAheadInAirLength = 1;
    this->VehicleLookAheadMinSpeed = 1;
    this->bEnableLookahead = true;
    this->VehicleLookAheadMinNormal = 1;
    this->VehicleLookAheadStiff = 1;
    this->VehicleLookAheadDamp = 1;
    this->VehicleLookAheadInAirStiff = 1;
    this->VehicleLookAheadInAirDamp = 1;
    this->VehicleLookAheadMaxAccel = 1;
    this->VehicleLookAheadMaxAccelInAir = 1;
    this->VehicleAirControlStiff = 1;
    this->VehicleAirControlDamp = 1;
    this->VehicleAirYawStrength = 1;
    this->VehicleAirPitchStrength = 1;
    this->DragCoefficient = 1;
    this->DragCoefficient2 = 1;
    this->MaxDragSpeed = 1;
    this->MinLinearSpeedToWake = 1;
    this->MinAngularSpeedToWake = 1;
    this->MaxDriveInclineAngle = 1;
    this->MaxAntigravityInclineAngle = 1;
    this->MaxDriveTiltAngle = 1;
    this->AxleOffsetZ = 1;
    this->SpringStiffMultiplier = 1;
    this->SpringDampMultiplier = 1;
    this->SpringStiffMultiplierWater = 1;
    this->SpringDampMultiplierWater = 1;
    this->SpringMaxAccelMultiplier = 1;
    this->SpringLengthMultiplier = 1;
    this->HasGroundSweepLengthMultiplier = 1;
    this->AngularDragCoefficient = 1;
    this->PitchAngularDrag = 1;
    this->RollAngularDrag = 1;
    this->AngularDragCoefficientWater = 1;
    this->PitchAngularDragWater = 1;
    this->RollAngularDragWater = 1;
    this->YawAngularDragWater = 1;
    this->VehicleAnalogReverse = 1;
    this->VehicleLookAheadMinSpeedInAir = 1;
    this->VehicleAutoAirPitchStrength = 1;
    this->VehicleAutoAirYawStrength = 1;
    this->VehicleAutoAirRollStrength = 1;
    this->VehicleMinVelAlongContactNormal = 1;
    this->VehicleMaxVelAlongContactNormal = 1;
    this->MinSameDirCollision = 1;
    this->MinCollisionSpeedToCorrect = 1;
    this->MinCollisionBoostNormal = 1;
    this->CollisionSpeedBoostAlpha = 1;
    this->CancelIgnoreForwardThreshold = 1;
    this->AngularDragCoefficientRampedUp = 1;
    this->PitchAngularDragRampedUp = 1;
    this->VehicleAirYawStrengthRampedUp = 1;
    this->VehicleAirPitchStrengthRampedUp = 1;
    this->SteerBrakeMultiplier = 1;
    this->WheelRadiusF = 1;
    this->WheelRadiusB = 1;
    this->PitchLeanStrength = 1;
    this->MaxForwardVelAccelLean = 1;
    this->MaxReverseVelAccelLean = 1;
    this->MaxSteerForAccelLean = 1;
    this->MinYawSpeedForLean = 1;
    this->YawLeanStrength = 1;
    this->AccelerationPitchCooldown = 1;
    this->YawLeanCooldown = 1;
    this->MaxAccelPitch = 1;
    this->MaxYawLean = 1;
    this->ContactModificationOffset = 1;
    this->VehicleFloorFriction = 1;
    this->VehicleSideScrapeFriction = 1;
    this->VehicleSideScrapeMaxCosAngle = 1;
    this->GroundCheckSweepRadius = 1;
    this->SMSleepCounter = 1;
    this->CorrectOrientationTimeout = 1;
    this->NudgeOrientationTimeout = 1;
    this->NudgeDistance = 1;
    this->CorrectOrientationLinearCoefficient = 1;
    this->CorrectOrientationAngularCoefficient = 1;
    this->SpringCollisionChannel = ECC_Vehicle;
    this->bVehicleCameraSteering = false;
    this->bVehicleScreenSpaceSteering = false;
    this->bVehicleCameraLeftAnalogSteering = true;
    this->bUseKinematicReplicationWhenNotRendered = true;
    this->PawnLaunchVerticalVelocityScale = 1;
    this->PawnLaunchForwardVelocityScale = 1;
    this->PawnLaunchMaxSpeed = 1;
    this->PawnLaunchAngleAdjustment = 1;
    this->PawnLaunchMinDirection = 1;
    this->DestructionTraceAheadMinSpeed = 1;
    this->DestructionTraceAheadAmount = 1;
    this->DestructionImpulseAmount = 1;
    this->PropDestructionImpulseAmount = 1;
    this->bCanDestroyProps = true;
    this->HitRequiredMinSpeed = 1;
    this->MaxHealthToDestroyProp = 1;
    this->MaxHealthToDestroyPropBoosting = 1;
    this->MaxHealthToDestroyPropFast = 1;
    this->MaxHealthToDestroyPropSpeedThreshold = 1;
    this->PropImpactImpulseMagnitude = 1;
    this->bShouldUseLocalIgnoreListForDestroyedBuildings = true;
    this->RadiusForPropOverlapCheck = 1;
    this->PropOverlapMinMoveDistSquared = 1;
    this->bForceUseImminentCollision = false;
    this->MaxBudgetForActorTick = 0;
    this->MinBudgetForReducedSpring = 0;
    this->bShouldServerRunReducedSprings = true;
    this->MaxReducedSpringsPerTick = 0;
    this->bDontApplyDragInAir = true;
    this->bDriverCanDamageVehicle = true;
    this->MaxWheelSpinWound = 1;
    this->bUseFuel = false;
    this->BuoyancyCoefficient = 1;
    this->BuoyancyDamp = 1;
    this->BuoyancyDamp2 = 1;
    this->BuoyancyRampMinVelocity = 1;
    this->BuoyancyRampMaxVelocity = 1;
    this->BuoyancyRampMax = 1;
    this->MaxBuoyantForce = 1;
    this->UprightSpringWaterPitchStiff = 1;
    this->UprightSpringWaterPitchDamp = 1;
    this->UprightSpringWaterRollStiff = 1;
    this->UprightSpringWaterRollDamp = 1;
    this->bModifyShocksInWater = false;
    this->bApplyPushForceAtSocket = false;
    this->WaterVelocityStrength = 1;
    this->MaxWaterForce = 1;
    this->NumPontoonsForFullyInWater = 0;
    this->WaterIdleTimeForRiverPush = 1;
    this->WaterIdleTimeForSleep = 1;
    this->VelocityPontoonIndex = 0;
    this->WaterShorePushFactor = 1;
    this->YawAngularDragIdleMultiplier = 1;
    this->YawAngularDragWaterEmpty = 1;
    this->WaterBodyTraceTimer = 1;
    this->WaterBodyOverlapSphereRadius = 1;
    this->WaterBodyOverlapSphereCenterZOffset = 1;
    this->ImminentCollisDestructionAngle = 1;
    this->ImminentCollisUpForwardMinProtected = 1;
    this->ImminentCollisUpNormalMinProtected = 1;
    this->bOverrideErrorCorrection = true;
    this->BoundsXYSplineClass = NULL;
}

