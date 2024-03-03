#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "FortExpeditionUtilities.generated.h"

class AFortPlayerController;
class UFortExpeditionItem;
class UFortItem;
class UObject;
class UWidget;

UCLASS(Blueprintable)
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortExpeditionUtilities();
    UFUNCTION(BlueprintCallable)
    static int32 TotalUnseenExpeditionsForTab(const UWidget* Widget, const FName TabNameID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSquadOnExpedition(const UWidget* Widget, const FName SquadId);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetVehicleTagRequiredForExpedition(const UFortExpeditionItem* Expedition);
    
    UFUNCTION(BlueprintCallable)
    static bool GetVehicleTagFromSquadId(const FName SquadId, FGameplayTag& OutFoundVehicleTag);
    
    UFUNCTION(BlueprintCallable)
    static void GetTotalExpeditionVehiclesAvailable(const UWidget* Widget, AFortPlayerController* FortPC, int32& OutLandVehicles, int32& OutLandVehiclesAvailable, int32& OutSeaVehicles, int32& OutSeaVehiclesAvailable, int32& OutAirVehicles, int32& OutAirVehiclesAvailable);
    
    UFUNCTION(BlueprintCallable)
    static void GetMatchedCriteriaTags(UFortExpeditionItem* Expedition, const TArray<UFortItem*>& SlottedItems, TArray<FGameplayTag>& OutMatchedCriteria);
    
    UFUNCTION(BlueprintCallable)
    static bool GetExpeditionSquadsThatMatchRequirements(const FGameplayTagContainer& RequirementTags, AFortPlayerController* FortPC, TArray<FName>& OutExpeditionSquadIds);
    
    UFUNCTION(BlueprintCallable)
    static float GetExpeditionSquadPower(AFortPlayerController* FortPC, const FName SquadId);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllExpeditionSquadIds(TArray<FName>& OutExpeditionSquadIds);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateTotalPower(AFortPlayerController* FortPC, const UFortExpeditionItem* Expedition, const FName SquadId, const TArray<UFortItem*>& SlottedItems);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateGlobalAndItemRatingModValuesBP(const UFortExpeditionItem* Expedition, const TArray<UFortItem*>& SlottedItems, float& GlobalPowerMod, TArray<float>& SlottedItemMods);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateExpeditionPercentageChanceForSuccess(const UFortExpeditionItem* Expedition, const float TotalPower);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AreExpeditionsUnlocked(UObject* WorldContextObject, const FUniqueNetIdRepl& UniqueId);
    
    UFUNCTION(BlueprintCallable)
    static bool AreAnyExpeditionsComplete(const UWidget* Widget);
    
};

