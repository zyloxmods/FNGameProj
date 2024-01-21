#include "FortBlueprintAnalytics.h"

void UFortBlueprintAnalytics::FireQuestAnalyticsEvent_BlueprintArray(const UObject* SourceBp, const FString& EventName, const UFortQuestItem* Quest, const TArray<FFortAnalyticsEventAttribute>& Attributes) {
}

void UFortBlueprintAnalytics::FireQuestAnalyticsEvent_Blueprint(const UObject* SourceBp, const FString& EventName, const UFortQuestItem* Quest) {
}

void UFortBlueprintAnalytics::FireMissionAnalyticsEvent_BlueprintArray(const UObject* SourceBp, const FString& EventName, const TArray<FFortAnalyticsEventAttribute>& Attributes) {
}

void UFortBlueprintAnalytics::FireMissionAnalyticsEvent_Blueprint(const UObject* SourceBp, const FString& EventName, const FFortAnalyticsEventAttribute& Attribute) {
}

void UFortBlueprintAnalytics::FireEvent_StreamingMediaRelevancy(AFortPlayerController* FortPC, float Time) {
}

void UFortBlueprintAnalytics::FireEvent_MatchmakingClientStatusTextChanged(const UObject* SourceBp, bool bMatchmakingIsLocal, bool bUserIsMatchmaking, bool bPartyIsPostMatchmaking, bool bIsStormShieldMission, const FString& QueueState, TEnumAsByte<EMatchmakingState::Type> MatchmakingState) {
}

void UFortBlueprintAnalytics::FireEvent_MatchmakingClientStarted(const UObject* SourceBp, bool bMatchmakingStarted, bool bClientPartyStateMatchmaking, bool bClientPartyStateChangedPostMatchmaking) {
}

void UFortBlueprintAnalytics::FireEvent_MatchmakingClientEnded(const UObject* SourceBp, bool bPartyStateIsWorldView, bool bPartyStateIsTheaterView, bool bPartyStateIsReturningToFrontEnd, bool bMatchmakingComplete, bool bLobbyStarted, bool bMatchmakingCancelled) {
}

void UFortBlueprintAnalytics::FireEvent_ItemThrownBP(const UObject* SourceBp, const FString& ItemName, const FVector& Velocity) {
}

void UFortBlueprintAnalytics::FireEvent_GrapplingHookAttachEvent(const UObject* SourceBp, const bool bAttached, const bool bFromVehicle) {
}

void UFortBlueprintAnalytics::FireEvent_BuildLimitProgressIncremented(const UObject* SourceBp, AFortPlayerController* FortPC, AFortMission* Mission, EFortBuildingType BuildingType, int32 BuildLimitProgress, int32 BuildLimit) {
}

void UFortBlueprintAnalytics::FireEvent_BuildLimitProgressDecremented(const UObject* SourceBp, AController* Destroyer, AFortMission* Mission, EFortBuildingType BuildingType, int32 BuildLimitProgress, int32 BuildLimit) {
}

void UFortBlueprintAnalytics::FireAnalyticsEvent_BlueprintArray(const UObject* SourceBp, const FString& EventName, const TArray<FFortAnalyticsEventAttribute>& Attributes) {
}

void UFortBlueprintAnalytics::FireAnalyticsEvent_Blueprint(const UObject* SourceBp, const FString& EventName, const FFortAnalyticsEventAttribute& Attribute) {
}

void UFortBlueprintAnalytics::FireAnalyticEventEnvironmentalItemUsed(AFortPlayerController* FortPC, AActor* EnvironmentalItem) {
}

FFortAnalyticsEventAttribute UFortBlueprintAnalytics::ConstructAnalyticsAttribute(const FString& AttributeName, const FString& StringValue, const FGuid FGuidValue, const int32 IntValue, const float FloatValue, const bool BoolValue) {
    return FFortAnalyticsEventAttribute{};
}

UFortBlueprintAnalytics::UFortBlueprintAnalytics() {
}

