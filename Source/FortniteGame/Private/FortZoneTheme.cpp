#include "FortZoneTheme.h"

UFortZoneTheme::UFortZoneTheme() {
    ZoneType = EFortZoneType::PVE;
    ZoneIndex = 0;
    PlaylistId = 0;
    TeamSize = 0;
    TeamCount = 0;
    MaxPartySize = 0;
    MaxPlayers = 0;
    CriticalMissionEligibilityLength = 1;
    CriticalMissionEligibilityGracePeriodLength = 1;
    IgnoreGeneratedRewards = false;
    bOverrideConningText = false;
    MusicManagerBank = NULL;
}

