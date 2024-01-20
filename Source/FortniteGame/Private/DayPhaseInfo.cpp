#include "DayPhaseInfo.h"

FDayPhaseInfo::FDayPhaseInfo() {
    this->TimePhaseBegins = 0.00f;
    this->PhaseLengthInHours = 0.00f;
    this->PercentageTransitionIn = 0.00f;
    this->TransitionInTimeInMinutes = 0.00f;
    this->PercentageTransitionOut = 0.00f;
    this->TransitionOutTimeInMinutes = 0.00f;
    this->LowPriPostProcessComponent = NULL;
    this->SkyMaterialInstance = NULL;
    this->StarMapMaterialInstance = NULL;
}

