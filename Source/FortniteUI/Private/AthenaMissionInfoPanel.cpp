#include "AthenaMissionInfoPanel.h"


void UAthenaMissionInfoPanel::HandleCycleMissionClicked() {
}

UAthenaMissionInfoPanel::UAthenaMissionInfoPanel() {
    this->FrontendChallengeInfoEntry = NULL;
    this->MiniChallengeInfoEntry = NULL;
    this->MaxSuggestedEntries = 0;
    this->bForceToDailyFirst = true;
    this->PrestigeShimmerParamName = TEXT("PrestigeActive");
    this->ContextColorParamName = TEXT("BaseColor");
    this->MissionRewardParamName = TEXT("SmallPreviewImage");
    this->Text_DisplayedChallengeTypes = NULL;
    this->Text_ChallengeTitle = NULL;
    this->Text_ChallengeName = NULL;
    this->EntryBox_Challenges = NULL;
    this->Button_ViewNextMission = NULL;
    this->MissionReward = NULL;
    this->Switcher_MissionIcon = NULL;
    this->TimerImage = NULL;
}

