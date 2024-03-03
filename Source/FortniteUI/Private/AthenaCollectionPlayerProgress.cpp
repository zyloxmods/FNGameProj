#include "AthenaCollectionPlayerProgress.h"

bool UAthenaCollectionPlayerProgress::IsLocalPlayer() const {
    return false;
}

int32 UAthenaCollectionPlayerProgress::GetNumCollected() const {
    return 0;
}



UAthenaCollectionPlayerProgress::UAthenaCollectionPlayerProgress() {
    this->Text_PlayerName = NULL;
    this->Text_Progress = NULL;
    this->AvatarIcon = NULL;
}

