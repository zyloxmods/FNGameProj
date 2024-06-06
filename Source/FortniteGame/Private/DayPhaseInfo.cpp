#include "DayPhaseInfo.h"

FDayPhaseInfo::FDayPhaseInfo() {
    TimePhaseBegins = 1;
    PhaseLengthInHours = 1;
    PercentageTransitionIn = 1;
    TransitionInTimeInMinutes = 1;
    PercentageTransitionOut = 1;
    TransitionOutTimeInMinutes = 1;
    LowPriPostProcessComponent = NULL;
    SkyMaterialInstance = NULL;
    StarMapMaterialInstance = NULL;
}

