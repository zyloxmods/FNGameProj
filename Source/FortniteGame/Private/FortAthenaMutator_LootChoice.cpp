#include "FortAthenaMutator_LootChoice.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_LootChoice::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_LootChoice, LootSelection);
    DOREPLIFETIME(AFortAthenaMutator_LootChoice, bUsingExperimentalTables);
}

AFortAthenaMutator_LootChoice::AFortAthenaMutator_LootChoice() {
    LootSelection = ECustomLootSelection::Default;
    bUsingExperimentalTables = true;
}

