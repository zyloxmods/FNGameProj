#include "FortInventory.h"
#include "Net/UnrealNetwork.h"

void AFortInventory::HandleInventoryLocalUpdate() {
}

void AFortInventory::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortInventory, InventoryType);
    DOREPLIFETIME(AFortInventory, Inventory);
    DOREPLIFETIME(AFortInventory, ReplayPawn);
}

AFortInventory::AFortInventory() {
    this->InventoryType = EFortInventoryType::World;
    this->ReplayPawn = NULL;
    this->bRequiresLocalUpdate = true;
    this->bRequiresSaving = true;
    this->bIsShuttingDown = false;
}

