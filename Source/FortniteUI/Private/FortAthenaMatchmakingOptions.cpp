#include "FortAthenaMatchmakingOptions.h"






void UFortAthenaMatchmakingOptions::SetOwningMatchmakingWidget(UFortAthenaMatchmakingWidget* InOwningMatchmakingWidget) {
}

void UFortAthenaMatchmakingOptions::SetCustomMatchOptions(TMap<FString, FString> Options, const FName& PlaylistName) {
}




void UFortAthenaMatchmakingOptions::HandleInputTypeChanged(ECommonInputType CurrentInputType) {
}

void UFortAthenaMatchmakingOptions::HandleButtonGroupSelectionChanged(UCommonButton* Button, int32 Index) {
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
    this->MatchmakingTileGroup = NULL;
    this->StandardGameModeBox = NULL;
    this->LTMGameModeBox = NULL;
    this->LTMGameModeBox2 = NULL;
    this->Overlay_LTMGameModeBox2 = NULL;
    this->TeamFillButton = NULL;
    this->SpectateButton = NULL;
    this->Button_ServerPrivacy = NULL;
    this->MatchmakingKnobsButton = NULL;
    this->MatchmakingWarningText = NULL;
    this->Text_MatchmakingSmallPoolWarning = NULL;
    this->Text_LimitedPoolsDescription = NULL;
}

