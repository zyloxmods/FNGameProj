#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "DedicatedServerUrlContext.h"
#include "FortBatchUpdatePlayer_DeployableBaseUpdate.h"
#include "FortBatchUpdatePlayer_Update.h"
#include "FortCloudSaveInfo.h"
#include "FortMcpProfile.h"
#include "FortOutpostCoreInfo.h"
#include "FortWorldPlayerLoadout.h"
#include "FortWorldProfileUpdateRequest.h"
#include "ItemIdAndQuantityPair.h"
#include "ItemTransferOperation.h"
#include "FortMcpProfileWorld.generated.h"

class AFortInventory;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfileWorld : public UFortMcpProfile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortWorldProfileUpdateRequest> UpdateRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortWorldPlayerLoadout CachedPlayerLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortInventory* FortInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInventoryInitialized;
    
public:
    UFortMcpProfileWorld();
private:
  /*  UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void UnlockProfiles(const FString& Code, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void StorageTransfer(const TArray<FItemTransferOperation>& TransferOperations, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ModifyQuickbar(const TArray<FString>& PrimaryQuickbarChoices, const FString& SecondaryQuickbarChoice, UPARAM(NotReplicated) FClientUrlContext& Context);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void LockProfiles(const FString& Code, int32 Timeout, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void InitializeTheater(const FString& TheaterGuid, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void DisassembleWorldItems(const TArray<FItemIdAndQuantityPair>& TargetItemIdAndQuantityPairs, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void DestroyWorldItems(const TArray<FString>& ItemIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void DepositPostResources(const TArray<FString>& itemsToDepositIds, const TArray<int32>& itemCountsToDeposit, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void CraftWorldItem(const FString& TargetSchematicItemId, int32 NumTimesToCraft, const FString& TargetSchematicTier, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void BatchUpdatePlayers_Outpost(const TArray<FFortBatchUpdatePlayer_Update>& Updates, const FString& OutpostId, const FFortOutpostCoreInfo& OutpostInfo, const FFortCloudSaveInfo& CloudSaveInfo, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void BatchUpdatePlayers_DeployableBase(const TArray<FFortBatchUpdatePlayer_Update>& Updates, const TArray<FFortBatchUpdatePlayer_DeployableBaseUpdate>& DeployableBaseUpdates, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void BatchUpdatePlayers(const TArray<FFortBatchUpdatePlayer_Update>& Updates, UPARAM(NotReplicated) FDedicatedServerUrlContext& Context);
    */
};

