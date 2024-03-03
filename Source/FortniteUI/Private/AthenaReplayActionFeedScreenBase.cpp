#include "AthenaReplayActionFeedScreenBase.h"

void UAthenaReplayActionFeedScreenBase::OnReplayEventsUpdated(EPlayEventType Type) {
}

void UAthenaReplayActionFeedScreenBase::HandlePlayerBecameRelevant(AFortPlayerState* FortPlayerState) {
}

void UAthenaReplayActionFeedScreenBase::HandleCloseActionFeed() {
}

UAthenaReplayActionFeedScreenBase::UAthenaReplayActionFeedScreenBase() {
    this->ListView_Entries = NULL;
    this->Button_Close = NULL;
}

