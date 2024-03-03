#include "FortGameplayCueNotifyAthena_AIAlertState.h"

AFortGameplayCueNotifyAthena_AIAlertState::AFortGameplayCueNotifyAthena_AIAlertState() {
    this->CustomPrimitiveDataFloatIndex = 0;
    this->StealthMeterStartValue = 1;
    this->CurrentStealthMeterPctFilled = 1;
    this->CachedAlertStateComp = NULL;
    this->CachedMeshComp = NULL;
}

