#include "FortFeedbackEventData.h"

FFortFeedbackEventData::FFortFeedbackEventData() {
    ChanceToPlay = 1;
    MinReplayTime = 1;
    MinReplayTimeForSpeaker = 1;
    MaxWitnessDistance = 1;
    bInterruptCurrentLine = false;
    bCanBeInterrupted = false;
    bCanQue = false;
    MultiplayerBroadcastFilter = FFBF_Speaker;
    ContextSelectionMethod = FFSM_Instigator;
    FeedbackDelay = 1;
    TimeLastPlayed = 1;
}

