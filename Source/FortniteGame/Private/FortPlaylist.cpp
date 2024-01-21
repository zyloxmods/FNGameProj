#include "FortPlaylist.h"

UFortPlaylist::UFortPlaylist() {
    this->PlaylistId = 0;
    this->MinPlayers = 20;
    this->MaxPlayers = 0;
    this->MaxTeamCount = 0;
    this->MaxTeamSize = 0;
    this->MaxSocialPartySize = 16;
    this->MaxSquadSize = 0;
    this->MaxSquads = -1;
    this->EnforceSquadFill = false;
    this->bAllowSquadFillOption = true;
    this->bAllowJoinInProgress = false;
    this->bAllowBroadcasting = false;
    this->UserOptions = NULL;
    this->DefaultFirstTeam = 1;
    this->DefaultLastTeam = 1;
    this->FriendlyFireType = EFriendlyFireType::Off;
    this->bUseFriendlyFireAimAssist = false;
    this->LootLevel = 1;
    this->BuildingLevelOverride = 0;
    this->DBNOType = EDBNOType::On;
    this->SpawnImmunityTime = 5.00f;
    this->SharedAssetGroup = NULL;
    this->ConditionalAssetGroup = NULL;
    this->bIsDefaultPlaylist = false;
    this->GarbageCollectionFrequency = 0.00f;
    this->ServerPerformanceEventFrequency = 0.00f;
    this->ServerMetricsEventFrequency = 60.00f;
}

