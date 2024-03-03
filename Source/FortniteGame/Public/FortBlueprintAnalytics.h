#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EEnvironmentalItemEndReason.h"
#include "EFortBuildingType.h"
#include "EIDScannerResult.h"
#include "EMatchmakingState.h"
#include "FortAnalyticsEventAttribute.h"
#include "FortBlueprintAnalytics.generated.h"

class AActor;
class AController;
class AFortMission;
class AFortPickup;
class AFortPlayerController;
class AFortPlayerPawn;
class UFortQuestItem;
class UObject;

UCLASS(Blueprintable)
class UFortBlueprintAnalytics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortBlueprintAnalytics();
    UFUNCTION(BlueprintCallable)
    static void FireQuestAnalyticsEvent_BlueprintArray(const UObject* SourceBp, const FString& EventName, const UFortQuestItem* Quest, const TArray<FFortAnalyticsEventAttribute>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static void FireQuestAnalyticsEvent_Blueprint(const UObject* SourceBp, const FString& EventName, const UFortQuestItem* Quest);
    
    UFUNCTION(BlueprintCallable)
    static void FireMissionAnalyticsEvent_BlueprintArray(const UObject* SourceBp, const FString& EventName, const TArray<FFortAnalyticsEventAttribute>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static void FireMissionAnalyticsEvent_Blueprint(const UObject* SourceBp, const FString& EventName, const FFortAnalyticsEventAttribute& Attribute);
    
    UFUNCTION(BlueprintCallable)
    static void FireEvent_StreamingMediaRelevancy(AFortPlayerController* FortPC, float Time);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FireEvent_StreamingLevelLoaded(UObject* WorldContextObject, const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    static void FireEvent_PurchaseTierScreen_Interaction(const UObject* SourceBp, const FString& Interaction, const int32 NumberOfTiers);
    
    UFUNCTION(BlueprintCallable)
    static void FireEvent_MatchmakingClientStatusTextChanged(const UObject* SourceBp, bool bMatchmakingIsLocal, bool bUserIsMatchmaking, bool bPartyIsPostMatchmaking, bool bIsStormShieldMission, const FString& QueueState, TEnumAsByte<EMatchmakingState::Type> MatchmakingState);
    
    UFUNCTION(BlueprintCallable)
    static void FireEvent_MatchmakingClientStarted(const UObject* SourceBp, bool bMatchmakingStarted, bool bClientPartyStateMatchmaking, bool bClientPartyStateChangedPostMatchmaking);
    
    UFUNCTION(BlueprintCallable)
    static void FireEvent_MatchmakingClientEnded(const UObject* SourceBp, bool bPartyStateIsWorldView, bool bPartyStateIsTheaterView, bool bPartyStateIsReturningToFrontEnd, bool bMatchmakingComplete, bool bLobbyStarted, bool bMatchmakingCancelled);
    
    UFUNCTION(BlueprintCallable)
    static void FireEvent_ItemThrownBP(const UObject* SourceBp, const FString& ItemName, const FVector& Velocity);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void FireEvent_EndFishingSession(AFortPlayerPawn* PlayerPawn, const AFortPickup* ItemFished, const bool bFromFishingPool, const AActor* ItemUsedToFish, const FString& FishVariantTag, float FishLength, bool bBestCollected);
    
    UFUNCTION(BlueprintCallable)
    static void FireEvent_BuildLimitProgressIncremented(const UObject* SourceBp, AFortPlayerController* FortPC, AFortMission* Mission, TEnumAsByte<EFortBuildingType::Type> BuildingType, int32 BuildLimitProgress, int32 BuildLimit);
    
    UFUNCTION(BlueprintCallable)
    static void FireEvent_BuildLimitProgressDecremented(const UObject* SourceBp, AController* Destroyer, AFortMission* Mission, TEnumAsByte<EFortBuildingType::Type> BuildingType, int32 BuildLimitProgress, int32 BuildLimit);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void FireEvent_BeginFishingSession(AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FireEvent_AttemptLoadingStreamingLevel(UObject* WorldContextObject, const FString& LevelName);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_BlueprintArray(const UObject* SourceBp, const FString& EventName, const TArray<FFortAnalyticsEventAttribute>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticsEvent_Blueprint(const UObject* SourceBp, const FString& EventName, const FFortAnalyticsEventAttribute& Attribute);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticEventItemIDScannerUsed(AFortPlayerController* FortPC, const AActor* ConnectedActor, const FVector ScanneraPos, const EIDScannerResult IdScannerResult);
    
    UFUNCTION(BlueprintCallable)
    static void FireAnalyticEventEnvironmentalItemUsed(AFortPlayerController* FortPC, AActor* EnvironmentalItem, const float SessionLength, const EEnvironmentalItemEndReason SessionEndReason, const AActor* OptionalSecondaryItem);
    
    UFUNCTION(BlueprintCallable)
    static FFortAnalyticsEventAttribute ConstructAnalyticsAttribute(const FString& AttributeName, const FString& StringValue, const FGuid FGuidValue, const int32 IntValue, const float FloatValue, const bool BoolValue);
    
};

