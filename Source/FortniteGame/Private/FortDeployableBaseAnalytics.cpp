#include "FortDeployableBaseAnalytics.h"

void UFortDeployableBaseAnalytics::FireAnalyticsEvent_Neighborhood_ConsoleOpened(AFortPlayerController* FortPC, const FUniqueNetIdRepl& OwnerId) {
}

void UFortDeployableBaseAnalytics::FireAnalyticsEvent_CombatZone_WaveStarted(AFortPlayerController* FortPC, int32 Tier, int32 Wave, int32 NumberOfPlayers, const TArray<ADeployableBaseCore*>& TargetCores, const TArray<ADeployableBaseCore*>& AllCores, const FFortTierCollectionLayoutOutput& CollectionData) {
}

void UFortDeployableBaseAnalytics::FireAnalyticsEvent_CombatZone_WaveFailed(AFortPlayerController* FortPC, int32 Tier, int32 Wave, int32 NumberOfPlayers, const TArray<ADeployableBaseCore*>& TargetCores, const TArray<ADeployableBaseCore*>& AllCores, const FFortTierCollectionLayoutOutput& CollectionData) {
}

void UFortDeployableBaseAnalytics::FireAnalyticsEvent_CombatZone_TierStarted(AFortPlayerController* FortPC, int32 Tier, int32 NumberOfPlayers, const FFortTierCollectionLayoutOutput& CollectionData) {
}

void UFortDeployableBaseAnalytics::FireAnalyticsEvent_CombatZone_TierFailed(AFortPlayerController* FortPC, int32 Tier, int32 Wave, int32 NumberOfPlayers, const FFortTierCollectionLayoutOutput& CollectionData) {
}

void UFortDeployableBaseAnalytics::FireAnalyticsEvent_CombatZone_TierCompleted(AFortPlayerController* FortPC, int32 Tier, int32 FinalWave, int32 NumberOfPlayers, const TArray<ADeployableBaseCore*>& TargetCores, const TArray<ADeployableBaseCore*>& AllCores, const FFortTierCollectionLayoutOutput& CollectionData) {
}

void UFortDeployableBaseAnalytics::FireAnalyticsEvent_CombatZone_ConsoleOpened(AFortPlayerController* FortPC) {
}

UFortDeployableBaseAnalytics::UFortDeployableBaseAnalytics() {
}

