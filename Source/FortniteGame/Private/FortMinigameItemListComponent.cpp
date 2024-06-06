#include "FortMinigameItemListComponent.h"
#include "Net/UnrealNetwork.h"

bool UFortMinigameItemListComponent::SetPropertyOverridesForItem(const TMap<FString, FString>& NewOptions, int32 ItemIndex) {
    return false;
}

bool UFortMinigameItemListComponent::SetBaseInstigatorData(const FPickupInstigatorData& InstigatorData) {
    return false;
}

bool UFortMinigameItemListComponent::RemoveItem(int32 ItemIndex) {
    return false;
}

void UFortMinigameItemListComponent::OnRep_ItemListData() {
}

TArray<FMinigameSpawnerSpawnParams> UFortMinigameItemListComponent::MakeSpawnParamsList(const FTransform& SpawnTransform) const {
    return TArray<FMinigameSpawnerSpawnParams>();
}

FMinigameSpawnerSpawnParams UFortMinigameItemListComponent::MakeSpawnParams(const int32 Index, const FTransform& SpawnTransform) const {
    return FMinigameSpawnerSpawnParams{};
}


bool UFortMinigameItemListComponent::GetPropertyOverridesForItem(TMap<FString, FString>& CurrentOptions, int32 ItemIndex) const {
    return false;
}

int32 UFortMinigameItemListComponent::GetNumItems() const {
    return 0;
}

TArray<UFortWorldItemDefinition*> UFortMinigameItemListComponent::GetContainedItems() const {
    return TArray<UFortWorldItemDefinition*>();
}

void UFortMinigameItemListComponent::ClearItems() {
}

bool UFortMinigameItemListComponent::CanEditItemListComponent(AFortPlayerController* PlayerController) const {
    return false;
}

void UFortMinigameItemListComponent::AddItemsFromSpawnParams(const TArray<FMinigameSpawnerSpawnParams>& ItemSpawnParams) {
}

int32 UFortMinigameItemListComponent::AddItem(UFortWorldItemDefinition* ItemDefinition, int32 ItemQuantity) {
    return 0;
}

void UFortMinigameItemListComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMinigameItemListComponent, ItemListData);
}

UFortMinigameItemListComponent::UFortMinigameItemListComponent() {
    bAllowItemTracking = false;
    bAllowItemCustomization = false;
}

