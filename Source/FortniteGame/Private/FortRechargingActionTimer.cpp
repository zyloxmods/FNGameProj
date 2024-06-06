#include "FortRechargingActionTimer.h"

FFortRechargingActionTimer::FFortRechargingActionTimer() {
    ChargeRate = 1;
    ActiveExpenseRate = 1;
    PassiveExpenseRate = 1;
    MinActiveDuration = 1;
    MinActivationCharge = 1;
    ActiveCooldownTime = 1;
    ChargeThreshold = 1;
    Charge = 1;
    bIsActive = false;
    bIsCharging = false;
    bIsPassive = false;
}

