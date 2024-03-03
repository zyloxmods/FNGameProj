#include "FortGenericDataStoreManagerComponent.h"

bool UFortGenericDataStoreManagerComponent::RemoveNamedStoreByType(const FName StoreName, const UClass* ClassType) {
    return false;
}

UObject* UFortGenericDataStoreManagerComponent::GetNamedStoreByType(const FName StoreName, const UClass* ClassType) const {
    return NULL;
}

UObject* UFortGenericDataStoreManagerComponent::AddNamedStoreByType(const FName StoreName, const UClass* ClassType) {
    return NULL;
}

UFortGenericDataStoreManagerComponent::UFortGenericDataStoreManagerComponent() {
}

