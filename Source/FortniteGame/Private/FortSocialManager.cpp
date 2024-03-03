#include "FortSocialManager.h"

UFortSocialManager::UFortSocialManager() {
    this->SocialImportPlatform = ESocialImportPanelPlatform::Facebook;
    this->bTutorialCompleted = false;
    this->bLeftLastPartyFromGameDisconnect = false;
    this->LocalTeam = NULL;
    this->CurrentJoinAndSpectateTarget = NULL;
}

