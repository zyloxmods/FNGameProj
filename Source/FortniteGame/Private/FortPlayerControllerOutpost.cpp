#include "FortPlayerControllerOutpost.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerControllerOutpost::UpgradeBuildingByDefinition(UFortOutpostItemDefinition* OutpostBuilding) {
}

void AFortPlayerControllerOutpost::UpgradeBuilding(EOutpostBuildings OutpostBuilding) {
}

void AFortPlayerControllerOutpost::ToggleOwnerInPIE() {
}

void AFortPlayerControllerOutpost::ServerUpgradePOST_Implementation() {
}
bool AFortPlayerControllerOutpost::ServerUpgradePOST_Validate() {
    return true;
}

void AFortPlayerControllerOutpost::ServerUpgradeBuilding_Implementation(UFortOutpostItemDefinition* BuildingToUpgrade) {
}
bool AFortPlayerControllerOutpost::ServerUpgradeBuilding_Validate(UFortOutpostItemDefinition* BuildingToUpgrade) {
    return true;
}

void AFortPlayerControllerOutpost::ServerNotifyPendingFabricationCompleted_Implementation() {
}
bool AFortPlayerControllerOutpost::ServerNotifyPendingFabricationCompleted_Validate() {
    return true;
}

void AFortPlayerControllerOutpost::ServerMoveItemToStorageVault_Implementation(const FFortItemEntry& NewlyStoredItem) {
}
bool AFortPlayerControllerOutpost::ServerMoveItemToStorageVault_Validate(const FFortItemEntry& NewlyStoredItem) {
    return true;
}

void AFortPlayerControllerOutpost::ServerMoveItemFromStorageVault_Implementation(const FFortItemEntry& NewlyCollectedItem) {
}
bool AFortPlayerControllerOutpost::ServerMoveItemFromStorageVault_Validate(const FFortItemEntry& NewlyCollectedItem) {
    return true;
}

void AFortPlayerControllerOutpost::ServerLeaveOutpostAsParty_Implementation() {
}
bool AFortPlayerControllerOutpost::ServerLeaveOutpostAsParty_Validate() {
    return true;
}

void AFortPlayerControllerOutpost::ServerFabricateItem_Implementation(const UFortWorldItemDefinition* ItemDef) {
}
bool AFortPlayerControllerOutpost::ServerFabricateItem_Validate(const UFortWorldItemDefinition* ItemDef) {
    return true;
}

void AFortPlayerControllerOutpost::ServerDisintegrateItem_Implementation(FGuid ItemGuid, int32 Count) {
}
bool AFortPlayerControllerOutpost::ServerDisintegrateItem_Validate(FGuid ItemGuid, int32 Count) {
    return true;
}

void AFortPlayerControllerOutpost::ServerDepositPOSTResource_Implementation(FGuid ItemGuid, int32 Count) {
}
bool AFortPlayerControllerOutpost::ServerDepositPOSTResource_Validate(FGuid ItemGuid, int32 Count) {
    return true;
}

void AFortPlayerControllerOutpost::ServerDeactivateCraftingTable_Implementation() {
}
bool AFortPlayerControllerOutpost::ServerDeactivateCraftingTable_Validate() {
    return true;
}

void AFortPlayerControllerOutpost::ServerActivateCraftingTable_Implementation() {
}
bool AFortPlayerControllerOutpost::ServerActivateCraftingTable_Validate() {
    return true;
}

void AFortPlayerControllerOutpost::ServerAbortDisintegration_Implementation() {
}
bool AFortPlayerControllerOutpost::ServerAbortDisintegration_Validate() {
    return true;
}

void AFortPlayerControllerOutpost::OnRep_QuantumGooIncoming() {
}

void AFortPlayerControllerOutpost::OnRep_QuantumGooCompleted() {
}

void AFortPlayerControllerOutpost::OnRep_PostDepositedResources() {
}

void AFortPlayerControllerOutpost::OnRep_DisintegrationStartTime() {
}

bool AFortPlayerControllerOutpost::IsOutpostOwner() const {
    return false;
}

bool AFortPlayerControllerOutpost::IsFabricationPending() const {
    return false;
}

UFortWorldItemDefinition* AFortPlayerControllerOutpost::GetPendingItemToFabricate() const {
    return NULL;
}

float AFortPlayerControllerOutpost::GetPendingFabricationProgress() const {
    return 0.0f;
}

int32 AFortPlayerControllerOutpost::GetOutpostCoreLevel() const {
    return 0;
}

void AFortPlayerControllerOutpost::GetBuildingUpgradeCostFromDefinition(UFortOutpostItemDefinition* OutpostBuilding, TArray<FFortItemQuantityPair>& OutWorldItems, TArray<FFortItemQuantityPair>& OutAccountItems) const {
}

void AFortPlayerControllerOutpost::GetBuildingUpgradeCost(EOutpostBuildings OutpostBuilding, TArray<FFortItemQuantityPair>& OutWorldItems, TArray<FFortItemQuantityPair>& OutAccountItems) const {
}

int32 AFortPlayerControllerOutpost::GetBuildingMaxLevelFromDefinition(UFortOutpostItemDefinition* OutpostBuilding) const {
    return 0;
}

int32 AFortPlayerControllerOutpost::GetBuildingMaxLevel(EOutpostBuildings OutpostBuilding) const {
    return 0;
}

int32 AFortPlayerControllerOutpost::GetBuildingLevelFromDefinition(UFortOutpostItemDefinition* OutpostBuilding) const {
    return 0;
}

int32 AFortPlayerControllerOutpost::GetBuildingLevel(EOutpostBuildings OutpostBuilding) const {
    return 0;
}

void AFortPlayerControllerOutpost::DumpInventory() {
}

void AFortPlayerControllerOutpost::ClientOnOutpostRefundOccurred_Implementation() {
}

void AFortPlayerControllerOutpost::ClientOnBuildingLevelChanged_Implementation(UFortOutpostItemDefinition* UpgradedBuilding, int32 InLevelBeforeUpgrade) {
}

bool AFortPlayerControllerOutpost::CanUpgradeBuildingFromDefinition(UFortOutpostItemDefinition* OutpostBuilding, bool bLog) const {
    return false;
}

bool AFortPlayerControllerOutpost::CanUpgradeBuilding(EOutpostBuildings OutpostBuilding, bool bLog) const {
    return false;
}

void AFortPlayerControllerOutpost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerControllerOutpost, DisintegrationStartTime);
    DOREPLIFETIME(AFortPlayerControllerOutpost, QuantumGooCompleted);
    DOREPLIFETIME(AFortPlayerControllerOutpost, QuantumGooIncoming);
    DOREPLIFETIME(AFortPlayerControllerOutpost, PostDepositedResources);
}

AFortPlayerControllerOutpost::AFortPlayerControllerOutpost() {
    this->BuildingBeingUpgraded = NULL;
    this->LevelBeforeUpgrade = 0;
    this->bOutpostRefundDialogPending = false;
    this->ItemPendingToFabricate = NULL;
    this->FabricatedItemPendingForNotification = NULL;
    this->DisintegrationStartTime = 0;
    this->QuantumGooCompleted = 0;
    this->QuantumGooIncoming = 0;
    this->bIsOutpostOwnerInPIE = true;
}

