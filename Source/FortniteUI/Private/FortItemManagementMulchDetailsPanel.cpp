#include "FortItemManagementMulchDetailsPanel.h"

bool UFortItemManagementMulchDetailsPanel::IsSpaceAvailableForMulch() const {
    return false;
}



TArray<UFortItem*> UFortItemManagementMulchDetailsPanel::GetItemsToMulch() const {
    return TArray<UFortItem*>();
}

TArray<int32> UFortItemManagementMulchDetailsPanel::GetItemCountsToMulch() const {
    return TArray<int32>();
}

void UFortItemManagementMulchDetailsPanel::CommitMulch() {
}

UFortItemManagementMulchDetailsPanel::UFortItemManagementMulchDetailsPanel() {
    this->ResourceList = NULL;
    this->InventoryContext = NULL;
}

