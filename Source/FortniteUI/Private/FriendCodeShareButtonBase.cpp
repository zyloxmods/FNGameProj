#include "FriendCodeShareButtonBase.h"

void UFriendCodeShareButtonBase::OnQueryUnredeemedFriendCodesComplete(bool bSuccess, const TArray<FFriendCode>& FriendCodes) {
}


void UFriendCodeShareButtonBase::OnFriendCodeIssued(bool bSuccess, const FFriendCode& FriendCode) {
}

UFriendCodeShareButtonBase::UFriendCodeShareButtonBase() {
    this->FriendCodeListClass = NULL;
    this->NumSharesRemainingText = NULL;
    this->InviteCodeMessage = NULL;
}

