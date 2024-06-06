#include "FortUIZone.h"

void AFortUIZone::ToggleTargetInfoSensing() {
}

void AFortUIZone::ToggleTargetInfoPaths() {
}

void AFortUIZone::ToggleTargetInfoLock(bool bTraceComplex) {
}

void AFortUIZone::ToggleTargetInfoAI() {
}

void AFortUIZone::ToggleTargetInfo() {
}

FName AFortUIZone::GetCurrentCursorModeAction() {
    return NAME_None;
}

void AFortUIZone::CloseFullScreenMap() {
}

AFortUIZone::AFortUIZone() {
    IntensityGraph = NULL;
    PIDValuesGraph = NULL;
    PIDContributionsGraph = NULL;
    UtilitiesGraph = NULL;
    CurrentContextualReticleIconType = FCR_None;
}

