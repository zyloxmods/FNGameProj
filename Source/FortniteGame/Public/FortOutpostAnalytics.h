#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortAnalyticsEventAttribute.h"
#include "FortOutpostAnalytics.generated.h"

class UObject;

UCLASS(Blueprintable)
class UFortOutpostAnalytics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortOutpostAnalytics();
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_OutpostSupplyDropPickedUp(const UObject* SourceBp, const TArray<FFortAnalyticsEventAttribute>& Resourcees);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_OutpostLoaded(const UObject* SourceBp, const int32 DefenseLeg);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_OutpostLeaveOutpost(const UObject* SourceBp, const FString& BuildingType, const int32 NumWavesStarted, const int32 DefenseLeg);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_OutpostDefenseStart(const UObject* SourceBp, const int32 NumWavesTotal, const int32 DefenseLeg);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_OutpostDefenseEnd(const UObject* SourceBp, const int32 NumWavesStarted, const int32 NumWavesTotal, bool bSucceeded, bool bAbandoned, const int32 DefenseLeg);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_OutpostBuildingDefended(const UObject* SourceBp, const FString& BuildingType, const int32 NumMissionsCompleted);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_OutpostBuildingActivated(const UObject* SourceBp, const FString& BuildingType, const int32 NumMissionsCompleted);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_OutpostAttackWaveStarted(const UObject* SourceBp, const FString& BuildingType, const int32 NumWavesStarted, const FString& Direction, const int32 DefenseLeg);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_OutpostAttackWaveCompleted(const UObject* SourceBp, const FString& BuildingType, const int32 NumWavesCompleted, const bool Succeeded, const FString& Direction, const int32 DefenseLeg);
    
};

