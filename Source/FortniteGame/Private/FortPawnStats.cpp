#include "FortPawnStats.h"

FFortPawnStats::FFortPawnStats() {
    this->MaximumHealth = 0.00f;
    this->SpeedWalk = 0.00f;
    this->SpeedRun = 0.00f;
    this->SpeedSprint = 0.00f;
    this->SpeedFly = 0.00f;
    this->SpeedCrouchedRun = 0.00f;
    this->SpeedCrouchedSprint = 0.00f;
    this->SpeedBackwardsMultiplier = 0.00f;
    this->SpeedDBNO = 0.00f;
    this->AccelerationStrafeMultiplierSprint = 0.00f;
    this->MinAnalogWalkSpeed = 0.00f;
    this->GroundFriction = 0.00f;
    this->BrakingDecelerationWalking = 0.00f;
    this->BrakingDecelerationFalling = 0.00f;
    this->BrakingDecelerationFlying = 0.00f;
    this->BrakingFrictionFactor = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->MaxAccelerationFlying = 0.00f;
    this->JumpZVelocity = 0.00f;
    this->FallingDamageTable = NULL;
    this->VehicleEjectDamageTable = NULL;
    this->HealthRegenRate = 0.00f;
    this->HealthRegenDelay = 0.00f;
    this->HealthRegenThreshold = 0.00f;
    this->MaxShield = 0.00f;
    this->ShieldRegenRate = 0.00f;
    this->ShieldRegenDelay = 0.00f;
    this->ShieldRegenThreshold = 0.00f;
    this->MaxControlResistance = 0.00f;
    this->ControlResistanceRegenRate = 0.00f;
    this->ControlResistanceRegenDelay = 0.00f;
    this->ControlResistanceRegenThreshold = 0.00f;
    this->KnockbackMultiplier = 0.00f;
    this->KnockbackThreshold = 0.00f;
    this->bAllowChainStun = false;
    this->ControlRecoveryBehavior = EFortControlRecoveryBehavior::DefaultControl;
}

