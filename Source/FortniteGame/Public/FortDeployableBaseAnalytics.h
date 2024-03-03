#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortTierCollectionLayoutOutput.h"
#include "FortDeployableBaseAnalytics.generated.h"

class ADeployableBaseCore;
class AFortPlayerController;

UCLASS(Blueprintable)
class UFortDeployableBaseAnalytics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortDeployableBaseAnalytics();
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_Neighborhood_ConsoleOpened(AFortPlayerController* FortPC, const FUniqueNetIdRepl& OwnerId);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_CombatZone_WaveStarted(AFortPlayerController* FortPC, int32 Tier, int32 Wave, int32 NumberOfPlayers, const TArray<ADeployableBaseCore*>& TargetCores, const TArray<ADeployableBaseCore*>& AllCores, const FFortTierCollectionLayoutOutput& CollectionData);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_CombatZone_WaveFailed(AFortPlayerController* FortPC, int32 Tier, int32 Wave, int32 NumberOfPlayers, const TArray<ADeployableBaseCore*>& TargetCores, const TArray<ADeployableBaseCore*>& AllCores, const FFortTierCollectionLayoutOutput& CollectionData);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_CombatZone_TierStarted(AFortPlayerController* FortPC, int32 Tier, int32 NumberOfPlayers, const FFortTierCollectionLayoutOutput& CollectionData);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_CombatZone_TierFailed(AFortPlayerController* FortPC, int32 Tier, int32 Wave, int32 NumberOfPlayers, const FFortTierCollectionLayoutOutput& CollectionData);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_CombatZone_TierCompleted(AFortPlayerController* FortPC, int32 Tier, int32 FinalWave, int32 NumberOfPlayers, const TArray<ADeployableBaseCore*>& TargetCores, const TArray<ADeployableBaseCore*>& AllCores, const FFortTierCollectionLayoutOutput& CollectionData);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_CombatZone_ConsoleOpened(AFortPlayerController* FortPC);
    
};

