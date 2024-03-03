#include "FortAthenaMatchmakingWidgetLegacy.h"










void UFortAthenaMatchmakingWidgetLegacy::BlueprintInteracted() {
}

UFortAthenaMatchmakingWidgetLegacy::UFortAthenaMatchmakingWidgetLegacy() {
    this->DefaultMissionGen = NULL;
    this->NewModeStyleOverride = EFortMatchmakingViolatorStyle::None;
    this->EulaClass = NULL;
    this->MFA_ModalClass = NULL;
    this->MFA_Widget = NULL;
    this->RegionLockMessageWidgetClass = NULL;
    this->AccountTypeText = FText::FromString(TEXT("Epic Games Account"));
    this->Button_Play = NULL;
    this->Button_Cancel = NULL;
    this->Button_StartMatch = NULL;
    this->Button_CancelContentDownload = NULL;
    this->Button_MatchmakingMode = NULL;
    this->SpinnerAndTextContainer = NULL;
    this->ContentBeaconDownloadContainer = NULL;
    this->ContentDownloadProgressBar = NULL;
    this->TextBlock_MatchmakingHeader = NULL;
    this->TextBlock_MatchmakingMessage = NULL;
    this->TextBlock_ContentDownloadingHeader = NULL;
    this->TextBlock_NewMode = NULL;
    this->TextBlock_PartySizeWarning = NULL;
    this->OptionalTextBlock_BlackoutCountdown = NULL;
}

