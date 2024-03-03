#include "FortCreativePlayOptions.h"

bool UFortCreativePlayOptions::ShouldShowImportPlatformFriendsOption() {
    return false;
}

void UFortCreativePlayOptions::ImportPlatformFriends() {
}

void UFortCreativePlayOptions::HandleCancelClicked() {
}

UFortCreativePlayOptions::UFortCreativePlayOptions() {
    this->View_CreativeOptionsServers = NULL;
    this->Button_Play = NULL;
    this->Button_Cancel = NULL;
}

