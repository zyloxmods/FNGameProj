#include "FortGameFrameworkComponent_EventMode.h"

void UFortGameFrameworkComponent_EventMode::OnPlayerPawnPossessed(APawn* PossessedPawn) {
}

void UFortGameFrameworkComponent_EventMode::OnExitVehicle() {
}

void UFortGameFrameworkComponent_EventMode::OnEnterVehicle() {
}

bool UFortGameFrameworkComponent_EventMode::GetIsFocusing() const {
    return false;
}

bool UFortGameFrameworkComponent_EventMode::GetIsFocusAvailable() const {
    return false;
}

bool UFortGameFrameworkComponent_EventMode::GetIsEventModeActive() const {
    return false;
}

UFortGameFrameworkComponent_EventMode::UFortGameFrameworkComponent_EventMode() {
    this->InputComponent = NULL;
}

