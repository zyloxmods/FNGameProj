#include "FortAthenaMutator_PlayerTeamSettings.h"

bool AFortAthenaMutator_PlayerTeamSettings::SetupGameRulesForTeamContext_Implementation(AFortMinigame* Minigame) {
    return false;
}

void AFortAthenaMutator_PlayerTeamSettings::SetTeamContext(uint8 TeamIndex) {
}

bool AFortAthenaMutator_PlayerTeamSettings::RemoveDataSource(const UObject* DataSource) {
    return false;
}

uint8 AFortAthenaMutator_PlayerTeamSettings::GetTeamContext() const {
    return 0;
}

UFortPlayerTeamSettingsComponent* AFortAthenaMutator_PlayerTeamSettings::GetComponentForEnabledSetting(const FName PropertyName, bool bFallbackToDefaultTeam) const {
    return NULL;
}

bool AFortAthenaMutator_PlayerTeamSettings::AddDataSourceForTeam(uint8 TeamIndex, const UObject* DataSource) {
    return false;
}

AFortAthenaMutator_PlayerTeamSettings::AFortAthenaMutator_PlayerTeamSettings() {
    TeamSettingsClass = NULL;
}

