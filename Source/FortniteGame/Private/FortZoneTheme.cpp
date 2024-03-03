#include "FortZoneTheme.h"

UFortZoneTheme::UFortZoneTheme() {
    this->ZoneType = EFortZoneType::PVE;
    this->ZoneIndex = 0;
    this->PlaylistId = 0;
    this->TeamSize = 0;
    this->TeamCount = 0;
    this->MaxPartySize = 0;
    this->MaxPlayers = 0;
    this->CriticalMissionEligibilityLength = 1;
    this->CriticalMissionEligibilityGracePeriodLength = 1;
    this->IgnoreGeneratedRewards = false;
    this->bOverrideConningText = false;
    this->MusicManagerBank = NULL;
}

