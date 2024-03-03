#include "FortSocialPanelView_UserLists.h"


void UFortSocialPanelView_UserLists::HandlePrevTabAction_STW(bool& bPassThrough) {
}

void UFortSocialPanelView_UserLists::HandleNextTabAction_STW(bool& bPassThrough) {
}

void UFortSocialPanelView_UserLists::FocusSearchResultsAfterQueryEnd(UWidget* ActiveWidget, int32 ActiveWidgetIndex) {
}

UFortSocialPanelView_UserLists::UFortSocialPanelView_UserLists() {
    this->ButtonGroup_SocialTabs = NULL;
    this->UserEntry_LocalPlayer = NULL;
    this->Button_FriendSearch = NULL;
    this->Switcher_UserLists = NULL;
    this->SocialTab_AddFriends = NULL;
    this->SocialTab_Friends = NULL;
    this->SocialTab_VoiceChat = NULL;
    this->UserTree_FriendsLists = NULL;
    this->UserTree_VoiceChat = NULL;
    this->PartyVoiceChannelHeader = NULL;
    this->GameVoiceChannelHeader = NULL;
    this->PlatformVoiceChannelHeader = NULL;
    this->VoiceChannelSettings = NULL;
    this->UserTree_AddFriends = NULL;
    this->Button_AddWeGameFriends = NULL;
    this->Switcher_VoiceChatState = NULL;
    this->VBox_VoicePlatformPartyWithSwitchButton = NULL;
    this->VBox_VoicePlatformPartyInstructions = NULL;
    this->Button_ToggleChannel = NULL;
    this->Button_JoinVoiceChat = NULL;
    this->Button_LeavePlatformVoiceChat = NULL;
    this->Button_EnableVoiceChat = NULL;
    this->Text_PartyVoiceMessage_Xbox = NULL;
    this->Text_PartyVoiceMessage_PS = NULL;
    this->RichText_MessageHeader_Xbox = NULL;
    this->RichText_MessageHeader_PS = NULL;
    this->RichText_SocialBanDescription = NULL;
    this->RichText_SocialBanRemainingTime_VoiceTab = NULL;
    this->RichText_LeavePlatformPartyInstructions_Xbox = NULL;
    this->RichText_LeavePlatformPartyInstructions_PS = NULL;
    this->Switcher_AddFriends = NULL;
    this->UserTree_SearchResults = NULL;
    this->Text_SearchingForUsers = NULL;
    this->Text_SearchFailed = NULL;
}

