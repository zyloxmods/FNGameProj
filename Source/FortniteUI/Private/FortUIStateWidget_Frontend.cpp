#include "FortUIStateWidget_Frontend.h"
#include "Templates/SubclassOf.h"

void UFortUIStateWidget_Frontend::TryMFAModal(TSubclassOf<UEnableMultiFactorModal> BPClass) {
}

bool UFortUIStateWidget_Frontend::ShowInitialCrossplayDialog() {
    return false;
}

void UFortUIStateWidget_Frontend::SetVideoActive(bool bActive) {
}


bool UFortUIStateWidget_Frontend::NeedSeeTrailerMovie(bool bAllowUpdate) const {
    return false;
}

void UFortUIStateWidget_Frontend::MarkTrailerMovieSeenByIndex(int32 IndexOfMovieToMarkSeen) {
}

bool UFortUIStateWidget_Frontend::IsOkToCheckForGifts(bool& bTemporary) {
    return false;
}

void UFortUIStateWidget_Frontend::HandleGiftingComplete() {
}

void UFortUIStateWidget_Frontend::HandleGiftBoxRemoved(bool bSuccess) {
}

bool UFortUIStateWidget_Frontend::GetTrailerMovieIndexThatNeedsToBeShownForQuest(int32& IndexOfMovieToShow) const {
    return false;
}

bool UFortUIStateWidget_Frontend::CheckForGifts() {
    return false;
}

void UFortUIStateWidget_Frontend::CheckBanStatus(bool bBanned) {
}

bool UFortUIStateWidget_Frontend::AttemptToOpenBattlePassTabForNewSeason() {
    return false;
}

UFortUIStateWidget_Frontend::UFortUIStateWidget_Frontend() {
    this->bVideoActive = false;
    this->NextGiftBox = NULL;
    this->ItemReceivedScreenClass = NULL;
}

