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
    InventoryType = EFortInventoryType::World;
    ReplayPawn = NULL;
    bRequiresLocalUpdate = true;
    bRequiresSaving = true;
    bIsShuttingDown = false;
}

