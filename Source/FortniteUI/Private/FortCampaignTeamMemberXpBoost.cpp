#include "FortCampaignTeamMemberXpBoost.h"

void UFortCampaignTeamMemberXpBoost::SetConsumeRequestInProgress(bool bIsRequestInProgress) {
}




int32 UFortCampaignTeamMemberXpBoost::GetCurrentBoostAmount() const {
    return 0;
}

UCommonButton* UFortCampaignTeamMemberXpBoost::GetBoostActivationButton() const {
    return NULL;
}

void UFortCampaignTeamMemberXpBoost::CenterWidget() {
}

UFortCampaignTeamMemberXpBoost::UFortCampaignTeamMemberXpBoost() {
    this->Banner_MemberBanner = NULL;
    this->Text_MemberName = NULL;
    this->Text_Boost = NULL;
    this->Image_BoostIcon = NULL;
    this->Button_ActivateBoost = NULL;
}

