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

void UFortBlueprintAnalytics::FireEvent_StreamingLevelLoaded(UObject* WorldContextObject, const FString& LevelName) {
}

void UFortBlueprintAnalytics::FireEvent_PurchaseTierScreen_Interaction(const UObject* SourceBp, const FString& Interaction, const int32 NumberOfTiers) {
}

void UFortBlueprintAnalytics::FireEvent_MatchmakingClientStatusTextChanged(const UObject* SourceBp, bool bMatchmakingIsLocal, bool bUserIsMatchmaking, bool bPartyIsPostMatchmaking, bool bIsStormShieldMission, const FString& QueueState, TEnumAsByte<EMatchmakingState::Type> MatchmakingState) {
}

void UFortBlueprintAnalytics::FireEvent_MatchmakingClientStarted(const UObject* SourceBp, bool bMatchmakingStarted, bool bClientPartyStateMatchmaking, bool bClientPartyStateChangedPostMatchmaking) {
}

void UFortBlueprintAnalytics::FireEvent_MatchmakingClientEnded(const UObject* SourceBp, bool bPartyStateIsWorldView, bool bPartyStateIsTheaterView, bool bPartyStateIsReturningToFrontEnd, bool bMatchmakingComplete, bool bLobbyStarted, bool bMatchmakingCancelled) {
}

void UFortBlueprintAnalytics::FireEvent_ItemThrownBP(const UObject* SourceBp, const FString& ItemName, const FVector& Velocity) {
}

void UFortBlueprintAnalytics::FireEvent_EndFishingSession(AFortPlayerPawn* PlayerPawn, const AFortPickup* ItemFished, const bool bFromFishingPool, const AActor* ItemUsedToFish, const FString& FishVariantTag, float FishLength, bool bBestCollected) {
}

void UFortBlueprintAnalytics::FireEvent_BuildLimitProgressIncremented(const UObject* SourceBp, AFortPlayerController* FortPC, AFortMission* Mission, TEnumAsByte<EFortBuildingType::Type> BuildingType, int32 BuildLimitProgress, int32 BuildLimit) {
}

void UFortBlueprintAnalytics::FireEvent_BuildLimitProgressDecremented(const UObject* SourceBp, AController* Destroyer, AFortMission* Mission, TEnumAsByte<EFortBuildingType::Type> BuildingType, int32 BuildLimitProgress, int32 BuildLimit) {
}

void UFortBlueprintAnalytics::FireEvent_BeginFishingSession(AFortPlayerPawn* PlayerPawn) {
}

void UFortBlueprintAnalytics::FireEvent_AttemptLoadingStreamingLevel(UObject* WorldContextObject, const FString& LevelName) {
}

void UFortBlueprintAnalytics::FireAnalyticsEvent_BlueprintArray(const UObject* SourceBp, const FString& EventName, const TArray<FFortAnalyticsEventAttribute>& Attributes) {
}

void UFortBlueprintAnalytics::FireAnalyticsEvent_Blueprint(const UObject* SourceBp, const FString& EventName, const FFortAnalyticsEventAttribute& Attribute) {
}

void UFortBlueprintAnalytics::FireAnalyticEventItemIDScannerUsed(AFortPlayerController* FortPC, const AActor* ConnectedActor, const FVector ScanneraPos, const EIDScannerResult IdScannerResult) {
}

void UFortBlueprintAnalytics::FireAnalyticEventEnvironmentalItemUsed(AFortPlayerController* FortPC, AActor* EnvironmentalItem, const float SessionLength, const EEnvironmentalItemEndReason SessionEndReason, const AActor* OptionalSecondaryItem) {
}

FFortAnalyticsEventAttribute UFortBlueprintAnalytics::ConstructAnalyticsAttribute(const FString& AttributeName, const FString& StringValue, const FGuid FGuidValue, const int32 IntValue, const float FloatValue, const bool BoolValue) {
    return FFortAnalyticsEventAttribute{};
}

UFortBlueprintAnalytics::UFortBlueprintAnalytics() {
}

