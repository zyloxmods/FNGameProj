#include "FortSocialManager.h"

UFortSocialManager::UFortSocialManager() {
    SocialImportPlatform = ESocialImportPanelPlatform::Facebook;
    bTutorialCompleted = false;
    bLeftLastPartyFromGameDisconnect = false;
    LocalTeam = NULL;
    CurrentJoinAndSpectateTarget = NULL;
}

