#include "FortPlayerZoneSettingsComponent.h"

UFortPlayerZoneSettingsComponent::UFortPlayerZoneSettingsComponent() {
    TimeOfDayOverride = EAthenaTimeOfDayOverride::NoOverride;
    PostProcessOverride = EAthenaTODPostProcess::NoOverride;
    LightIntensityOverride = EAthenaLightIntensityOverride::NoOverride;
    LightColorOverride = EAthenaTODColor::NoOverride;
    FogDensityOverride = EAthenaFogDensityOverride::NoOverride;
    FogColorOverride = EAthenaTODColor::NoOverride;
}

