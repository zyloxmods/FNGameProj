#include "FortUIMessageManager.h"
#include "Templates/SubclassOf.h"

void UFortUIMessageManager::HandleMessageRemoved(UFortUIMessageItemWidget* MessageItem) {
}

void UFortUIMessageManager::HandleMessageDisplayed(UFortUIMessageItemWidget* MessageItem) {
}

int32 UFortUIMessageManager::GetNumDisplayedItems() const {
    return 0;
}

UFortUIMessageItemWidget* UFortUIMessageManager::GetNextMessageInQueue() {
    return NULL;
}

UFortUIMessageItemWidget* UFortUIMessageManager::AddMessageItem(TSubclassOf<UFortUIMessageItemWidget> MessageItemClass, APlayerController* OwningPlayer, FName MessageID, int32 StackCount) {
    return NULL;
}

UFortUIMessageManager::UFortUIMessageManager() {
}

