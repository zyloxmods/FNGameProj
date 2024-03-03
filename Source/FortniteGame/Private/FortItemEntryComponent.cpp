#include "FortItemEntryComponent.h"

int32 UFortItemEntryComponent::TrySetLoadedAmmo(int32 NewAmmoAmount) {
    return 0;
}

bool UFortItemEntryComponent::TakeItemFromInventoryOwner(const FGuid& ItemGuid, const int32 Count, TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, const bool bTreatAsPickup) {
    return false;
}

void UFortItemEntryComponent::SetOwnedItem(const FFortItemEntry& Item) {
}

bool UFortItemEntryComponent::HasItem() const {
    return false;
}

FFortItemEntry UFortItemEntryComponent::GetOwnedItem() const {
    return FFortItemEntry{};
}

int32 UFortItemEntryComponent::GetLoadedAmmo() const {
    return 0;
}

int32 UFortItemEntryComponent::GetClipSize() const {
    return 0;
}

void UFortItemEntryComponent::Empty() {
}

bool UFortItemEntryComponent::AddItemToInventoryOwner(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner) {
    return false;
}

UFortItemEntryComponent::UFortItemEntryComponent() {
}

