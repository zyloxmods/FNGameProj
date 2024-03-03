#include "FortPlaylist.h"

UFortPlaylist::UFortPlaylist() {
    this->PlaylistId = 0;
    this->GameType = EFortGameType::BR;
    this->MinPlayers = 0;
    this->MaxPlayers = 0;
    this->bUnderfillMatchmaking = false;
    this->UnderfilledMaxPlayers = 0;
    this->bOverrideMaxPlayers = false;
    this->MaxHumanAndBotParticipants = 0;
    this->MaxTeamCount = 0;
    this->MaxTeamSize = 0;
    this->MaxSocialPartySize = 0;
    this->MaxSquadSize = 0;
    this->MaxSquads = 0;
    this->EnforceSquadFill = false;
    this->bAllowSquadFillOption = true;
    this->bShouldFillWhenNoSquadFillOption = false;
    this->bAllowJoinInProgress = false;
    this->EndOfMatchXpFirstElim = 0;
    this->EndOfMatchXpMultiplier = 0;
    this->UserOptions = NULL;
    this->bEnableBackfillDuringWarmupPhase = true;
    this->TimeAfterWarmupToDisableBackfill = 1;
    this->DefaultFirstTeam = 1;
    this->DefaultLastTeam = 1;
    this->FriendlyFireType = EFriendlyFireType::Off;
    this->bUseFriendlyFireAimAssist = false;
    this->LootLevel = 0;
    this->BuildingLevelOverride = 0;
    this->DBNOType = EDBNOType::On;
    this->bIgnoreWeatherEvents = false;
    this->SharedAssetGroup = NULL;
    this->ConditionalAssetGroup = NULL;
    this->bIsDefaultPlaylist = false;
    this->GarbageCollectionFrequency = 1;
    this->ServerPerformanceEventFrequency = 1;
    this->ServerMetricsEventFrequency = 1;
    this->bUseLocalizationService = false;
}

