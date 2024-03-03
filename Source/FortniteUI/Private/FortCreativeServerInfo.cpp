#include "FortCreativeServerInfo.h"

UFortCreativeServerInfo::UFortCreativeServerInfo() {
    this->CurrentPlayerCount = 0;
    this->MaxPlayerCount = 0;
    this->FriendInMatch = NULL;
    this->PrivacySetting = EFortCreativeServerPrivacySetting::Unknown;
    this->IsNewServer = false;
}

