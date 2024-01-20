#include "FortFeedbackEventData.h"

FFortFeedbackEventData::FFortFeedbackEventData() {
    this->ChanceToPlay = 0.00f;
    this->MinReplayTime = 0.00f;
    this->MinReplayTimeForSpeaker = 0.00f;
    this->MaxWitnessDistance = 0.00f;
    this->bInterruptCurrentLine = false;
    this->bCanBeInterrupted = false;
    this->bCanQue = false;
    this->MultiplayerBroadcastFilter = FFBF_Speaker;
    this->ContextSelectionMethod = FFSM_Instigator;
    this->FeedbackDelay = 0.00f;
    this->TimeLastPlayed = 0.00f;
}

