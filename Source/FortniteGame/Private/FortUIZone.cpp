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
    this->CombatGraph = NULL;
    this->FactorGraph = NULL;
    this->IntensityGraph = NULL;
    this->PIDValuesGraph = NULL;
    this->PIDContributionsGraph = NULL;
    this->UtilitiesGraph = NULL;
    this->CurrentContextualReticleIconType = FCR_None;
}

