#include "FortVehicleConfigs.h"

UFortVehicleConfigs::UFortVehicleConfigs() {
    VehicleSleepCounter = 1;
    VehicleMinSecondsBetweenUpdates = 1;
    VehicleMinFOV = 1;
    VehicleMaxFOV = 1;
    VehicleMinFOVSpeed = 1;
    VehicleMaxFOVSpeed = 1;
    VehicleFOVInterpSpeed = 1;
    InteractDistanceScalar = 1;
    MinFallDamageHeight = 1;
    MaxFallDamageHeight = 1;
    MinFallDamage = 1;
    MaxFallDamage = 1;
    PlayerFallDamageMultiplier = 1;
    VehicleEjectCooldown = 1;
    CameraSpaceForwardDistanceOverride = 1;
    PlayerToSocketSweepRadius = 1;
    VehicleGravity = 1;
    PlayerGravityMultiplier = 1;
    PassengerDamageOnDestruction = 1;
    MinFallDamageNormalScale = 1;
    DriverExitLaunchScalar = 1;
    DriverExitLaunchUpScalar = 1;
    DriverExitInAirLaunchScalar = 1;
    DriverExitInAirLaunchUpScalar = 1;
    PassengerExitLaunchScalar = 1;
    PassengerExitLaunchUpScalar = 1;
    PassengerExitInAirLaunchScalar = 1;
    PassengerExitInAirLaunchUpScalar = 1;
    bCanDoTricks = true;
    bShouldDriverHaveReticle = false;
    bSupportsWraps = true;
    ExitVehicleCoolDown = 1;
    bInheritScale = false;
    HoldToExitTime = 1;
    ForceExitZOffset = 1;
    bBlockBuilding = false;
    bPreferDriverSeatWhenEmpty = true;
    FireDamagePerSecond = 1;
    FireDamageTickRate = 1;
    bCanBeOnFire = false;
    LeakFuelProjectileTemplate = NULL;
}

