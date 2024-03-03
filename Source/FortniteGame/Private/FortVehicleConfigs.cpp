#include "FortVehicleConfigs.h"

UFortVehicleConfigs::UFortVehicleConfigs() {
    this->VehicleSleepCounter = 1;
    this->VehicleMinSecondsBetweenUpdates = 1;
    this->VehicleMinFOV = 1;
    this->VehicleMaxFOV = 1;
    this->VehicleMinFOVSpeed = 1;
    this->VehicleMaxFOVSpeed = 1;
    this->VehicleFOVInterpSpeed = 1;
    this->InteractDistanceScalar = 1;
    this->MinFallDamageHeight = 1;
    this->MaxFallDamageHeight = 1;
    this->MinFallDamage = 1;
    this->MaxFallDamage = 1;
    this->PlayerFallDamageMultiplier = 1;
    this->VehicleEjectCooldown = 1;
    this->CameraSpaceForwardDistanceOverride = 1;
    this->PlayerToSocketSweepRadius = 1;
    this->VehicleGravity = 1;
    this->PlayerGravityMultiplier = 1;
    this->PassengerDamageOnDestruction = 1;
    this->MinFallDamageNormalScale = 1;
    this->DriverExitLaunchScalar = 1;
    this->DriverExitLaunchUpScalar = 1;
    this->DriverExitInAirLaunchScalar = 1;
    this->DriverExitInAirLaunchUpScalar = 1;
    this->PassengerExitLaunchScalar = 1;
    this->PassengerExitLaunchUpScalar = 1;
    this->PassengerExitInAirLaunchScalar = 1;
    this->PassengerExitInAirLaunchUpScalar = 1;
    this->bCanDoTricks = true;
    this->bShouldDriverHaveReticle = false;
    this->bSupportsWraps = true;
    this->ExitVehicleCoolDown = 1;
    this->bInheritScale = false;
    this->HoldToExitTime = 1;
    this->ForceExitZOffset = 1;
    this->bBlockBuilding = false;
    this->bPreferDriverSeatWhenEmpty = true;
    this->FireDamagePerSecond = 1;
    this->FireDamageTickRate = 1;
    this->bCanBeOnFire = false;
    this->LeakFuelProjectileTemplate = NULL;
}

