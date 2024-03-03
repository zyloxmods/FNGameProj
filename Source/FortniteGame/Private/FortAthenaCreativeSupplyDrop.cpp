#include "FortAthenaCreativeSupplyDrop.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaCreativeSupplyDrop::SpawnLoot(AFortPawn* Pawn) {
}

void AFortAthenaCreativeSupplyDrop::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaCreativeSupplyDrop, SpawnItems);
}

AFortAthenaCreativeSupplyDrop::AFortAthenaCreativeSupplyDrop() {
}

