#include "FortPlaylist.h"

UFortPlaylist::UFortPlaylist() {
    PlaylistId = 0;
    GameType = EFortGameType::BR;
    MinPlayers = 0;
    MaxPlayers = 0;
    bUnderfillMatchmaking = false;
    UnderfilledMaxPlayers = 0;
    bOverrideMaxPlayers = false;
    MaxHumanAndBotParticipants = 0;
    MaxTeamCount = 0;
    MaxTeamSize = 0;
    MaxSocialPartySize = 0;
    MaxSquadSize = 0;
    MaxSquads = 0;
    EnforceSquadFill = false;
    bAllowSquadFillOption = true;
    bShouldFillWhenNoSquadFillOption = false;
    bAllowJoinInProgress = false;
    EndOfMatchXpFirstElim = 0;
    EndOfMatchXpMultiplier = 0;
    UserOptions = NULL;
    bEnableBackfillDuringWarmupPhase = true;
    TimeAfterWarmupToDisableBackfill = 1;
    DefaultFirstTeam = 1;
    DefaultLastTeam = 1;
    FriendlyFireType = EFriendlyFireType::Off;
    bUseFriendlyFireAimAssist = false;
    LootLevel = 0;
    BuildingLevelOverride = 0;
    DBNOType = EDBNOType::On;
    bIgnoreWeatherEvents = false;
    SharedAssetGroup = NULL;
    ConditionalAssetGroup = NULL;
    bIsDefaultPlaylist = false;
    GarbageCollectionFrequency = 1;
    ServerPerformanceEventFrequency = 1;
    ServerMetricsEventFrequency = 1;
    bUseLocalizationService = false;
}

