#include "MatchmakingInputIndicatorBase.h"

void UMatchmakingInputIndicatorBase::SetRemotePlayer(FUniqueNetIdRepl UniqueId) {
}


UMatchmakingInputIndicatorBase::UMatchmakingInputIndicatorBase() {
    this->InputSource = EMatchmakingInputSource::Local;
    this->bShowLocalInputOnlyWhenDifferentFromDefault = false;
    this->bShowRemoteInputOnlyWhenDifferentFromDefault = false;
    this->LastInputType = ECommonInputType::MouseAndKeyboard;
    this->SizeBox_HotfixVisibility = NULL;
}

