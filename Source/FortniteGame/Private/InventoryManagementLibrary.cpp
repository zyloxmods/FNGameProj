#include "InventoryManagementLibrary.h"

void UInventoryManagementLibrary::SwapItems(TScriptInterface<IFortInventoryOwnerInterface> SourceOwner, TScriptInterface<IFortInventoryOwnerInterface> TargetOwner, TArray<FItemGuidAndCount> ItemGuids) {
}

bool UInventoryManagementLibrary::SwapItem(TScriptInterface<IFortInventoryOwnerInterface> SourceOwner, TScriptInterface<IFortInventoryOwnerInterface> TargetOwner, FGuid ItemGuid, int32 Count) {
    return false;
}

void UInventoryManagementLibrary::RemoveItems(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, TArray<FItemGuidAndCount> Items) {
}

bool UInventoryManagementLibrary::RemoveItem(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, FGuid ItemGuid, int32 Count) {
    return false;
}

bool UInventoryManagementLibrary::GiveItemEntryToInventoryOwner(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, const FFortItemEntry& ItemInstance) {
    return false;
}

void UInventoryManagementLibrary::GetItemsFromInventoryOwnerForRarity(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, TArray<UFortWorldItem*>& Items, const EFortRarity RarityType) {
}

void UInventoryManagementLibrary::GetItemsFromInventoryOwner(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, TArray<UFortWorldItem*>& Items) {
}

UFortControllerComponent_InventoryNetworkManagement* UInventoryManagementLibrary::GetInventoryNetworkComponent(AFortPlayerController* Owner) {
    return NULL;
}

void UInventoryManagementLibrary::AddItems(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, TArray<FItemAndCount> Items) {
}

bool UInventoryManagementLibrary::AddItem(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, const UFortItemDefinition* ItemDefinition, int32 Count) {
    return false;
}

UInventoryManagementLibrary::UInventoryManagementLibrary() {
}

