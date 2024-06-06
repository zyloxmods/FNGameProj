#include "FortPawnStats.h"

FFortPawnStats::FFortPawnStats() {
    MaximumHealth = 1;
    SpeedWalk = 1;
    SpeedRun = 1;
    SpeedSprint = 1;
    SpeedFly = 1;
    SpeedCrouchedRun = 1;
    SpeedCrouchedSprint = 1;
    SpeedBackwardsMultiplier = 1;
    SpeedDBNO = 1;
    AccelerationStrafeMultiplierSprint = 1;
    MinAnalogWalkSpeed = 1;
    GroundFriction = 1;
    BrakingDecelerationWalking = 1;
    BrakingDecelerationFalling = 1;
    BrakingDecelerationFlying = 1;
    BrakingFrictionFactor = 1;
    MaxAcceleration = 1;
    MaxAccelerationFlying = 1;
    JumpZVelocity = 1;
    FallingDamageTable = NULL;
    VehicleEjectDamageTable = NULL;
    HealthRegenRate = 1;
    HealthRegenDelay = 1;
    HealthRegenThreshold = 1;
    MaxShield = 1;
    ShieldRegenRate = 1;
    ShieldRegenDelay = 1;
    ShieldRegenThreshold = 1;
    MaxControlResistance = 1;
    ControlResistanceRegenRate = 1;
    ControlResistanceRegenDelay = 1;
    ControlResistanceRegenThreshold = 1;
    KnockbackMultiplier = 1;
    KnockbackThreshold = 1;
    bAllowChainStun = false;
    ControlRecoveryBehavior = EFortControlRecoveryBehavior::DefaultControl;
}

