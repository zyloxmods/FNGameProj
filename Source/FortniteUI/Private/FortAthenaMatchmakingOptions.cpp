#include "FortAthenaMatchmakingOptions.h"











bool UFortAthenaMatchmakingOptions::IsLiveSpectateButtonEnabled() {
    return false;
}

void UFortAthenaMatchmakingOptions::HandleInputTypeChanged(ECommonInputType CurrentInputType) {
}

void UFortAthenaMatchmakingOptions::HandleButtonGroupSelectionChanged(UCommonButton* Button, int32 Index) {
}

FPlaylistFrontEndData UFortAthenaMatchmakingOptions::GetCurrentlyRepresentedData() const {
    return FPlaylistFrontEndData{};
}

void UFortAthenaMatchmakingOptions::CloseMatchmakingOptions() {
}

void UFortAthenaMatchmakingOptions::CanceledPlaylist() {
}

void UFortAthenaMatchmakingOptions::AcceptedPlaylist() {
}

UFortAthenaMatchmakingOptions::UFortAthenaMatchmakingOptions() {
    this->AthenaMatchmakingKnobsModalClass = NULL;
    this->TileItemClass = NULL;
    this->HardcoreChallengesScreenClass = NULL;
    this->MatchmakingTileGroup = NULL;
    this->StandardGameModeBox = NULL;
    this->LTMGameModeBox = NULL;
    this->LTMGameModeBox2 = NULL;
    this->Overlay_LTMGameModeBox2 = NULL;
    this->Button_HardcoreChallenges = NULL;
    this->TeamFillButton = NULL;
    this->SpectateButton = NULL;
    this->Button_ServerPrivacy = NULL;
    this->MatchmakingKnobsButton = NULL;
    this->MatchmakingWarningText = NULL;
    this->Text_MatchmakingSmallPoolWarning = NULL;
    this->Text_FillDisabledHardcoreModifiersWarning = NULL;
    this->Text_HardcoreModifiersDisabledForPlaylistWarning = NULL;
    this->Text_LimitedPoolsDescription = NULL;
    this->ScheduleTime = 1;
}

