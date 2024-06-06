#include "FortMcpProfileWorld.h"
/*
void UFortMcpProfileWorld::UnlockProfiles_Implementation(const FString& Code, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileWorld::StorageTransfer_Implementation(const TArray<FItemTransferOperation>& TransferOperations, FClientUrlContext& Context) {
}

void UFortMcpProfileWorld::ModifyQuickbar_Implementation(const TArray<FString>& PrimaryQuickbarChoices, const FString& SecondaryQuickbarChoice, FClientUrlContext& Context) {
}

void UFortMcpProfileWorld::LockProfiles_Implementation(const FString& Code, int32 Timeout, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileWorld::InitializeTheater_Implementation(const FString& TheaterGuid, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileWorld::DisassembleWorldItems_Implementation(const TArray<FItemIdAndQuantityPair>& TargetItemIdAndQuantityPairs, FClientUrlContext& Context) {
}

void UFortMcpProfileWorld::DestroyWorldItems_Implementation(const TArray<FString>& ItemIds, FClientUrlContext& Context) {
}

void UFortMcpProfileWorld::DepositPostResources_Implementation(const TArray<FString>& itemsToDepositIds, const TArray<int32>& itemCountsToDeposit, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileWorld::CraftWorldItem_Implementation(const FString& TargetSchematicItemId, int32 NumTimesToCraft, const FString& TargetSchematicTier, FClientUrlContext& Context) {
}

void UFortMcpProfileWorld::BatchUpdatePlayers_Outpost_Implementation(const TArray<FFortBatchUpdatePlayer_Update>& Updates, const FString& OutpostId, const FFortOutpostCoreInfo& OutpostInfo, const FFortCloudSaveInfo& CloudSaveInfo, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileWorld::BatchUpdatePlayers_DeployableBase_Implementation(const TArray<FFortBatchUpdatePlayer_Update>& Updates, const TArray<FFortBatchUpdatePlayer_DeployableBaseUpdate>& DeployableBaseUpdates, FDedicatedServerUrlContext& Context) {
}

void UFortMcpProfileWorld::BatchUpdatePlayers_Implementation(const TArray<FFortBatchUpdatePlayer_Update>& Updates, FDedicatedServerUrlContext& Context) {
}*/

UFortMcpProfileWorld::UFortMcpProfileWorld() {
    FortInventory = NULL;
    bIsInventoryInitialized = false;
}

