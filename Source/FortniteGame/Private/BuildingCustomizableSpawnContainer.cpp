#include "BuildingCustomizableSpawnContainer.h"
#include "Net/UnrealNetwork.h"

void ABuildingCustomizableSpawnContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingCustomizableSpawnContainer, SpawnItems);
}

ABuildingCustomizableSpawnContainer::ABuildingCustomizableSpawnContainer() {
}

