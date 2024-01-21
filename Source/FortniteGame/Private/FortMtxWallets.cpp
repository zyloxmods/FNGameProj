#include "FortMtxWallets.h"

void UFortMtxWallets::SetSelectedAppStore(const TEnumAsByte<EAppStore::Type> InAppStore) {
}

bool UFortMtxWallets::GetSelectedAppStore(TEnumAsByte<EAppStore::Type>& OutAppStore) {
    return false;
}

TArray<TEnumAsByte<EAppStore::Type>> UFortMtxWallets::GetAvailableAppStores() {
    return TArray<TEnumAsByte<EAppStore::Type>>();
}

UFortMtxWallets::UFortMtxWallets() {
}

