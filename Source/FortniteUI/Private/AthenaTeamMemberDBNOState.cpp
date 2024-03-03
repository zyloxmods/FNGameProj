#include "AthenaTeamMemberDBNOState.h"

void UAthenaTeamMemberDBNOState::SetPlayerState(AFortPlayerStateAthena* InPlayerState) {
}

UAthenaTeamMemberDBNOState::UAthenaTeamMemberDBNOState() {
    this->Switcher_Indicator = NULL;
    this->Panel_DefaultIndicator = NULL;
    this->Panel_CustomIndicator = NULL;
    this->LazyImage_Indicator = NULL;
    this->Image_Timer = NULL;
    this->LazyWidget_CustomWidgetContainer = NULL;
    this->LazyImage_CustomWidgetTimer = NULL;
}

