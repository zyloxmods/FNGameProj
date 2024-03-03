#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EOutpostBuildings.h"
#include "EStormShieldDefense.h"
#include "IronCityDifficultyInfo.h"
#include "FortOutpostFunctionLibrary.generated.h"

class AFortPlayerController;
class AFortPlayerControllerFrontEnd;
class AFortPlayerControllerOutpost;
class UFortMissionConfigData;
class UFortOutpostItemDefinition;
class UFortWorldItem;
class UObject;

UCLASS(Blueprintable)
class UFortOutpostFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortOutpostFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void TransferItemToStorage(AFortPlayerController* Player, UFortWorldItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void TransferItemFromStorage(AFortPlayerController* Player, UFortWorldItem* Item, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetWargameActive(UObject* WorldContextObject, bool bActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetStormShieldDefenseType(UObject* WorldContextObject, EStormShieldDefense Type);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetOutpostGameDifficultyRow(UObject* WorldContextObject, const FDataTableRowHandle& GameDifficultyInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetOutpostDefenseActive(UObject* WorldContextObject, bool bActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIronCityMinMaxPowerLevels(UObject* WorldContextObject, float MinPowerLevel, float MaxPowerLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetEnduranceWaveCompleted(UObject* WorldContextObject, const int32 WaveNumber, bool& bNewHighest);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveIronCityLowestPlayerAccountLevel(UObject* WorldContextObject, int32 AccountLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveIronCityEarlyPlayerInfos(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag GetPlacementTagFromOutpostBuildingTag(UObject* WorldContextObject, const FGameplayTag& BuildingTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static UFortMissionConfigData* GetOutpostQuestMissionConfigDataFrontEnd(AFortPlayerControllerFrontEnd* FortPC, FGameplayTag ConfigTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFortMissionConfigData* GetOutpostQuestMissionConfigData(UObject* WorldContextObject, FGameplayTag ConfigTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortPlayerControllerOutpost* GetOutpostOwner(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag GetOutpostBuildingTagFromPlacementTag(UObject* WorldContextObject, const FGameplayTag& PlacementTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFortOutpostItemDefinition* GetOutpostBuildingItemDefinition(UObject* WorldContextObject, EOutpostBuildings Building);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetIronCityAveragePlayerAccountLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FIronCityDifficultyInfo GetCachedIronCityDifficultyInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void FlushTransferRequests(AFortPlayerController* Player);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DeployOutpostBuildingTagOnPlacementTag(UObject* WorldContextObject, const FGameplayTag& BuildingTag, const FGameplayTag& PlacementTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CacheIronCityDifficultyInfo(UObject* WorldContextObject, int32 AccountLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BuildingActorRecordUpdatesEnabled(UObject* WorldContextObject);
    
};

