#include "FortAthenaMutator_TODOverride.h"

TArray<FText> AFortAthenaMutator_TODOverride::GetTimeOfDaySpeedNames() const {
    return TArray<FText>();
}

TArray<FText> AFortAthenaMutator_TODOverride::GetTimeOfDayPhaseNames() const {
    return TArray<FText>();
}

AFortAthenaMutator_TODOverride::AFortAthenaMutator_TODOverride() {
    TimeOfDayOverride = EAthenaTimeOfDayOverride::NoOverride;
    TimeOverride = 1;
    SpeedOverride = 1;
    LightIntensityOverride = EAthenaLightIntensityOverride::NoOverride;
    LightColorOverride = EAthenaTODColor::NoOverride;
    FogDensityOverride = EAthenaFogDensityOverride::NoOverride;
    FogColorOverride = EAthenaTODColor::NoOverride;
    PostProcessOverride = EAthenaTODPostProcess::NoOverride;
}

