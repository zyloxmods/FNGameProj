#include "FortCreativePlayOptions.h"

bool UFortCreativePlayOptions::ShouldShowImportPlatformFriendsOption() {
    return false;
}

void UFortCreativePlayOptions::SetMatchmakingWidget(UFortAthenaMatchmakingWidget* InWidget) {
}

void UFortCreativePlayOptions::ImportPlatformFriends() {
}

void UFortCreativePlayOptions::HandleCancelClicked() {
}

UFortCreativePlayOptions::UFortCreativePlayOptions() {
    this->CreativeOptionsServers = NULL;
    this->PlayButton = NULL;
    this->CancelButton = NULL;
}

