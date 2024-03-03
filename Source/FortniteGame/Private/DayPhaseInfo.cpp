#include "DayPhaseInfo.h"

FDayPhaseInfo::FDayPhaseInfo() {
    this->TimePhaseBegins = 1;
    this->PhaseLengthInHours = 1;
    this->PercentageTransitionIn = 1;
    this->TransitionInTimeInMinutes = 1;
    this->PercentageTransitionOut = 1;
    this->TransitionOutTimeInMinutes = 1;
    this->LowPriPostProcessComponent = NULL;
    this->SkyMaterialInstance = NULL;
    this->StarMapMaterialInstance = NULL;
}

