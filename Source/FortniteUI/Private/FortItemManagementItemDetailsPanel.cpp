#include "FortItemManagementItemDetailsPanel.h"



TArray<UFortAmmoItemDefinition*> UFortItemManagementItemDetailsPanel::GetAmmoTypeItemDefinitions() {
    return TArray<UFortAmmoItemDefinition*>();
}

UFortItemManagementItemDetailsPanel::UFortItemManagementItemDetailsPanel() {
    this->HasItemMarkedForMulching = false;
    this->InventoryContext = NULL;
}

