#include "KeepHeartBase.h"

void AKeepHeartBase::SetAllowLooting(bool bAllowed) {
}

bool AKeepHeartBase::SaveUserKeep(AFortPlayerController* FortPC) {
    return false;
}

bool AKeepHeartBase::ResetUserKeep(AFortPlayerController* FortPC) {
    return false;
}

void AKeepHeartBase::LoadUserKeep(AFortPlayerController* FortPC) {
}

bool AKeepHeartBase::IsKeepOwner(const AFortPlayerController* FortPC) {
    return false;
}

bool AKeepHeartBase::IsKeepLoaded() {
    return false;
}

AKeepHeartBase::AKeepHeartBase() {
    this->SaveFileInstructionsHandler = NULL;
}

