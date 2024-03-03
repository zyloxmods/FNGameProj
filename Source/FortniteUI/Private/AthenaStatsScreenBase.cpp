#include "AthenaStatsScreenBase.h"


void UAthenaStatsScreenBase::SetDisplayName(FText InDisplayName) {
}

void UAthenaStatsScreenBase::SetAccountIdToQueryFromString(const FString& InAccountId) {
}

void UAthenaStatsScreenBase::OnTabSelected(FName TabName) {
}



void UAthenaStatsScreenBase::DisplayQueriedUserPlatformProfile() {
}

UAthenaStatsScreenBase::UAthenaStatsScreenBase() {
    this->StatsTabList = NULL;
    this->WinsTile = NULL;
    this->SecondTierTile = NULL;
    this->ThirdTierTile = NULL;
    this->KillsRow = NULL;
    this->MatchesPlayedRow = NULL;
    this->LastUpdatedTime = NULL;
    this->PlayerName = NULL;
    this->SeasonContainer = NULL;
    this->AccountContainer = NULL;
    this->MainStatsContainer = NULL;
    this->PlatformButton = NULL;
    this->Image_PlatformIcon = NULL;
    this->LTM_Disclaimer = NULL;
    this->Button_ChangeFlag = NULL;
    this->Image_YourFlag = NULL;
    this->Image_OtherUserFlag = NULL;
    this->Switcher_FlagDisplay = NULL;
    this->bWasLastQuerySuccessful = true;
    this->PlaylistsData = NULL;
    this->FortFlagSelectionModalClass = NULL;
    this->QueriedSocialUser = NULL;
}

