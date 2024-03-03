#include "FortTeamMemberManage.h"

void UFortTeamMemberManage::SetRepresentingTeamMember(int32 LocalTeamMemberIndex) {
}



void UFortTeamMemberManage::OnBannerEditorClosed() {
}

UFortTeamMemberManage::UFortTeamMemberManage() {
    this->Banner_PlayerBanner = NULL;
    this->Text_PlayerName = NULL;
    this->PowerRatingWidgetSwitcher = NULL;
    this->PowerRating_MemberPowerRating = NULL;
    this->Moonbeam_PowerRating_MemberPowerRating = NULL;
    this->VBox_Buttons = NULL;
    this->Button_EditBanner = NULL;
    this->Button_LeaveParty = NULL;
    this->Button_MakePartyLeader = NULL;
    this->Button_Whisper = NULL;
    this->Button_Kick = NULL;
    this->Button_ViewProfile = NULL;
    this->Button_Mute = NULL;
    this->Button_Unmute = NULL;
    this->Button_ToggleParticipation = NULL;
}

