#include "UINavigationManager.h"

void UUINavigationManager::PushNavigation(FText DisplayName, UObject* ObjectData, FName IdData, int32 IntData, const FUINavigateDelegate& OnNavigateTo, const FUINavigateDelegate& OnNavigateFrom) {
}

void UUINavigationManager::PopNavigation() {
}

void UUINavigationManager::NavigationToIndex(int32 Index) {
}

int32 UUINavigationManager::GetStackSize() {
    return 0;
}

FText UUINavigationManager::GetDisplayName(int32 Index) {
    return FText::GetEmpty();
}

void UUINavigationManager::ClearStack() {
}

UUINavigationManager::UUINavigationManager() {
}

