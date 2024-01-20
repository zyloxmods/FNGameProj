#include "FortAthenaMatchmakingWidget.h"










void UFortAthenaMatchmakingWidget::GetCurrentTournamentAndEvent(FString& TournamentId, FString& EventId) {
}

void UFortAthenaMatchmakingWidget::BlueprintInteracted() {
}

UFortAthenaMatchmakingWidget::UFortAthenaMatchmakingWidget() {
    this->DefaultMissionGen = NULL;
    this->NewModeStyleOverride = EFortMatchmakingViolatorStyle::None;
    this->EulaClass = NULL;
    this->EulaWidget = NULL;
    this->MFA_ModalClass = NULL;
    this->MFA_Widget = NULL;
    this->RegionLockMessageWidgetClass = NULL;
    this->Button_Play = NULL;
    this->Button_Cancel = NULL;
    this->Button_StartMatch = NULL;
    this->Button_MatchmakingMode = NULL;
    this->SpinnerAndTextContainer = NULL;
    this->TextBlock_MatchmakingHeader = NULL;
    this->TextBlock_MatchmakingMessage = NULL;
    this->TextBlock_NewMode = NULL;
    this->TextBlock_PartySizeWarning = NULL;
}

