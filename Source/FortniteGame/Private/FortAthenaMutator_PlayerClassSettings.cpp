#include "FortAthenaMutator_PlayerClassSettings.h"

bool AFortAthenaMutator_PlayerClassSettings::SetupGameRulesForClassContext_Implementation(AFortMinigame* Minigame) {
    return false;
}

void AFortAthenaMutator_PlayerClassSettings::SetClassContext(uint8 ClassSlotIndex) {
}

bool AFortAthenaMutator_PlayerClassSettings::RemoveDataSource(const UObject* DataSource) {
    return false;
}

uint8 AFortAthenaMutator_PlayerClassSettings::GetClassContext() const {
    return 0;
}

bool AFortAthenaMutator_PlayerClassSettings::AddDataSourceForPlayerClass(uint8 ClassSlotIndex, const UObject* DataSource) {
    return false;
}

AFortAthenaMutator_PlayerClassSettings::AFortAthenaMutator_PlayerClassSettings() {
    NumClassSlots = 16;
    ClassSettingsClass = NULL;
}

