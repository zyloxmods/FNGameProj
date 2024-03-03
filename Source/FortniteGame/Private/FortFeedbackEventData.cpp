#include "FortFeedbackEventData.h"

FFortFeedbackEventData::FFortFeedbackEventData() {
    this->ChanceToPlay = 1;
    this->MinReplayTime = 1;
    this->MinReplayTimeForSpeaker = 1;
    this->MaxWitnessDistance = 1;
    this->bInterruptCurrentLine = false;
    this->bCanBeInterrupted = false;
    this->bCanQue = false;
    this->MultiplayerBroadcastFilter = FFBF_Speaker;
    this->ContextSelectionMethod = FFSM_Instigator;
    this->FeedbackDelay = 1;
    this->TimeLastPlayed = 1;
}

