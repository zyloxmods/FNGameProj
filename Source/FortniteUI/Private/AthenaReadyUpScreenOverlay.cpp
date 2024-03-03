#include "AthenaReadyUpScreenOverlay.h"











UAthenaReadyUpScreenOverlay::UAthenaReadyUpScreenOverlay() {
    this->MatchmakingWidgetClass = NULL;
    this->MatchMakingWidgetOverlay = NULL;
    this->ToLobbyDelayOnError = 1;
    this->Button_Cancel = NULL;
    this->Button_StartMatch = NULL;
    this->Switcher_MatchmakingStatus = NULL;
    this->Container_CountdownStatus = NULL;
    this->Container_FindingMatchStatus = NULL;
    this->Container_Error = NULL;
    this->Container_Waiting = NULL;
    this->Container_NoStatus = NULL;
    this->Text_MatchmakingElapsed = NULL;
    this->Text_CountdownCurrent = NULL;
    this->Text_CountdownNext = NULL;
    this->Button_StayTogether = NULL;
    this->MatchmakingWidget = NULL;
}

