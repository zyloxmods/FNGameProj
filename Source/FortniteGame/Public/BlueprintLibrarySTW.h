#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "FortCollectionBookDirectPurchaseData.h"
#include "FortEncounterSettings.h"
#include "FortSpecializationSlot.h"
#include "TieredWaveSetData.h"
#include "BlueprintLibrarySTW.generated.h"

class AFortPlayerController;
class UFortAbilityKit;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UBlueprintLibrarySTW : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintLibrarySTW();
    UFUNCTION(BlueprintCallable)
    static bool SwitchHeroType(AFortPlayerController* FortPC, const FString& NewHeroName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIdleKickEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCriticalMissionJoinability(UObject* WorldContextObject, bool bJoinable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetShowHeroHeadAccessoriesForLocalPlayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetShowHeroBackpackForLocalPlayer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortAbilityKit* GetRemovedAbilityKit(const FFortSpecializationSlot& Slot);
    
    UFUNCTION(BlueprintCallable)
    static bool GetPurchaseCostsRow(FDataTableRowHandle DataTableRowHandle, FFortCollectionBookDirectPurchaseData& OutRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetLocalPlayerHasHeroHeadAccessories(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetLocalPlayerHasHeroBackpack(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortAbilityKit* GetGrantedAbilityKit(const FFortSpecializationSlot& Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetCalculatedGameDifficulty(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FFortEncounterSettings ApplyEncounterOptionOverridesFromWaveDataToEncounterSettings(const FTieredWaveSetData& WaveData, UPARAM(Ref) FFortEncounterSettings& EncounterSettings);
    
};

