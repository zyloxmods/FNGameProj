#include "FortOutpostAnalytics.h"

void UFortOutpostAnalytics::FireAnalyticsEvent_OutpostSupplyDropPickedUp(const UObject* SourceBp, const TArray<FFortAnalyticsEventAttribute>& Resourcees) {
}

void UFortOutpostAnalytics::FireAnalyticsEvent_OutpostLoaded(const UObject* SourceBp, const int32 DefenseLeg) {
}

void UFortOutpostAnalytics::FireAnalyticsEvent_OutpostLeaveOutpost(const UObject* SourceBp, const FString& BuildingType, const int32 NumWavesStarted, const int32 DefenseLeg) {
}

void UFortOutpostAnalytics::FireAnalyticsEvent_OutpostDefenseStart(const UObject* SourceBp, const int32 NumWavesTotal, const int32 DefenseLeg) {
}

void UFortOutpostAnalytics::FireAnalyticsEvent_OutpostDefenseEnd(const UObject* SourceBp, const int32 NumWavesStarted, const int32 NumWavesTotal, bool bSucceeded, bool bAbandoned, const int32 DefenseLeg) {
}

void UFortOutpostAnalytics::FireAnalyticsEvent_OutpostBuildingDefended(const UObject* SourceBp, const FString& BuildingType, const int32 NumMissionsCompleted) {
}

void UFortOutpostAnalytics::FireAnalyticsEvent_OutpostBuildingActivated(const UObject* SourceBp, const FString& BuildingType, const int32 NumMissionsCompleted) {
}

void UFortOutpostAnalytics::FireAnalyticsEvent_OutpostAttackWaveStarted(const UObject* SourceBp, const FString& BuildingType, const int32 NumWavesStarted, const FString& Direction, const int32 DefenseLeg) {
}

void UFortOutpostAnalytics::FireAnalyticsEvent_OutpostAttackWaveCompleted(const UObject* SourceBp, const FString& BuildingType, const int32 NumWavesCompleted, const bool Succeeded, const FString& Direction, const int32 DefenseLeg) {
}

UFortOutpostAnalytics::UFortOutpostAnalytics() {
}

