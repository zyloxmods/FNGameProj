#include "AthenaViewStreamingReplayModalBase.h"

void UAthenaViewStreamingReplayModalBase::PlayStreamingDSSReplay(const FString& GameSessionId) const {
}

bool UAthenaViewStreamingReplayModalBase::IsValidGameSessionId(const FString& GameSessionId) const {
    return false;
}

UAthenaViewStreamingReplayModalBase::UAthenaViewStreamingReplayModalBase() {
    this->EditableText_SessionSearch = NULL;
}

