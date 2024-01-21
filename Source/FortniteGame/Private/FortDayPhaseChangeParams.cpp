#include "FortDayPhaseChangeParams.h"

void UFortDayPhaseChangeParams::SetParams(AFortTimeOfDayManager* _LightingAndFogManager, EFortDayPhase _NewDayPhase, UFortDayPhaseChangeParams*& ThisParam) {
}

void UFortDayPhaseChangeParams::BreakParams(AFortTimeOfDayManager*& _LightingAndFogManager, EFortDayPhase& _NewDayPhase) {
}

UFortDayPhaseChangeParams::UFortDayPhaseChangeParams() {
    this->LightingAndFogManager = NULL;
    this->NewDayPhase = EFortDayPhase::Morning;
}

