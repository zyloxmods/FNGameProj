#include "FortRechargingActionTimer.h"

FFortRechargingActionTimer::FFortRechargingActionTimer() {
    this->ChargeRate = 0.00f;
    this->ActiveExpenseRate = 0.00f;
    this->PassiveExpenseRate = 0.00f;
    this->MinActiveDuration = 0.00f;
    this->MinActivationCharge = 0.00f;
    this->ActiveCooldownTime = 0.00f;
    this->ChargeThreshold = 0.00f;
    this->Charge = 0.00f;
    this->bIsActive = false;
    this->bIsCharging = false;
    this->bIsPassive = false;
}

