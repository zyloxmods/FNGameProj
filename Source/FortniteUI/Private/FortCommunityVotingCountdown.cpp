#include "FortCommunityVotingCountdown.h"

void UFortCommunityVotingCountdown::SetDateTimeValue(const FDateTime& InDateTime, float InRefreshDelay) {
}

UFortCommunityVotingCountdown::UFortCommunityVotingCountdown() : UUserWidget(FObjectInitializer::Get()) {
    this->Text_TimeRemaining = NULL;
}

