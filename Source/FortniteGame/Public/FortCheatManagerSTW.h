#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManagerSTW.generated.h"

UCLASS(Blueprintable)
class UFortCheatManagerSTW : public UChildCheatManager {
    GENERATED_BODY()
public:
    UFortCheatManagerSTW();
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllZones();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestUpgradeOutpostItem(const FString& ItemTemplateID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestSetOutpostDefenseActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestOutpostUI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWorldLevel(float Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHordePlotExpansionSize(int32 XSize, int32 YSize, int32 ZSize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHeroLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHeroClass(const FString& NewHeroName, int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpUpgradeItem(const FString& ItemToUpgrade);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpStorageTransfer(const TArray<FString>& ItemIdsToMoveToOutpost, const TArray<FString>& ItemIdsToMoveToTheater);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpSlotItem(const FString& ItemToSlot);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpResetPersistence();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpRemoveAllTestProfileMocks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpRecycleItem(const FString& ItemToRecycle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpOpenCardPack(const FString& CardPackItemId, int32 SelectionIdx);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpHostGetAllPlayerCachedPersistence();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetSchematicXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetPersonnelXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetHexMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetCachedPersistence();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpConvertItem(const FString& ItemToConvert, int32 ConversionIdx);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpCompleteHexMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpClaimAllResourceCollectors(bool bDebugPrint);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpClaimAllAvailableCollectionBookRewards();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpApplyAlteration(const FString& Schematic, const FString& Alteration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpAddTestStatsMock();
    
    UFUNCTION(BlueprintCallable, Exec)
    void IronCityAutoAmplifierPlacement(int32 Value);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveUsefulThings(int32 NumOfUsefulThings);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveDeployablePlotAllIngredients(int32 NumIngredients);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveCheatInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveBluGlo(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetWorldLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetWorldDifficulty();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceUnlockHordeTiers(int32 MaxTierNumber);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSetHeroRemoteCharacter(int32 PartyMemberIndex, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceHeroType(const FString& HeroPersistentName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EvolveHero();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAppliedHomebaseEffectsWithCoreAttributes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DevSkipTutorial();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearKeepSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeHeroClass(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyWeaponAlteration(const FString& AlterationName);
    
};

