#include "FortSocialPanelView_UserLists.h"

void UFortSocialPanelView_UserLists::ToggleSocialPanel() {
}

UFortSocialPanelView_UserLists::UFortSocialPanelView_UserLists() : UUserWidget(FObjectInitializer::Get()) {
    this->UserEntry_LocalPlayer = NULL;
    this->Button_FriendSearch = NULL;
    this->Switcher_UserLists = NULL;
    this->SocialTab_AddFriends = NULL;
    this->SocialTab_Friends = NULL;
    this->UserTree_FriendsLists = NULL;
    this->UserTree_AddFriends = NULL;
    this->Button_AddWeGameFriends = NULL;
}

