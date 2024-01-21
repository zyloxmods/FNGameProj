#include "FortAthenaMutator_TODOverride.h"

TArray<FText> AFortAthenaMutator_TODOverride::GetTimeOfDaySpeedNames() const {
    return TArray<FText>();
}

TArray<FText> AFortAthenaMutator_TODOverride::GetTimeOfDayPhaseNames() const {
    return TArray<FText>();
}

AFortAthenaMutator_TODOverride::AFortAthenaMutator_TODOverride() {
    this->TimeOfDayOverride = EAthenaTimeOfDayOverride::NoOverride;
    this->TimeOverride = 11.00f;
    this->SpeedOverride = 60.00f;
}

