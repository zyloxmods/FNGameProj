#include "AthenaUIStateWidget_Frontend.h"



void UAthenaUIStateWidget_Frontend::SocialBanModalCheck() {
}

void UAthenaUIStateWidget_Frontend::SetVideoActive(bool bActive) {
}


bool UAthenaUIStateWidget_Frontend::NeedSeeTrailerMovie(bool bAllowUpdate, bool bSkipUserSettingCheck) const {
    return false;
}

void UAthenaUIStateWidget_Frontend::HandleSeasonTrailerPlayed() {
}

void UAthenaUIStateWidget_Frontend::HandleSeasonTrailerEnded() {
}

UFortPlayerSurveyDispatcher* UAthenaUIStateWidget_Frontend::GetPlayerSurveyDispatcher() const {
    return NULL;
}

bool UAthenaUIStateWidget_Frontend::AttemptToOpenBattlePassTabForNewSeason() {
    return false;
}

UAthenaUIStateWidget_Frontend::UAthenaUIStateWidget_Frontend() {
    this->GuidedTutorialFakeLoadingScreenClass = NULL;
    this->MOTDWidgetClass = NULL;
    this->NewVideoPlayerClass = NULL;
    this->SocialImportPanelClass = NULL;
    this->ConfirmationWindowClass = NULL;
    this->MiniMapManagerClass = NULL;
    this->ItemReceivedScreenClass = NULL;
    this->PlayerBannedScreenClass = NULL;
    this->PlayerSurveyDispatcher = NULL;
    this->bVideoActive = false;
    this->TopBar_Widget = NULL;
    this->BottomBar = NULL;
    this->ChatPanel_Widget = NULL;
    this->Button_ToggleChat = NULL;
    this->DualBladeMenu_Widget = NULL;
    this->NextGiftBox = NULL;
}

