#include "FortRechargingActionTimer.h"

FFortRechargingActionTimer::FFortRechargingActionTimer() {
    this->ChargeRate = 1;
    this->ActiveExpenseRate = 1;
    this->PassiveExpenseRate = 1;
    this->MinActiveDuration = 1;
    this->MinActivationCharge = 1;
    this->ActiveCooldownTime = 1;
    this->ChargeThreshold = 1;
    this->Charge = 1;
    this->bIsActive = false;
    this->bIsCharging = false;
    this->bIsPassive = false;
}

