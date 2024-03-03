#include "FortGameplayFeedbackEventData.h"

void UFortGameplayFeedbackEventData::PostFeedbackEventMessage(AActor* EventSourceActor, const FGameplayFeedbackEventParams& EventParams, const TMap<FString, FText>& AdditionalArgs) {
}

void UFortGameplayFeedbackEventData::PostFeedbackEventFromGameMessage(AActor* EventSourceActor, const FAthenaGameMessageData& MsgData, const FUniqueNetIdRepl& InstigatorPlayerId, const TMap<FString, FText>& AdditionalArgs) {
}

UFortGameplayFeedbackEventData::UFortGameplayFeedbackEventData() {
}

