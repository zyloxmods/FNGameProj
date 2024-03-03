#include "FortLocalUserEntry.h"


void UFortLocalUserEntry::HandleMenuOpenChanged(bool bIsOpen) {
}

UWidget* UFortLocalUserEntry::HandleGetMenuContent() {
    return NULL;
}

UFortLocalUserEntry::UFortLocalUserEntry() {
    this->LocalUserSettingsMenuClass = NULL;
    this->LocalUserSettingsMenu = NULL;
    this->SocialAvatarIcon = NULL;
    this->Image_Crown = NULL;
    this->Text_UserName = NULL;
    this->Text_VoiceChannel = NULL;
    this->MenuAnchor_LocalUserSettingMenu = NULL;
}

