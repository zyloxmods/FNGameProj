#include "FortAthenaAIBotEvaluator_PlayEmote.h"

UFortAthenaAIBotEvaluator_PlayEmote::UFortAthenaAIBotEvaluator_PlayEmote() {
    this->PlayEmoteExecutionStatusKeyName = TEXT("AIEvaluator_PlayEmote_ExecutionStatus");
    this->PlayEmoteDestinationKeyName = TEXT("AIEvaluator_PlayEmote_Destination");
    this->BlacklistReachingTarget = NULL;
}

