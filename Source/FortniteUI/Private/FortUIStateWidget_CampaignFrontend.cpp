#include "FortUIStateWidget_CampaignFrontend.h"
#include "Templates/SubclassOf.h"

void UFortUIStateWidget_CampaignFrontend::TryMFAModal(TSubclassOf<UEnableMultiFactorModal> BPClass) {
}

void UFortUIStateWidget_CampaignFrontend::SocialBanModalCheck() {
}

bool UFortUIStateWidget_CampaignFrontend::ShowInitialCrossplayDialog() {
    return false;
}

void UFortUIStateWidget_CampaignFrontend::QueueSurvivorSquadsAutoSlottedNotification() {
}



bool UFortUIStateWidget_CampaignFrontend::IsOkToCheckForGifts(bool& bTemporary) {
    return false;
}

void UFortUIStateWidget_CampaignFrontend::HandleStoreStateChanged(EFortStoreState NewStoreState) {
}

void UFortUIStateWidget_CampaignFrontend::HandleGiftingComplete() {
}

void UFortUIStateWidget_CampaignFrontend::HandleGiftBoxRemoved(bool bSuccess) {
}

UFortPlayerSurveyDispatcher* UFortUIStateWidget_CampaignFrontend::GetPlayerSurveyDispatcher() const {
    return NULL;
}

bool UFortUIStateWidget_CampaignFrontend::CheckForGifts() {
    return false;
}

bool UFortUIStateWidget_CampaignFrontend::AttemptToOpenBattlePassTabForNewSeason() {
    return false;
}

UFortUIStateWidget_CampaignFrontend::UFortUIStateWidget_CampaignFrontend() {
    this->MainContentStack = NULL;
    this->ItemReceivedScreenClass = NULL;
    this->NextGiftBox = NULL;
    this->PlayerSurveyDispatcher = NULL;
}

