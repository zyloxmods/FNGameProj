#include "FortInventorySubsystem.h"

UFortWorldItem* UFortInventorySubsystem::GetViewTargetItemForActionTag(const AFortPlayerController* OwningPlayerController, const FGameplayTag ActionTag) const {
    return NULL;
}

UFortWorldItem* UFortInventorySubsystem::GetItemForActionTag(const AFortPlayerController* OwningPlayerController, const FGameplayTag ActionTag) const {
    return NULL;
}

FGameplayTag UFortInventorySubsystem::GetActionTagForItem(const UFortItem* Item) const {
    return FGameplayTag{};
}

UFortInventorySubsystem::UFortInventorySubsystem() {
}

