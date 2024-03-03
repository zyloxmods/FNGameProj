#include "AthenaBroadcastKillFeedBase.h"

void UAthenaBroadcastKillFeedBase::OnToggleShowKillFeed(bool bShowKillFeed) {
}

void UAthenaBroadcastKillFeedBase::OnTimelineScrubbed() {
}

void UAthenaBroadcastKillFeedBase::AddKillFeedEntry(const FAthenaBroadcastKillFeedEntryInfo& KillFeedEntryInfo) {
}

UAthenaBroadcastKillFeedBase::UAthenaBroadcastKillFeedBase() {
    this->KillFeedEntryBox = NULL;
    this->TimeToShowEntry = 1;
}

