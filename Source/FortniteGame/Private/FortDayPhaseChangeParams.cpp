#include "FortDayPhaseChangeParams.h"

void UFortDayPhaseChangeParams::SetParams(AFortTimeOfDayManager* _LightingAndFogManager, EFortDayPhase _NewDayPhase, UFortDayPhaseChangeParams*& ThisParam) {
}

void UFortDayPhaseChangeParams::BreakParams(AFortTimeOfDayManager*& _LightingAndFogManager, EFortDayPhase& _NewDayPhase) {
}

UFortDayPhaseChangeParams::UFortDayPhaseChangeParams() {
    LightingAndFogManager = NULL;
    NewDayPhase = EFortDayPhase::Morning;
}

