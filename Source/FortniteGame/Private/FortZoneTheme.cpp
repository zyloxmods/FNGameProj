#include "FortZoneTheme.h"

UFortZoneTheme::UFortZoneTheme() {
    this->ZoneType = EFortZoneType::PVE;
    this->ZoneIndex = -1;
    this->PlaylistId = 0;
    this->TeamSize = 0;
    this->TeamCount = 0;
    this->MaxPartySize = 0;
    this->MaxPlayers = 0;
    this->CriticalMissionEligibilityLength = 480.00f;
    this->CriticalMissionEligibilityGracePeriodLength = 180.00f;
    this->IgnoreGeneratedRewards = false;
    this->bOverrideConningText = false;
    this->MusicManagerBank = NULL;
}

