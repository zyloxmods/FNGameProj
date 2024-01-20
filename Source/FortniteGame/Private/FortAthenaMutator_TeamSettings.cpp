#include "FortAthenaMutator_TeamSettings.h"


void AFortAthenaMutator_TeamSettings::SetTeamContext(uint8 TeamIndex) {
}

bool AFortAthenaMutator_TeamSettings::RemoveDataSource(const UObject* DataSource) {
    return false;
}

uint8 AFortAthenaMutator_TeamSettings::GetTeamContext() const {
    return 0;
}

UFortTeamSettingsComponent* AFortAthenaMutator_TeamSettings::GetComponentForEnabledSetting(const FName& PropertyName, bool bFallbackToDefaultTeam) const {
    return NULL;
}

bool AFortAthenaMutator_TeamSettings::AddDataSourceForTeam(uint8 TeamIndex, const UObject* DataSource) {
    return false;
}

AFortAthenaMutator_TeamSettings::AFortAthenaMutator_TeamSettings() {
    this->TeamSettingsClass = NULL;
    this->DefaultTeamSettings = NULL;
    this->CurrentTeamSettings = NULL;
}

