#include "FortCreativeCostComponent.h"
#include "Net/UnrealNetwork.h"

bool UFortCreativeCostComponent::TakeWorldResourcesFromPlayer(AFortPawn* Pawn) const {
    return false;
}

void UFortCreativeCostComponent::SetItemResourceCost(const EFortResourceType ResourceType, const int32 Cost) {
}

bool UFortCreativeCostComponent::PassesCostCheck(const AFortPawn* Pawn) const {
    return false;
}

TArray<int32> UFortCreativeCostComponent::GetItemCosts() const {
    return TArray<int32>();
}

void UFortCreativeCostComponent::ClearCosts() {
}

void UFortCreativeCostComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCreativeCostComponent, ItemCosts);
}

UFortCreativeCostComponent::UFortCreativeCostComponent() {
    bShowCostInInteractionIndicator = true;
}

