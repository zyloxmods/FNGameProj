#include "FortAthenaCreativeSupplyDrop.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaCreativeSupplyDrop::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaCreativeSupplyDrop, SpawnItems);
}

AFortAthenaCreativeSupplyDrop::AFortAthenaCreativeSupplyDrop() {
}

