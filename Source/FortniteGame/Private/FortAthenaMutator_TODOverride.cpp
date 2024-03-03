#include "FortAthenaMutator_TODOverride.h"

TArray<FText> AFortAthenaMutator_TODOverride::GetTimeOfDaySpeedNames() const {
    return TArray<FText>();
}

TArray<FText> AFortAthenaMutator_TODOverride::GetTimeOfDayPhaseNames() const {
    return TArray<FText>();
}

AFortAthenaMutator_TODOverride::AFortAthenaMutator_TODOverride() {
    this->TimeOfDayOverride = EAthenaTimeOfDayOverride::NoOverride;
    this->TimeOverride = 1;
    this->SpeedOverride = 1;
    this->LightIntensityOverride = EAthenaLightIntensityOverride::NoOverride;
    this->LightColorOverride = EAthenaTODColor::NoOverride;
    this->FogDensityOverride = EAthenaFogDensityOverride::NoOverride;
    this->FogColorOverride = EAthenaTODColor::NoOverride;
    this->PostProcessOverride = EAthenaTODPostProcess::NoOverride;
}

