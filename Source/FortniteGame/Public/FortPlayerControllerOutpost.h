#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOutpostBuildings.h"
#include "FortDepositedResources.h"
#include "FortItemEntry.h"
#include "FortItemQuantityPair.h"
#include "FortPlayerControllerPvE.h"
#include "OnItemFabricatedDelegate.h"
#include "FortPlayerControllerOutpost.generated.h"

class UFortOutpostItemDefinition;
class UFortWorldItem;
class UFortWorldItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerOutpost : public AFortPlayerControllerPvE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemFabricated OnItemFabricated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortOutpostItemDefinition* BuildingBeingUpgraded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LevelBeforeUpgrade;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutpostRefundDialogPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* ItemPendingToFabricate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItem* FabricatedItemPendingForNotification;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_DisintegrationStartTime, meta=(AllowPrivateAccess=true))
    int64 DisintegrationStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuantumGooCompleted, meta=(AllowPrivateAccess=true))
    int32 QuantumGooCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_QuantumGooIncoming, meta=(AllowPrivateAccess=true))
    int32 QuantumGooIncoming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PostDepositedResources, meta=(AllowPrivateAccess=true))
    TArray<FFortDepositedResources> PostDepositedResources;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOutpostOwnerInPIE;
    
public:
    AFortPlayerControllerOutpost();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpgradeBuildingByDefinition(UFortOutpostItemDefinition* OutpostBuilding);
    
    UFUNCTION(BlueprintCallable)
    void UpgradeBuilding(EOutpostBuildings OutpostBuilding);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleOwnerInPIE();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpgradePOST();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpgradeBuilding(UFortOutpostItemDefinition* BuildingToUpgrade);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyPendingFabricationCompleted();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveItemToStorageVault(const FFortItemEntry& NewlyStoredItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMoveItemFromStorageVault(const FFortItemEntry& NewlyCollectedItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLeaveOutpostAsParty();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFabricateItem(const UFortWorldItemDefinition* ItemDef);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDisintegrateItem(FGuid ItemGuid, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDepositPOSTResource(FGuid ItemGuid, int32 Count);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDeactivateCraftingTable();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerActivateCraftingTable();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAbortDisintegration();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_QuantumGooIncoming();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_QuantumGooCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PostDepositedResources();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DisintegrationStartTime();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutpostOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFabricationPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldItemDefinition* GetPendingItemToFabricate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPendingFabricationProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOutpostCoreLevel() const;
    
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
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpInventory();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnOutpostRefundOccurred();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnBuildingLevelChanged(UFortOutpostItemDefinition* UpgradedBuilding, int32 InLevelBeforeUpgrade);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpgradeBuildingFromDefinition(UFortOutpostItemDefinition* OutpostBuilding, bool bLog) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpgradeBuilding(EOutpostBuildings OutpostBuilding, bool bLog) const;
    
};

