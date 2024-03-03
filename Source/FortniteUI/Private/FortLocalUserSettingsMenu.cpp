#include "FortLocalUserSettingsMenu.h"


void UFortLocalUserSettingsMenu::HandleMenuAnchorOpenChanged(bool bIsOpen) {
}

UFortLocalUserSettingsMenu::UFortLocalUserSettingsMenu() {
    this->OwningMenuAnchor = NULL;
    this->Section_OnlineStatus = NULL;
    this->Section_Privacy = NULL;
    this->Section_Participation = NULL;
    this->Section_VoiceChannel = NULL;
    this->Section_FriendSubscription = NULL;
}

