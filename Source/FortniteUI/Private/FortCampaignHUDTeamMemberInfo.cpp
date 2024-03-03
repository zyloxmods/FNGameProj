#include "FortCampaignHUDTeamMemberInfo.h"

void UFortCampaignHUDTeamMemberInfo::HandlePlayerPawnChanged() {
}

void UFortCampaignHUDTeamMemberInfo::HandleDBNOChanged(AFortPawn* Pawn, bool bInIsDBNO) {
}

void UFortCampaignHUDTeamMemberInfo::HandleAccumulatedItemsChanged() {
}

UFortCampaignHUDTeamMemberInfo::UFortCampaignHUDTeamMemberInfo() {
    this->Image_HeroIcon = NULL;
    this->PowerRating_MemberRating = NULL;
    this->Text_BluGloCount = NULL;
    this->VoiceIcon_Status = NULL;
    this->Text_MemberName = NULL;
    this->Image_LeaderIcon = NULL;
    this->Image_PlatformIcon = NULL;
    this->Image_HealthBar = NULL;
    this->Image_ShieldBar = NULL;
}

