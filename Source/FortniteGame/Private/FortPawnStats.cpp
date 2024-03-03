#include "FortPawnStats.h"

FFortPawnStats::FFortPawnStats() {
    this->MaximumHealth = 1;
    this->SpeedWalk = 1;
    this->SpeedRun = 1;
    this->SpeedSprint = 1;
    this->SpeedFly = 1;
    this->SpeedCrouchedRun = 1;
    this->SpeedCrouchedSprint = 1;
    this->SpeedBackwardsMultiplier = 1;
    this->SpeedDBNO = 1;
    this->AccelerationStrafeMultiplierSprint = 1;
    this->MinAnalogWalkSpeed = 1;
    this->GroundFriction = 1;
    this->BrakingDecelerationWalking = 1;
    this->BrakingDecelerationFalling = 1;
    this->BrakingDecelerationFlying = 1;
    this->BrakingFrictionFactor = 1;
    this->MaxAcceleration = 1;
    this->MaxAccelerationFlying = 1;
    this->JumpZVelocity = 1;
    this->FallingDamageTable = NULL;
    this->VehicleEjectDamageTable = NULL;
    this->HealthRegenRate = 1;
    this->HealthRegenDelay = 1;
    this->HealthRegenThreshold = 1;
    this->MaxShield = 1;
    this->ShieldRegenRate = 1;
    this->ShieldRegenDelay = 1;
    this->ShieldRegenThreshold = 1;
    this->MaxControlResistance = 1;
    this->ControlResistanceRegenRate = 1;
    this->ControlResistanceRegenDelay = 1;
    this->ControlResistanceRegenThreshold = 1;
    this->KnockbackMultiplier = 1;
    this->KnockbackThreshold = 1;
    this->bAllowChainStun = false;
    this->ControlRecoveryBehavior = EFortControlRecoveryBehavior::DefaultControl;
}

