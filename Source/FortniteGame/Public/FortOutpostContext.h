#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "EOutpostBuildings.h"
#include "FortItemQuantityPair.h"
#include "OnBuildingLevelChangedDelegate.h"
#include "OnGooContentNeedRefreshDelegate.h"
#include "OnItemsNeedRefreshDelegate.h"
#include "FortOutpostContext.generated.h"

class UFortItemDefinition;
class UFortOutpostItemDefinition;
class UFortWorldItemDefinition;
class UOutpostPOSTRequirementData;

UCLASS(Blueprintable, NonTransient)
class UFortOutpostContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingLevelChanged OnBuildingLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsNeedRefresh OnItemsNeedRefresh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGooContentNeedRefresh OnGooContentNeedRefresh;
    
    UFortOutpostContext();
    UFUNCTION(BlueprintCallable)
    void UpgradePOST();
    
    UFUNCTION(BlueprintCallable)
    void UpgradeBuildingByDefinition(UFortOutpostItemDefinition* BuildingToUpgrade);
    
    UFUNCTION(BlueprintCallable)
    void UpgradeBuilding(EOutpostBuildings OutpostBuilding);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LeaveOutpostAsParty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPOSTBuildingHealthMod(int32 POSTLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOutpostCoreLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOutpostPOSTRequirementData*> GetNextPOSTLevelRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHighestEnduranceWaveReached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetHarvestingToolForLevel(int32 InHarvestingOptimizerLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuildingUpgradeCostFromDefinition(UFortOutpostItemDefinition* OutpostBuilding, TArray<FFortItemQuantityPair>& OutWorldItems, TArray<FFortItemQuantityPair>& OutAccountItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuildingUpgradeCost(EOutpostBuildings OutpostBuilding, TArray<FFortItemQuantityPair>& OutWorldItems, TArray<FFortItemQuantityPair>& OutAccountItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuildingMaxLevelFromDefinition(UFortOutpostItemDefinition* OutpostBuilding) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuildingMaxLevel(EOutpostBuildings OutpostBuilding) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuildingLevelFromDefinition(UFortOutpostItemDefinition* OutpostBuilding) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuildingLevel(EOutpostBuildings OutpostBuilding) const;
    
    UFUNCTION(BlueprintCallable)
    void DepositPOSTResource(const UFortItemDefinition* ResourceItem, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CleanUpOnExit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpgradePOST() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpgradeBuildingFromDefinition(UFortOutpostItemDefinition* OutpostBuilding, bool bLog) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpgradeBuilding(EOutpostBuildings OutpostBuilding, bool bLog) const;
    
};

